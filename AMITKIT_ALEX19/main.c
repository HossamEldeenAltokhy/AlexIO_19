
/*
* Alex19_IO.c
*
* Created: 02/01/2021 08:22:36 م
* Author : Safaa
*/
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "GPIO.h"
#include "myKit.h"



int main(void)
{
	/* Replace with your application code */
	// PORTA( as OUTPUT
	init_LEDS();
	while (1)
	{
		_Led1(OFF);
		_Led2(OFF);
		_Led0(ON);
		
		
		_delay_ms(500);
		
		_Led0(OFF);
		_Led2(OFF);
		_Led1(ON);
		
		_delay_ms(500);
		_Led0(OFF);
		_Led1(OFF);
		_Led2(ON);
		
		_delay_ms(500);
		_Led0(OFF);
		_Led2(OFF);
		_Led1(ON);
		
		_delay_ms(500);
		
		
	}
}

