/*
 * TaskSendString.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKSENDSTRING_H_
#define TASKSENDSTRING_H_

#include "FreeRTOS.h"
#include "FreeRTOS0.h"
#include "task.h"
#include "stdio.h"
#include "Tasks/HandlesEnum.h"

void taskSendStringWork(void);
signed portBASE_TYPE taskSendStringStart(void);
signed portBASE_TYPE taskSendStringStop(void);

#endif /* TASKSENDSTRING_H_ */
