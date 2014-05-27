/*
 * Gyroscope.c
 *
 *  Created on: Feb 20, 2014
 *      Author: JH
 */

#include "Gyroscope.h"

#define L3GD20_ADDRESS                (0x6B)        // 1101011
#define L3GD20_POLL_TIMEOUT           (100)         // Maximum number of read attempts
#define L3GD20_ID                     (0b11010100)

#define L3GD20_SENSITIVITY_250DPS  (0.00875F)      // Roughly 22/256 for fixed point match
#define L3GD20_SENSITIVITY_500DPS  (0.0175F)       // Roughly 45/256
#define L3GD20_SENSITIVITY_2000DPS (0.070F)        // Roughly 18/256
#define L3GD20_DPS_TO_RADS         (0.017453293F)  // degress/s to rad/s multiplier


/* External 3-axis gyroscope control register addresses */
#define L3GD20_CTRL_REG_1 0x2F
/* L3GD20 3-axis gyroscope control register bit masks */
#define L3GD20_ACTIVE_BIT_MASK 0x01
#define L3GD20_F_READ_BIT_MASK 0x02

/* External 3-axis gyroscope data register addresses */
#define L3GD20_OUT_X_MSB 0x01
#define L3GD20_OUT_X_LSB 0x02
#define L3GD20_OUT_Y_MSB 0x03
#define L3GD20_OUT_Y_LSB 0x04
#define L3GD20_OUT_Z_MSB 0x05
#define L3GD20_OUT_Z_LSB 0x06

typedef enum {
	L3DS20_RANGE_250DPS, L3DS20_RANGE_500DPS, L3DS20_RANGE_2000DPS
} l3gd20Range_t;

typedef struct l3gd20Data_s {
	float x;
	float y;
	float z;
} l3gd20Data;

typedef enum {                                               // DEFAULT    TYPE
	L3GD20_REGISTER_WHO_AM_I = 0x0F,   // 11010100   r
	L3GD20_REGISTER_CTRL_REG1 = 0x20,   // 00000111   rw
	L3GD20_REGISTER_CTRL_REG2 = 0x21,   // 00000000   rw
	L3GD20_REGISTER_CTRL_REG3 = 0x22,   // 00000000   rw
	L3GD20_REGISTER_CTRL_REG4 = 0x23,   // 00000000   rw
	L3GD20_REGISTER_CTRL_REG5 = 0x24,   // 00000000   rw
	L3GD20_REGISTER_REFERENCE = 0x25,   // 00000000   rw
	L3GD20_REGISTER_OUT_TEMP = 0x26,   //            r
	L3GD20_REGISTER_STATUS_REG = 0x27,   //            r
	L3GD20_REGISTER_OUT_X_L = 0x28,   //            r
	L3GD20_REGISTER_OUT_X_H = 0x29,   //            r
	L3GD20_REGISTER_OUT_Y_L = 0x2A,   //            r
	L3GD20_REGISTER_OUT_Y_H = 0x2B,   //            r
	L3GD20_REGISTER_OUT_Z_L = 0x2C,   //            r
	L3GD20_REGISTER_OUT_Z_H = 0x2D,   //            r
	L3GD20_REGISTER_FIFO_CTRL_REG = 0x2E,   // 00000000   rw
	L3GD20_REGISTER_FIFO_SRC_REG = 0x2F,   //            r
	L3GD20_REGISTER_INT1_CFG = 0x30,   // 00000000   rw
	L3GD20_REGISTER_INT1_SRC = 0x31,   //            r
	L3GD20_REGISTER_TSH_XH = 0x32,   // 00000000   rw
	L3GD20_REGISTER_TSH_XL = 0x33,   // 00000000   rw
	L3GD20_REGISTER_TSH_YH = 0x34,   // 00000000   rw
	L3GD20_REGISTER_TSH_YL = 0x35,   // 00000000   rw
	L3GD20_REGISTER_TSH_ZH = 0x36,   // 00000000   rw
	L3GD20_REGISTER_TSH_ZL = 0x37,   // 00000000   rw
	L3GD20_REGISTER_INT1_DURATION = 0x38    // 00000000   rw
} l3gd20Registers_t;

static GyroscopeTDataState deviceData;

uint8_t L3GD20_ReadReg(uint8_t addr, uint8_t *data, short dataSize) {
	uint8_t res;
	printf("A\r\n");
	/* Send I2C address plus register address to the I2C bus *without* a stop condition */
	res = I2C1_MasterSendBlock(deviceData.handle, &addr, 0x80,
			LDD_I2C_NO_SEND_STOP);
	if (res != ERR_OK) {
		return ERR_FAILED;
	}
	while (!deviceData.dataTransmittedFlg) {
	} /* Wait until data is sent */
	printf("B\r\n");
	deviceData.dataTransmittedFlg = FALSE;

	/* Receive InpData (1 byte) from the I2C bus and generates a stop condition to end transmission */
	res = I2C1_MasterReceiveBlock(deviceData.handle, data, dataSize,
			LDD_I2C_SEND_STOP);
	if (res != ERR_OK) {
		return ERR_FAILED;
	}
	while (!deviceData.dataReceivedFlg) {
	} /* Wait until data is received received */
	printf("C\r\n");
	deviceData.dataReceivedFlg = FALSE;
	return ERR_OK;
}

uint8_t L3GD20_WriteReg(uint8_t addr, uint8_t val) {
	uint8_t buf[2], res;

	printf("D\r\n");
	buf[0] = addr;
	buf[1] = val;
	res = I2C1_MasterSendBlock(deviceData.handle, &buf, 2U, LDD_I2C_SEND_STOP); /* Send OutData (3 bytes with address) on the I2C bus and generates not a stop condition to end transmission */
	if (res != ERR_OK) {
		return ERR_FAILED;
	}
	while (!deviceData.dataTransmittedFlg) {
	} /* Wait until date is sent */
	printf("E\r\n");
	deviceData.dataTransmittedFlg = FALSE;
	return ERR_OK;
}

uint8_t gyroscopeInit(void) {
	deviceData.handle = I2C1_Init(&deviceData);
	printf("gyroscopeInit\r\n");

	/* F_READ: Fast read mode, data format limited to single byte (auto increment counter will skip LSB)
	 * ACTIVE: Full scale selection
	 */

	L3GD20_WriteReg(L3GD20_REGISTER_CTRL_REG1, 0x0F);

	uint8_t range = 2;

	switch (range) {
	case 0:
		L3GD20_WriteReg(L3GD20_REGISTER_CTRL_REG4, 0x00);
		break;
	case 1:
		L3GD20_WriteReg(L3GD20_REGISTER_CTRL_REG4, 0x10);
		break;
	default:
		L3GD20_WriteReg(L3GD20_REGISTER_CTRL_REG4, 0x20);
		break;
	}

	return L3GD20_WriteReg(L3GD20_CTRL_REG_1,
			L3GD20_F_READ_BIT_MASK | L3GD20_ACTIVE_BIT_MASK);
}

void gyroscopeDeinit(void) {
	I2C1_Deinit(deviceData.handle);
}

static int8_t xyz[3];

void gyroscopeTestRun(uint8_t res) {

//	if (res == ERR_OK) {
	res = L3GD20_ReadReg(L3GD20_OUT_X_MSB, (uint8_t*) &xyz, 3);

	printf("[0]=%d\r\n", xyz[0]);
	printf("[1]=%d\r\n", xyz[1]);
	printf("[2]=%d\r\n", xyz[2]);
//	}

}
