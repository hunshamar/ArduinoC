

#include "sources/digital_pin.h"
#include <util/delay.h>      // delay functions



void main()
{

	int pin = 9;

	digital_pin_set_as_output(pin);


	while(1){
		digital_pin_set_high(pin);
		_delay_ms(500);
		
		digital_pin_set_low(pin);

		_delay_ms(500);

	}
	
	return 0;
}
