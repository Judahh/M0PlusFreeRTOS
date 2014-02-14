/*
 * TaskRedLed.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKREDLED_H_
#define TASKREDLED_H_

#include "FreeRTOS.h"
#include "FRTOS1.h"
#include "task.h"
#include "Bit1.h"
#include "Bit2.h"
#include "Bit3.h"

void taskRedLedwork(void);
signed portBASE_TYPE taskRedLedStart(void);
signed portBASE_TYPE taskRedLedStop(void);

#endif /* TASKREDLED_H_ */