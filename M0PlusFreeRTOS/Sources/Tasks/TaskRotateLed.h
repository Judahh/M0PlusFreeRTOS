/*
 * TaskRotateLed.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKROTATELED_H_
#define TASKROTATELED_H_

#include "FreeRTOS.h"
#include "FRTOS1.h"
#include "task.h"
#include "Util/Led.h"

void taskRotateLedWork(void);
signed portBASE_TYPE taskRotateLedStart(void);
signed portBASE_TYPE taskRotateLedStop(void);

#endif /* TASKROTATELED_H_ */
