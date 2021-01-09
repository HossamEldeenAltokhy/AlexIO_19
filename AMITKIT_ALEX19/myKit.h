/*
 * myKit.h
 *
 * Created: 08/01/2021 07:20:38 م
 *  Author: Safaa
 */ 


#ifndef MYKIT_H_
#define MYKIT_H_

#define RX   0
#define TX   1
#define Btn2  2


#define Led0  2
#define Led1  7
#define Led2  3


// Symbols
#define Button  0
#define ON  1
#define OFF 0


void init_LEDS();
void _Led0(int state);
void _Led1(int state);
void _Led2(int state);


#endif /* MYKIT_H_ */