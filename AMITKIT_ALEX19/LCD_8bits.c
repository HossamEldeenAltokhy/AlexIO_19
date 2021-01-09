#define F_CPU 16000000UL
#include "LCD_8bits.h"
#include "GPIO.h"
#include <util/delay.h>

void init_LCD(void){
	DataDIR = 0xFF;
	CmdDIR |= (1<<RS)|(1<<EN);
	LCD_clear();
	LCD_command(0x38);
	LCD_command(0x0C);
	_delay_ms(10);
}
void LCD_command(char cmd){
	Data = cmd;
	resetPinD(RS);
	LCD_enable();
	
}
void LCD_data(char data){
	Data = data;
	setPinD(RS);
	LCD_enable();
}
void LCD_clear(void){
	LCD_command(0x01);
}
void LCD_enable(void){
	setPinD(EN);
	_delay_ms(10);
	resetPinD(EN);
	_delay_ms(5);
}

void LCD_str(char * str){
	for(int i = 0;str[i] != '\0';i++ ){
		LCD_data(str[i]);
	}
}