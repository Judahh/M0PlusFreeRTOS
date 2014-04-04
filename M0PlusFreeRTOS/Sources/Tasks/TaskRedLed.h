/*
 * TaskRedLed.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKREDLED_H_
#define TASKREDLED_H_

#include "FreeRTOS.h"
#include "FreeRTOS0.h"
#include "task.h"
#include "PWMLEDRed.h"
#include "Tasks/HandlesEnum.h"

void taskRedLedWork(void);
signed portBASE_TYPE taskRedLedStart(void);
signed portBASE_TYPE taskRedLedStop(void);

#endif /* TASKREDLED_H_ */
