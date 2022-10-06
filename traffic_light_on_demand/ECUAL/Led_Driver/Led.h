/*
 * Led.h
 *
 * Created: 09-Sep-22 10:45:37 PM
 *  Author: Ahmed Adel
 */ 


#ifndef LED_H_
#define LED_H_
#include "../DIO_Driver/DIO.h"

void Led_Init(uint8_t led_port,uint8_t led_pin);
void Led_ON(uint8_t led_port,uint8_t led_pin);
void Led_OFF(uint8_t led_port,uint8_t led_pin);
void Led_Toggle(uint8_t led_port,uint8_t led_pin);


#endif /* LED_H_ */