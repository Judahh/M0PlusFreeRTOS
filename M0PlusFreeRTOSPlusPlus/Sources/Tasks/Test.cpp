/*
 * Test.cpp
 *
 *  Created on: Apr 5, 2014
 *      Author: JH
 */

#include "Test.h"

Test::Test(unsigned int index, const char *name, unsigned int stackSize,
		uint8_t priority):Thread(index, name, stackSize, priority) {
	
}

