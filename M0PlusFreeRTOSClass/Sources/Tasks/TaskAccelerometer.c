/*
 * TaskAccelerometer.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskAccelerometer.h"
static int32_t speedX;
static int32_t speedY;
static int32_t speedZ;
static int32_t spaceX;
static int32_t spaceY;
static int32_t spaceZ;

void initBeep(void) {
	stopBeep();
}

void startBeep(void) {
	printf("start Beep!\r\n");
	FreeRTOS0_vTaskResume(taskHandles[taskBuzzerHandle]);
	printf("start Beep 2!\r\n");
}

void stopBeep(void) {
	printf("stop Beep!\r\n");
	FreeRTOS0_vTaskSuspend(taskHandles[taskBuzzerHandle]);
	printf("stop Beep 2!\r\n");
}

void taskAccelerometerWork(void) {
	int32_t accelerationX = MMA0_GetX(); //(MMA0_GetX()/16384)*980665
	int32_t accelerationY = MMA0_GetY(); //100000
	int32_t accelerationZ = MMA0_GetZ();

	int32_t sum = abs(accelerationX) + abs(accelerationY) + abs(accelerationZ);

//	printf("Soma = %ld!\r\n", sum);

	if (sum < 5000) {
		LEDBlue_ClrVal();
		printf("QUEDA LIVRE!\r\n");
		startBeep();
		FreeRTOS0_vTaskDelay(1000 / portTICK_RATE_MS);
	} else {
		LEDBlue_SetVal();
		stopBeep();
	}
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

	speedX = 0;
	speedY = 0;
	speedZ = 0;

	spaceX = 0;
	spaceY = 0;
	spaceZ = 0;

	initBeep();
	
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
	printf("START Accelerometer!\r\n");
	return FreeRTOS0_xTaskCreate(TaskAccelerometer, /* pointer to the task */
			(signed portCHAR *) "TaskAccelerometer", /* task name for kernel awareness debugging */
			1000, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			1, /* initial priority */
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

