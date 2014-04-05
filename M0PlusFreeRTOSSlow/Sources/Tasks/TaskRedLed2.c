/*
 * TaskRedLed2.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskRedLed2.h"

void taskRedLed2Work(void) {
	PWMLEDGreen_SetRatio8(0x00);
	invertRedLed();
	if ((!reducedPriority) && (xTaskGetTickCount() >= 3 * 4)) {
		FreeRTOS0_vTaskPrioritySet(taskHandles[taskGreenLedHandle], 0);
		reducedPriority = TRUE;
	}
}

void invertRedLed2(void) {
	if (ledRedOn) {
		PWMLEDRed_SetRatio8(0x00);
	} else {
		PWMLEDRed_SetRatio8(0xFF);
	}
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/
static portTASK_FUNCTION( TaskRedLed2, pvParameters) {
	(void) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...

	// The code within the for loop is your actual
	// task that will continously execute
	for (;;) {
		taskRedLed2Work();

		// vTaskDelay will cause the task to be delayed for 
		// a specified number of ticks
//		vTaskDelay(100);  // Wait 100 ticks or 1 second
	}
}

/**************************************************************************/
/*! 
 Creates a new task for the FreeRTOS Kernel and add it to the
 scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskRedLed2Start(void) {
	PWMLEDRed_SetRatio8(0x00);
	ledRedOn = FALSE;
	reducedPriority = FALSE;
	return FreeRTOS0_xTaskCreate(TaskRedLed2, /* pointer to the task */
			(signed portCHAR *) "TaskRedLed2", /* task name for kernel awareness debugging */
			configMINIMAL_STACK_SIZE, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			1, /* initial priority */
			&taskHandles [taskRedLedHandle1]);
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskRedLed2Stop(void) {
	if (!taskHandles[taskRedLedHandle1])
		return 0;

	vTaskDelete(taskHandles[taskRedLedHandle1]);
	taskHandles[taskRedLedHandle1] = NULL;

	return 1;
}

