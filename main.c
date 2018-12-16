
#define F_CPU 16000000


#include "sources/digital_pin.h"
#include <util/delay.h>      // delay functions
#include "sources/interrupt.h"
#include "sources/uart.h"
#include <stdio.h>




int main()
{
	interrupt_init();
	uart_init(9600);

	int pin = 7;

	digital_pin_set_as_output(pin);


	while(1){
		interrupt_timer_delay_ms(1000);
		digital_pin_toggle(pin);
		uart_print("hei ja nei\n\r");
	}
	
	return 0;
}
