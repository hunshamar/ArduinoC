#include "digital_pin.h"

void digital_pin_set_as_output(uint8_t pin){

    if (pin > 13) //Not valid pin number
        return;
    if (pin < 8)
        DDRD |= (1 << pin);
    else
        DDRB |= (1 << (pin - 8)); // PB0 is pin 8, PB1 is pin 9 ect.
}

void digital_pin_set_as_input(uint8_t pin){

    if (pin > 13) //Not valid pin number
        return;
    if (pin < 8)
        DDRD &= ~(1 << pin);
    else
        DDRB &= ~(1 << (pin - 8)); // PB0 is pin 8, PB1 is pin 9 ect.
}

void digital_pin_set_high(uint8_t pin){

    if (pin > 13) //Not valid pin number
        return;
    if (pin < 8)
        PORTD |= (1 << pin);
    else
        PORTB |= (1 << (pin - 8)); // PB0 is pin 8, PB1 is pin 9 ect.
}

void digital_pin_set_low(uint8_t pin){

    if (pin > 13) //Not valid pin number
        return;
    if (pin < 8)
        PORTD &= ~(1 << pin);
    else
        PORTB &= ~(1 << (pin - 8)); // PB0 is pin 8, PB1 is pin 9 ect.
}

void digital_pin_toggle(uint8_t pin){
    if (pin > 13) //Not valid pin number
        return;
    if (pin < 8)
        PORTD ^= (1 << pin);
    else
        PORTB ^= (1 << (pin - 8)); // PB0 is pin 8, PB1 is pin 9 ect.
}
