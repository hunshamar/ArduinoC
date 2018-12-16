#include "uart.h"

void uart_init(unsigned int baud){
    int muybr = 0.15*F_CPU/(16*baud)-1;
    
    /* Set baud rate */
    UBRR0H |= (unsigned char)(muybr >> 8);
    UBRR0L |= (unsigned char)(muybr);

    /*Enable recieve and transmitter*/
    UCSR0B |= (1 << RXEN0) | (1 << TXEN0);

    /*Set frame format: 8data, 2stop bits*/
    UCSR0C |= (1 << USBS0) | (3 << UCSZ00);
}

void uart_transmit(unsigned char data){

    while(!(UCSR0A & (1<<UDRE0))){
        ;//Mens flagget er av 
    }
    //send message
    UDR0 = data;
    return 0;
}

int uart_recieve(){ 
    if(!(UCSR0A & (1<<RXC0))){
        return 0;
    }
    return UDR0;

}

void uart_print(char* c){
    while(*c){
        uart_transmit(*c++);
    }
}

