/*
 * TaskSendGlobalVariable.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKSENDGLOBALVARIABLE_H_
#define TASKSENDGLOBALVARIABLE_H_

#include "FreeRTOS.h"
#include "FreeRTOS0.h"
#include "task.h"
#include "stdio.h"
#include "Tasks/HandlesEnum.h"

void taskSendGlobalVariableWork(void);
signed portBASE_TYPE taskSendGlobalVariableStart(void);
signed portBASE_TYPE taskSendGlobalVariableStop(void);

#endif /* TASKSENDGLOBALVARIABLE_H_ */
