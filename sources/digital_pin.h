#include <avr/io.h>
#include <stdint.h>

/***
   Code for managing digital pins on the arduino uno
***/

void digital_pin_set_as_output(uint8_t pin);
void digital_pin_set_as_input(uint8_t pin);
void digital_pin_set_high(uint8_t pin);
void digital_pin_set_low(uint8_t pin);
void digital_pin_toggle(uint8_t pin);