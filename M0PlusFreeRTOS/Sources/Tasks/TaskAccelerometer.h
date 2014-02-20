/*
 * TaskBlueLed.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKBLUELED_H_
#define TASKBLUELED_H_

#include "FreeRTOS.h"
#include "FRTOS1.h"
#include "task.h"
#include "Util/Accelerometer.h"

void taskAccelerometerWork(void);
signed portBASE_TYPE taskAccelerometerStart(void);
signed portBASE_TYPE taskAccelerometerStop(void);

#endif /* TASKBLUELED_H_ */
