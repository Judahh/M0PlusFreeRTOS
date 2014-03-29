/*
 * TaskAccelerometer.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskAccelerometer.h"
//static uint8_t taskAccelerometerRes;

void taskAccelerometerWork(void) {
//	accelerometerTestRun(taskAccelerometerRes);
	int16_t x = MMA0_GetX() / (327.67 / 2.55);
	int16_t y = MMA0_GetY() / (327.67 / 2.55);
	int16_t z = MMA0_GetZ() / (327.67 / 2.55);

	if (x < 0) {
		x = 0;
	}

	if (y < 0) {
		y = 0;
	}

	if (z < 0) {
		z = 0;
	}

	PWMLEDRed_SetRatio8(x);
	PWMLEDGreen_SetRatio8(y);
	PWMLEDBlue_SetRatio8(z);
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/
static portTASK_FUNCTION(TaskAccelerometer, pvParameters) {
	(void) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...

	// The code within the for loop is your actual
	// task that will continously execute

	MMA0_Init();
	for (;;) {
		taskAccelerometerWork();

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
signed portBASE_TYPE taskAccelerometerStart(void) {
	return FRTOS1_xTaskCreate(TaskAccelerometer, /* pointer to the task */
			(signed portCHAR *) "TaskAccelerometer", /* task name for kernel awareness debugging */
			configMINIMAL_STACK_SIZE, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			tskIDLE_PRIORITY, /* initial priority */
			&taskHandles [taskAccelerometerHandle]);
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskAccelerometerStop(void) {
	MMA0_Deinit();
	if (!taskHandles[taskAccelerometerHandle])
		return 0;

	vTaskDelete(taskHandles[taskAccelerometerHandle]);
	taskHandles[taskAccelerometerHandle] = NULL;

	return 1;
}

