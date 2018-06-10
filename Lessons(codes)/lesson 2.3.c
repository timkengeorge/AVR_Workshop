#define F_CPU 12000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC=0xFF;
	while (1)
	{
		PORTC=0xFF;
		_delay_ms(1000);
		PORTC=0x00;
		_delay_ms(1000);
	}
}