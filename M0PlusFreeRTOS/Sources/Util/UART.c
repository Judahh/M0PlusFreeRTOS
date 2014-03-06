/*
 * UART.c
 *
 *  Created on: Feb 28, 2014
 *      Author: JH
 */

#include "UART.h"
 
//static UART_Description deviceData;
 
void sendChar(unsigned char ch, UART_Description *description) {
//	description->isSent = FALSE;  /* this will be set to 1 once the block has been sent */
//  while(AS1_SendBlock(description->handle, (LDD_TData*)&ch, 1)!=ERR_OK) {} /* Send char */
//  while(!description->isSent) {} /* wait until we get the green flag from the TX interrupt */
}
 
void sendString(const unsigned char *str,  UART_Description *description) {
//  while(*str!='\0') {
//    sendChar(*str++, description);
//  }
}
 
void initUART(void) {
  /* initialize struct fields */
//  deviceData.handle = AS1_Init(&deviceData);
//  deviceData.isSent = FALSE;
//  deviceData.rxChar = '\0';
//  deviceData.rxPutFct = RxBuf_Put;
  /* set up to receive RX into input buffer */
//  RxBuf_Init(); /* initialize RX buffer */
  /* Set up ReceiveBlock() with a single byte buffer. We will be called in OnBlockReceived() event. */
//  while(AS1_ReceiveBlock(deviceData.handle, (LDD_TData *)&deviceData.rxChar, sizeof(deviceData.rxChar))!=ERR_OK) {} /* initial kick off for receiving data */
}
 
