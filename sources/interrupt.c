#include "interrupt.h"

void interrupt_init(){
    TCCR0A = (1 << WGM01); //set CTC bit 
    OCR0A = 156; //Set output compare value for 0.01s (100 hz)
    TIMSK0 = (1 << OCIE0A); //Enable interrupt
    sei(); //Set external interrupt
    TCCR0B = (1 << CS02) |(1 << CS00); //Set prescaler to 1024

    digital_pin_set_as_output(3);
}

int CURRENT_TIME = 0;

ISR(TIMER0_COMPA_vect){
    CURRENT_TIME++;
}

int COMPARE_TIME = -1;


int interrupt_timer_countdown_ms(int ms){
    int cs = ms/10;
    if (COMPARE_TIME == -1){
        COMPARE_TIME = CURRENT_TIME + cs;
    }
    if (COMPARE_TIME <= CURRENT_TIME){
        COMPARE_TIME = -1;
        return 1;
    }
    return 0;
}

void interrupt_timer_delay_ms(int ms){
    while(!interrupt_timer_countdown_ms(ms)){
        //Do nothing
    }
}