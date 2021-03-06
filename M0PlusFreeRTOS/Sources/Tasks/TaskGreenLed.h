/*
 * TaskGreenLed.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKGREENLED_H_
#define TASKGREENLED_H_

#include "FreeRTOS.h"
#include "FreeRTOS0.h"
#include "task.h"
#include "PWMLEDGreen.h"
#include "Tasks/HandlesEnum.h"

void taskGreenLedWork(void);
signed portBASE_TYPE taskGreenLedStart(void);
signed portBASE_TYPE taskGreenLedStop(void);

#endif /* TASKGREENLED_H_ */
