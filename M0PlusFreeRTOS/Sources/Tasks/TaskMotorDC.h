/*
 * taskMotorDC.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKMOTORDC_H_
#define TASKMOTORDC_H_

#include "FreeRTOS.h"
#include "FreeRTOS0.h"
#include "task.h"
//#include "MotorA.h"
//#include "MotorB.h"
#include "Tasks/HandlesEnum.h"

void taskMotorDCWork(void);
signed portBASE_TYPE taskMotorDCStart(void);
signed portBASE_TYPE taskMotorDCStop(void);

#endif /* TASKMOTORDC_H_ */
