/*
 * button.h
 *
 * Created: 09-Sep-22 10:46:20 PM
 *  Author: Ahmed Adel
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../DIO_Driver/DIO.h"

void Button_Init(uint8_t port,uint8_t pin_number);

void Button_read(uint8_t port,uint8_t pin_number,uint8_t *value);



#endif /* BUTTON_H_ */