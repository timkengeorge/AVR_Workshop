#define F_CPU 12000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC=0xFF;
	while (1)
	{
		for (int i=0;i<=5;i++)
		{
			PORTC|=(1<<i);
			_delay_ms(250);
			PORTC&=~(1<<i);
		}
		
	}
}