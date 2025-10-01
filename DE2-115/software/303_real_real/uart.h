/*
 * uart.h
 *
 *  Created on: 1/10/2025
 *      Author: jkim960
 */

#ifndef UART_H_
#define UART_H_

void uart_tx(char character_to_send);
int uart_rx(char * character_to_receive);

#endif /* UART_H_ */
