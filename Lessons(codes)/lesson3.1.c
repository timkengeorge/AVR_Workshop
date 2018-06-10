/*
 * lesson_2.c
 *
 * Created: 01-07-2014 04:32:16 PM
 *  Author: Ritwik
 */ 

#define F_CPU 12000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC=0xFF;
	PORTC=0x00;
	DDRD&=~((1<<7)|(1<<6)|(1<<5));
	PORTD|=((1<<7)|(1<<6)|(1<<5));
	
	while (1)
	{
		PORTC=(PIND>>2);
	}
}