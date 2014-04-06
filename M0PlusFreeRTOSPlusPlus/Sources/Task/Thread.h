/*
 * Thread.h
 *
 *  Created on: Apr 5, 2014
 *      Author: JH
 */

#ifndef THREAD_H_
#define THREAD_H_
#include "FreeRTOS.h"
#include "FreeRTOS0.h"
#include "task.h"
#include "stdio.h"

class Thread {
	private:
		char* name;
		unsigned int index;portBASE_TYPE portBase;
		unsigned int stackSize;
		uint8_t priority;

		const signed char * toSigned(const char *taskName) {
			return reinterpret_cast<const signed char *>(taskName);
		}
	protected:
		xTaskHandle handle;
		virtual void run(void);
		static void msleep(uint32_t msecs);
		static void sleep(uint32_t secs);

	public:
		Thread(unsigned int index, const char *name, unsigned int stackSize,
				uint8_t priority);
		virtual ~Thread(void);
		void start(void);
		void setName(const char *newName);
		void taskWork(void);
		static void taskHandler(void *task) {
			Thread *thread = static_cast<Thread *>(task);
			thread->run();
			FreeRTOS0_vTaskDelete(thread->handle);
		}
};

#endif /* THREAD_H_ */
