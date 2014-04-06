/*
 * Test.h
 *
 *  Created on: Apr 5, 2014
 *      Author: JH
 */

#ifndef TEST_H_
#define TEST_H_

#include "Task/Thread.h"
#include "PWMLEDGreen.h"

class Test: public Thread {
	public:
		Test(unsigned int index, const char *name, unsigned int stackSize,
				uint8_t priority);
	protected:
		void run(void) {
			PWMLEDGreen_SetRatio8(0xFF);
		}
};

#endif /* TEST_H_ */
