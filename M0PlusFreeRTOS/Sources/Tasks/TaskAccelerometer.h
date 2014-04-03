/*
 * TaskAccelerometer.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKACCELEROMETER_H_
#define TASKACCELEROMETER_H_

#include "FreeRTOS.h"
#include "FRTOS1.h"
#include "task.h"
#include "stdio.h"
#include "Util/Accelerometer.h"
#include "Tasks/HandlesEnum.h"
#include "MMA0.h"

void taskAccelerometerWork(void);
signed portBASE_TYPE taskAccelerometerStart(void);
signed portBASE_TYPE taskAccelerometerStop(void);

#endif /* TASKACCELEROMETER_H_ */
