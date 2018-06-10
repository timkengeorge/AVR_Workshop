#include <avr/io.h>

int main(void)
{
	DDRC=0xFF;
	PORTC=0xFF;
	PORTC=0x00;
}