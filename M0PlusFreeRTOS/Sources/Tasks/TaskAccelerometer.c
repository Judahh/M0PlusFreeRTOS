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

void taskAccelerometerWork(void) {
//	int32_t accerX = MMA0_GetXmg()*980665/1000;//(MMA0_GetX()/16384)*980665
//	int32_t accerY = MMA0_GetYmg()*980665/1000;//100000
//	int32_t accerZ = MMA0_GetZmg()*980665/1000;

//	int16_t x = accerX / (327.67 / 2.55);
//	int16_t y = accerY / (327.67 / 2.55);
//	int16_t z = accerZ / (327.67 / 2.55);

//	printf("accer X = %ld!\r\n", accerX);
//	printf("accer Y = %ld!\r\n", accerY);
//	printf("accer Z = %ld!\r\n", accerZ);
//
//	speedX += accerX;
//	speedY += accerY;
//	speedZ += accerZ;
//
//	printf("speed X = %ld!\r\n", speedX);
//	printf("speed Y = %ld!\r\n", speedY);
//	printf("speed Z = %ld!\r\n", speedZ);
//
//	spaceX += speedX;
//	spaceY += speedY;
//	spaceZ += speedZ;
//
//	printf("space X = %ld!\r\n", spaceX);
//	printf("space Y = %ld!\r\n", spaceY);
//	printf("space Z = %ld!\r\n", spaceZ);
//	
//	FreeRTOS0_vTaskDelay(10 / portTICK_RATE_MS);

//	if (x < 0) {
//		x = 0;
//	}
//
//	if (y < 0) {
//		y = 0;
//	}
//
//	if (z < 0) {
//		z = 0;
//	}
//
//	PWMLEDRed_SetRatio8(x);
//	PWMLEDGreen_SetRatio8(y);
//	PWMLEDBlue_SetRatio8(z);

	int32_t accerX = MMA0_GetX(); //(MMA0_GetX()/16384)*980665
	int32_t accerY = MMA0_GetY(); //100000
	int32_t accerZ = MMA0_GetZ();

//	printf("X = %ld!\r\n", accerX);
//	printf("Y = %ld!\r\n", accerY);
//	printf("Z = %ld!\r\n", accerZ);
	
	int32_t Sum = abs(accerX) + abs(accerY) + abs(accerZ);
	if (Sum < 10000) {
		PWMLEDBlue_SetRatio8(65535);
		FreeRTOS0_vTaskDelay(1000 / portTICK_RATE_MS);
	} else {
		PWMLEDBlue_SetRatio8(0);
	}
//	printf("Soma = %ld!\r\n", Sum);
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
	return FreeRTOS0_xTaskCreate(TaskAccelerometer, /* pointer to the task */
			(signed portCHAR *) "TaskAccelerometer", /* task name for kernel awareness debugging */
			1000, /* task stack size */
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

