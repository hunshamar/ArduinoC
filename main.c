

#include "led.h"

// Pins
//#define LED 13

/*
// UART receive handler
ISR(USART_RX_vect)
{
	// "ECHO" function:
	uint8_t b = usart_rx();
	usart_tx(b); // send back
}*/


void main()
{
	//usart_init(BAUD_115200);
	//usart_isr_rx_enable(true); // enable RX interrupt handler

	// configure pins
	//as_output(LED);

	// globally enable interrupts (for the USART_RX handler)
	//sei();

	led_blink();
}
