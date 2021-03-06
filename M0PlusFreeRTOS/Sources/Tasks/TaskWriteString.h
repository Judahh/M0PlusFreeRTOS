/*
 * TaskWriteString.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKWRITESTRING_H_
#define TASKWRITESTRING_H_

#include "FreeRTOS.h"
#include "FreeRTOS0.h"
#include "task.h"
#include "stdio.h"
#include "Tasks/HandlesEnum.h"

void taskWriteStringWork(void);
signed portBASE_TYPE taskWriteStringStart(void);
signed portBASE_TYPE taskWriteStringStop(void);

#endif /* TASKWRITESTRING_H_ */
