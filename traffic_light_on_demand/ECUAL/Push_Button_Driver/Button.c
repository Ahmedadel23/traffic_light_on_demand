/*
 * Button.c
 *
 * Created: 09-Sep-22 10:46:07 PM
 *  Author: Ahmed Adel
 */ 
#include "button.h"
 void Button_Init(uint8_t button_port,uint8_t button_pin)
 {
	 DIO_INIT(button_port,button_pin,INPUT);
 }

 void Button_read(uint8_t button_port,uint8_t button_pin,uint8_t *value)
 {
	 DIO_READ(button_port,button_pin,value);
 }