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
			for(int j=5;j>=i;j--)
			{
				_delay_ms(30);
			}
			PORTC&=~(1<<i);
		}
		
	}
}