/*
 * TaskBuzzer.c
 *
 *  Created on: May 27, 2014
 *      Author: Avell G1512NEW
 */
#include "TaskBuzzer.h"

void taskBuzzerWork(void) {
//	Buzzer_SetVal();
//	FreeRTOS0_vTaskDelay(1000 / portTICK_RATE_MS);
//	Buzzer_ClrVal();
//	FreeRTOS0_vTaskDelay(1000 / portTICK_RATE_MS);
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/
static portTASK_FUNCTION(TaskBuzzer, pvParameters) {
	(void) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...

	// The code within the for loop is your actual
	// task that will continously execute
	for (;;) {
		taskBuzzerWork();
	}
}
/**************************************************************************/
/*! 
 Creates a new task for the FreeRTOS Kernel and add it to the
 scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskBuzzerStart(void) {
	printf("START Buzzer!\r\n");
	return FreeRTOS0_xTaskCreate(TaskBuzzer, /* pointer to the task */
			(signed portCHAR *) "TaskBuzzer", /* task name for kernel awareness debugging */
			200, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			1, /* initial priority */
			&taskHandles [taskBuzzerHandle]);
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskBuzzerStop(void) {
	if (!taskHandles[taskBuzzerHandle])
		return 0;

	vTaskDelete(taskHandles[taskBuzzerHandle]);
	taskHandles[taskBuzzerHandle] = NULL;

	return 1;
}

