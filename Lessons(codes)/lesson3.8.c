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
	int i=0;
	_delay_ms(20);
	while (1)
	{
		if (!(PIND&(3<<5)))
		{
			while(!(PIND&(3<<5)));
			PORTC=++i;
			_delay_ms(20);
		}
	}
}