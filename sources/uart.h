#include <avr/io.h>


void uart_init(unsigned int baud);

void uart_transmit(unsigned char data);

int uart_recieve();

void uart_print(char* c);