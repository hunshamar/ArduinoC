#include <avr/interrupt.h>
#include "digital_pin.h"

/***
  Interrupt timer with a frequency of 100 hz
***/



void interrupt_init();

/**  Crappy timer. Only one can run at a time **/
int interrupt_timer_countdown_ms(int ms);

/** delay function, similar to _delay_ms() **/
void interrupt_timer_delay_ms(int ms);

