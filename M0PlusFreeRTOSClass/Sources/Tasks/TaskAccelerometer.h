/*
 * TaskAccelerometer.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKACCELEROMETER_H_
#define TASKACCELEROMETER_H_

#include "FreeRTOS.h"
#include "FreeRTOS0.h"
#include "task.h"
#include "stdio.h"
#include "Util/Accelerometer.h"
#include "TaskBuzzer.h"
#include "Tasks/HandlesEnum.h"
#include "MMA0.h"

bool taskAccelerometerWork(bool likelyError);
signed portBASE_TYPE taskAccelerometerStart(void);
signed portBASE_TYPE taskAccelerometerStop(void);

void init(void);

void initBeep(void);

void initError(void);

void startBeep(void);

void startError(void);

void stopBeep(void);

void stopError(void);

#endif /* TASKACCELEROMETER_H_ */
