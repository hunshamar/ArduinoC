

#include "sources/digital_pin.h"
#include <util/delay.h>      // delay functions
#include "sources/interrupt.h"



int main()
{
	interrupt_init();

	int pin = 10;

	digital_pin_set_as_output(pin);


	while(1){
		interrupt_timer_delay_ms(1000);
		digital_pin_toggle(pin);
	}
	
	return 0;
}
