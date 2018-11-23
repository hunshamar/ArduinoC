#include "led.h"

void led_blink(){
    	int pin = PD2;

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