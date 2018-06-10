#define F_CPU 12000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC=0xFF;
	int speed=500;
	while (1){
		for (int i=0;i<=5;i++){
			PORTC|=(1<<i);
			for(int j=speed;j>=0;j--){
				_delay_us(500);
			}
			PORTC&=~(1<<i);
			if(speed>100){
				speed-=10;
			}
		}
	}
}