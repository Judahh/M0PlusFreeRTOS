/*
 * TaskSendString1.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKSENDSTRING1_H_
#define TASKSENDSTRING1_H_

#include "FreeRTOS.h"
#include "FRTOS1.h"
#include "task.h"
#include "stdio.h"
#include "Tasks/HandlesEnum.h"

void taskSendString1Work(void);
signed portBASE_TYPE taskSendString1Start(void);
signed portBASE_TYPE taskSendString1Stop(void);

#endif /* TASKSENDSTRING1_H_ */
