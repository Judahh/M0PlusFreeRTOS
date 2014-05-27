/*
 * TaskSendString2.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKSENDSTRING2_H_
#define TASKSENDSTRING2_H_

#include "FreeRTOS.h"
#include "FreeRTOS0.h"
#include "task.h"
#include "stdio.h"
#include "Tasks/HandlesEnum.h"

void taskSendString2Work(void);
signed portBASE_TYPE taskSendString2Start(void);
signed portBASE_TYPE taskSendString2Stop(void);

#endif /* TASKSENDSTRING2_H_ */
