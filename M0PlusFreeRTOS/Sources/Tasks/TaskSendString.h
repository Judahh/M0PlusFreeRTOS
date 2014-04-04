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

void taskSendStringWork(int index);
signed portBASE_TYPE taskSendStringStart(int index);
signed portBASE_TYPE taskSendStringStop(int index);

#endif /* TASKSENDSTRING_H_ */
