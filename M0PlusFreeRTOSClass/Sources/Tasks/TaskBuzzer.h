/*
 * TaskBuzzer.h
 *
 *  Created on: May 27, 2014
 *      Author: Avell G1512NEW
 */

#ifndef TASKBUZZER_H_
#define TASKBUZZER_H_

#include "FreeRTOS.h"
#include "FreeRTOS0.h"
#include "task.h"
#include "stdio.h"
#include "Buzzer.h"
#include "Tasks/HandlesEnum.h"

void taskBuzzerWork(void);
signed portBASE_TYPE taskBuzzerStart(void);
signed portBASE_TYPE taskBuzzerStop(void);

#endif /* TASKBUZZER_H_ */
