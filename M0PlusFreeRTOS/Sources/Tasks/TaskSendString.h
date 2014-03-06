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

void taskSendStringWork(void);
signed portBASE_TYPE taskSendStringStart(int *index);
signed portBASE_TYPE taskSendStringStop(void);

#endif /* TASKSENDSTRING_H_ */
