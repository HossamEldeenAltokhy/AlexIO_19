/*
 * GPIO.h
 *
 * Created: 08/01/2021 07:05:13 م
 *  Author: Safaa
 */ 


#ifndef GPIO_H_
#define GPIO_H_

#define in_pin  0
#define out_pin 1

void config_PinA_dir(int state,int pinNumber);
void config_PinB_dir(int state,int pinNumber);
void config_PinC_dir(int state,int pinNumber);
void config_PinD_dir(int state,int pinNumber);


void config_PA(int state);
void config_PB(int state);
void config_PC(int state);
void config_PD(int state);

char isPressed_A(int pinNumber);
char isPressed_B(int pinNumber);
char isPressed_C(int pinNumber);
char isPressed_D(int pinNumber);

void setPinA(int pinNumber);
void setPinB(int pinNumber);
void setPinD(int pinNumber);
void setPinC(int pinNumber);

void resetPinA(int pinNumber);
void resetPinB(int pinNumber);
void resetPinD(int pinNumber);
void resetPinC(int pinNumber);


void togglePinA(int pinNumber);
void togglePinB(int pinNumber);
void togglePinD(int pinNumber);
void togglePinC(int pinNumber);
#endif /* GPIO_H_ */