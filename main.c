#include <avr/io.h>          // register definitions
#include <util/delay.h>      // delay functions



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

	int pin = PD3;

	DDRD |= (1 << pin);

	while (1) {
		//usart_puts("Hello World!\r\n");
		PORTD |= (1 << pin);
		//pin_toggle(13); // blink the LED

		_delay_ms(500);
		
		PORTD &= ~(1 << pin);

		_delay_ms(500);
	}
}
