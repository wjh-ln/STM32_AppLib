#ifndef CONSOLE_UART_H
#define CONSOLE_UART_H

#include "usart.h"


uint16_t _pow(int x, int y);

class Console_t
{
	private:
		UART_HandleTypeDef *huart_m;
	public:
		uint8_t rev_buff[256];
		
		Console_t(UART_HandleTypeDef *huart);
		void Send(const char *str,...);
		void Open(void);
		void Receive(uint16_t size);
};

#endif