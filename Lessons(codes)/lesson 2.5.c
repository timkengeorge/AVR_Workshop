#define F_CPU 12000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC=0xFF;
	while (1)
	{
		PORTC|=(1<<0);
		_delay_ms(500);
		PORTC&=~(1<<0);//0b11111110
		PORTC|=(1<<1);
		_delay_ms(500);
		PORTC&=~(1<<1);//0b11111110
		PORTC|=(1<<2);
		_delay_ms(500);
		PORTC&=~(1<<2);//0b11111110
	}
}