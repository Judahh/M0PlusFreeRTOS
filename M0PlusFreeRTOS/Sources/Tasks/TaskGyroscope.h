/*
 * TaskGyroscope.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKGYROSCOPE_H_
#define TASKGYROSCOPE_H_

#include "FreeRTOS.h"
#include "FRTOS1.h"
#include "task.h"
#include "Util/Gyroscope.h"
#include "Tasks/HandlesEnum.h"

void taskGyroscopeWork(void);
signed portBASE_TYPE taskGyroscopeStart(void);
signed portBASE_TYPE taskGyroscopeStop(void);

#endif /* TASKGYROSCOPE_H_ */
