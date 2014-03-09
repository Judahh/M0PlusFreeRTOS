/*
 * Gyroscope.h
 *
 *  Model: MMA8451
 *  Created on: Feb 20, 2014
 *      Author: JH
 */

#ifndef GYROSCOPE_H_
#define GYROSCOPE_H_
#include "PE_Types.h"
#include "PE_LDD.h"
#include "I2C1.h"

typedef struct {
	volatile bool dataReceivedFlg; /* set to TRUE by the interrupt if we have received data */
	volatile bool dataTransmittedFlg; /* set to TRUE by the interrupt if we have set data */
	LDD_TDeviceData *handle; /* pointer to the device handle */
}GyroscopeTDataState;

/* \brief Run the demo application */
uint8_t gyroscopeInit(void);
void gyroscopeDeinit(void);
void gyroscopeTestRun(uint8_t res);


#endif /* GYROSCOPE_H_ */
