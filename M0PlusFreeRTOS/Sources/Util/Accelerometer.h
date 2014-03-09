/*
 * Accelerometer.h
 *
 *  Model: MMA8451
 *  Created on: Feb 20, 2014
 *      Author: JH
 */

#ifndef ACCELEROMETER_H_
#define ACCELEROMETER_H_
#include "PE_Types.h"
#include "PE_LDD.h"
#include "I2C0.h"
#include "PWMLEDBlue.h"
#include "PWMLEDGreen.h"
#include "PWMLEDRed.h"

typedef struct {
	volatile bool dataReceivedFlg; /* set to TRUE by the interrupt if we have received data */
	volatile bool dataTransmittedFlg; /* set to TRUE by the interrupt if we have set data */
	LDD_TDeviceData *handle; /* pointer to the device handle */
}AccelerometerTDataState;

/* \brief Run the demo application */
uint8_t accelerometerInit(void);
void accelerometerDeinit(void);
void accelerometerTestRun(uint8_t res);


#endif /* ACCELEROMETER_H_ */
