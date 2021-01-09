/*
 * LCD_8bits.h
 *
 * Created: 09/01/2021 09:10:17 م
 *  Author: Safaa
 */ 

#include <avr/io.h>
#ifndef LCD_8BITS_H_
#define LCD_8BITS_H_

#define RS 0
#define EN 1

#define Data PORTC
#define DataDIR	 DDRC
#define CmdDIR	DDRD

void init_LCD(void);
void LCD_command(char cmd);
void LCD_data(char data);
void LCD_clear(void);
void LCD_enable(void);
void LCD_str(char *);


#endif /* LCD_8BITS_H_ */