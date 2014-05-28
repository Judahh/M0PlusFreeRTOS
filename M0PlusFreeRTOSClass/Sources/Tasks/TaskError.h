/*
 * TaskError.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKERROR_H_
#define TASKERROR_H_

#include "FreeRTOS.h"
#include "FreeRTOS0.h"
#include "task.h"
#include "LEDRed.h"
#include "Tasks/HandlesEnum.h"

void taskErrorWork(void);
signed portBASE_TYPE taskErrorStart(void);
signed portBASE_TYPE taskErrorStop(void);

#endif /* TASKERROR_H_ */
