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
#include "PWMLEDBlue.h"
#include "Tasks/HandlesEnum.h"

void taskBlueLedWork(void);
signed portBASE_TYPE taskBlueLedStart(void);
signed portBASE_TYPE taskBlueLedStop(void);

#endif /* TASKBLUELED_H_ */
