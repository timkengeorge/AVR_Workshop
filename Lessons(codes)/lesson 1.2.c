#include <avr/io.h>

int main(void)
{
   DDRC=0xff;
   PORTC=(1<<0)|(1<<1)|(1<<4)|(1<<5);
   PORTC=(1<<2)|(1<<3);
}