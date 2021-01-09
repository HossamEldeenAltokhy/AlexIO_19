
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "GPIO.h"
#include "myKit.h"
#include "LCD_8bits.h"



int main(void)
{
	/* Replace with your application code */
	// PORTA( as OUTPUT
	init_LCD();
	LCD_str("Hello");
	while (1)
	{
		
	}
}

