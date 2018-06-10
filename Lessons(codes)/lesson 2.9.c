#define F_CPU 12000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC=0xFF;
	int speed=500;
	while (1){
		for (int i=0;i<5;i++){
			PORTC|=(3<<i);
			for(int j=speed;j>=0;j--){
				_delay_us(500);
			}
			PORTC&=~(3<<i);
			if(speed>300){
				speed-=10;
			}
		}
	}
}