/*
 * HandlesEnum.h
 *
 *  Created on: Mar 15, 2014
 *      Author: JH
 */

#ifndef HANDLESENUM_H_
#define HANDLESENUM_H_

typedef enum {
	taskAccelerometerHandle,
	taskErrorHandle,
	taskBuzzerHandle,
	queueHandle,
#if configGENERATE_RUN_TIME_STATS == 1
	TASKHANDLE_RUNTIMESTATS,
#endif
	taskHandleLast
} taskHandle_e;

void * taskHandles[taskHandleLast];

#endif /* HANDLESENUM_H_ */