/*
 * TaskBlueLed.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKSONAR_H_
#define TASKSONAR_H_

#include "FreeRTOS.h"
#include "FRTOS1.h"
#include "task.h"
#include "SonarEcho0.h"
#include "SonarEcho1.h"
#include "SonarTrigger.h"
#include "Tasks/HandlesEnum.h"

void taskSonarWork(void);
signed portBASE_TYPE taskSonarStart(void);
signed portBASE_TYPE taskSonarStop(void);

#endif /* TASKSONAR_H_ */
