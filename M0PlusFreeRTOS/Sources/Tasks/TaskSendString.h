/*
 * TaskSendString.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKSENDSTRING_H_
#define TASKSENDSTRING_H_

#include "FreeRTOS.h"
#include "FRTOS1.h"
#include "task.h"
#include "stdio.h"
#include "Tasks/HandlesEnum.h"

void taskSendStringWork(int8_t index);
signed portBASE_TYPE taskSendStringStart(int8_t index);
signed portBASE_TYPE taskSendStringStop(int8_t index);

#endif /* TASKSENDSTRING_H_ */
