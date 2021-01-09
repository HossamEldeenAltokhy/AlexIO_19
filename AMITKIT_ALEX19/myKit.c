/*
 * myKit.c
 *
 * Created: 09/01/2021 06:30:59 م
 *  Author: Safaa
 */ 

#include "myKit.h"
#include "GPIO.h"

void _Led0(int state){
	switch(state){
		case ON:
		setPinC(Led0);
		break;
		case OFF:
		resetPinC(Led0);
		break;
		default:
		resetPinC(Led0);
	}
}

void _Led1(int state){
	switch(state){
		case ON:
		setPinC(Led1);
		break;
		case OFF:
		resetPinC(Led1);
		break;
		default:
		resetPinC(Led1);
	}
}


void _Led2(int state){
	switch(state){
		case ON:
		setPinD(Led2);
		break;
		case OFF:
		resetPinD(Led2);
		break;
		default:
		resetPinD(Led2);
	}
}

void init_LEDS(){
	config_PinC_dir(out_pin, Led0);
	config_PinC_dir(out_pin, Led1);
	config_PinD_dir(out_pin, Led2);
}