/*
 * UART.h
 *
 *  Created on: Feb 28, 2014
 *      Author: JH
 */

#ifndef UART_H_
#define UART_H_

#include "PE_Types.h"
#include "PE_LDD.h"

typedef struct {
	LDD_TDeviceData *handle; /* LDD device handle */
	volatile uint8_t isSent; /* this will be set to 1 once the block has been sent */
	uint8_t rxChar; /* single character buffer for receiving chars */
	uint8_t (*rxPutFct)(uint8_t); /* callback to put received character into buffer */
} UART_Description;


void sendChar(unsigned char ch, UART_Description *description);
 
void sendString(const unsigned char *str,  UART_Description *description);
 
void initUART(void);

#endif /* UART_H_ */
