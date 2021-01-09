/*
* GPIO.c
*
* Created: 08/01/2021 07:05:50 م
*  Author: Safaa
*/
#include <avr/io.h>
#include "GPIO.h"



char isPressed_A(int pinNumber){
	if(PINA & (1<<pinNumber)){
		return 1;
	}
	else{
		return 0;
	}
}
char isPressed_B(int pinNumber){
	if(PINB & (1<<pinNumber)){
		return 1;
	}
	else{
		return 0;
	}
}
char isPressed_C(int pinNumber){
	if(PINC & (1<<pinNumber)){
		return 1;
	}
	else{
		return 0;
	}
}
char isPressed_D(int pinNumber){
	if(PIND & (1<<pinNumber)){
		return 1;
	}
	else{
		return 0;
	}
}

void togglePinA(int pinNumber){
	PORTA ^= (1<<pinNumber);
}
void togglePinB(int pinNumber){
	PORTB ^= (1<<pinNumber);
}
void togglePinC(int pinNumber){
	PORTC ^= (1<<pinNumber);
}
void togglePinD(int pinNumber){
	PORTD ^= (1<<pinNumber);
}


/////////////////////////
void setPinA(int pinNumber){
	PORTA |= (1<<pinNumber);
}
void setPinB(int pinNumber){
	PORTB |= (1<<pinNumber);
}
void setPinC(int pinNumber){
	PORTC |= (1<<pinNumber);
}
void setPinD(int pinNumber){
	PORTD |= (1<<pinNumber);
}

void resetPinA(int pinNumber){
	PORTA &= ~(1<<pinNumber);
}
void resetPinB(int pinNumber){
	PORTB &= ~(1<<pinNumber);
}
void resetPinC(int pinNumber){
	PORTC &= ~(1<<pinNumber);
}
void resetPinD(int pinNumber){
	PORTD &= ~(1<<pinNumber);
}



void config_PinA_dir(int state,int pinNumber){
	switch(state){
		case in_pin:
		DDRA &= ~(1<<pinNumber);
		break;
		case out_pin:
		DDRA |= (1<<pinNumber);
		break;
		default:
		DDRA &= ~(1<<pinNumber);
	}
}
void config_PinB_dir(int state,int pinNumber){
	switch(state){
		case in_pin:
		DDRB &= ~(1<<pinNumber);
		break;
		case out_pin:
		DDRB |= (1<<pinNumber);
		break;
		default:
		DDRB &= ~(1<<pinNumber);
	}
}
void config_PinC_dir(int state,int pinNumber){
	switch(state){
		case in_pin:
		DDRC &= ~(1<<pinNumber);
		break;
		case out_pin:
		DDRC |= (1<<pinNumber);
		break;
		default:
		DDRC &= ~(1<<pinNumber);
	}
}
void config_PinD_dir(int state,int pinNumber){
	switch(state){
		case in_pin:
		DDRD &= ~(1<<pinNumber);
		break;
		case out_pin:
		DDRD |= (1<<pinNumber);
		break;
		default:
		DDRD &= ~(1<<pinNumber);
	}
}


void config_PA(int state){
	switch(state){
		case in_pin:
		DDRA = 0x00;
		break;
		case out_pin:
		DDRA = 0xFF;
		break;
		default:
		DDRA = 0x00;
	}
}
void config_PB(int state){
	switch(state){
		case in_pin:
		DDRB = 0x00;
		break;
		case out_pin:
		DDRB = 0xFF;
		break;
		default:
		DDRB = 0x00;
	}
}


void config_PC(int state){
	switch(state){
		case in_pin:
		DDRC = 0x00;
		break;
		case out_pin:
		DDRC = 0xFF;
		break;
		default:
		DDRC = 0x00;
	}
}



void config_PD(int state){
	switch(state){
		case in_pin:
		DDRD = 0x00;
		break;
		case out_pin:
		DDRD = 0xFF;
		break;
		default:
		DDRD = 0x00;
	}
}