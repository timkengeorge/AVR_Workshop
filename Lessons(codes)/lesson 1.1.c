#include <avr/io.h>

int main(void)
{
   DDRC=0xff;
   PORTC=0b00110011;
}