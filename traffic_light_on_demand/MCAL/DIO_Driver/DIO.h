/*
 * DIO.h
 *
 * Created: 09-Sep-22 10:44:04 PM
 *  Author: Ahmed Adel
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "../utilities/Macros.h"
#include "../utilities/Registers.h"
#include "../utilities/Std_types.h"


#define  PA 'A'
#define  PB 'B'
#define  PC 'C'
#define  PD 'D'

#define  INPUT 0
#define  OUTPUT 1

#define LOW 0
#define HIGH 1

void DIO_INIT(uint8_t port,uint8_t pin_number,uint8_t direction);

void DIO_WRITE(uint8_t port,uint8_t pin_number,uint8_t value);

void DIO_TOGGLE(uint8_t port,uint8_t pin_number);

uint8_t DIO_READ(uint8_t port,uint8_t pin_number, uint8_t *value);




#endif /* DIO_H_ */