/*
 * TaskRedLed2.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKREDLED2_H_
#define TASKREDLED2_H_

#include "FreeRTOS.h"
#include "FreeRTOS0.h"
#include "task.h"
#include "TaskGreenLed.h"
#include "TaskRedLed.h"
#include "PWMLEDRed.h"
#include "PWMLEDGreen.h"
#include "Tasks/HandlesEnum.h"

void taskRedLed2Work(void);
signed portBASE_TYPE taskRedLed2Start(void);
signed portBASE_TYPE taskRedLed2Stop(void);
void invertRedLed2(void);
bool reducedPriority;

#endif /* TASKREDLED2_H_ */
