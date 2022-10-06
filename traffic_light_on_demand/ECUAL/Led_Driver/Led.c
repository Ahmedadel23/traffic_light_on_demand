/*
 * Led.c
 *
 * Created: 09-Sep-22 10:45:49 PM
 *  Author: Ahmed Adel
 */ 
#include "Led.h"
void Led_Init(uint8_t led_port,uint8_t led_pin)
{
	DIO_INIT(led_port,led_pin,OUTPUT);
}
void Led_ON(uint8_t led_port,uint8_t led_pin)
{
	DIO_WRITE(led_port,led_pin,HIGH);
}
void Led_OFF(uint8_t led_port,uint8_t led_pin)
{
	DIO_WRITE(led_port,led_pin,LOW);
}
void Led_Toggle(uint8_t led_port,uint8_t led_pin)
{
	DIO_TOGGLE(led_port,led_pin);
}