/*
 * Thread.cpp
 *
 *  Created on: Apr 5, 2014
 *      Author: JH
 */

#include "Thread.h"

Thread::Thread(unsigned int index, const char *name, unsigned int stackSize,
		uint8_t priority) {
	this->index = index;
	sprintf(this->name, "taskSendStringI%d", index);
	this->stackSize = stackSize;
	this->priority = priority;
	printf("start da %s!\r\n", name);
}

void Thread::taskWork() {
	printf("%s!\r\n", this->name);
	FreeRTOS0_vTaskDelay(500 / portTICK_RATE_MS);
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/

void Thread::start() {
	this->portBase =
			FreeRTOS0_xTaskCreate(this->handle, toSigned(this->name), this->stackSize, this,
					this->priority, &this->handle);
}

Thread::~Thread() {
	FreeRTOS0_vTaskDelete(this->handle);
}

void Thread::setName(const char *newName) {
	this->name = newName;
}

void Thread::msleep(uint32_t msecs) {
	vTaskDelay(msecs);
}

void Thread::sleep(uint32_t secs) {
	msleep(secs * 1000);
}

