/*
 * Registers.h
 *
 * Created: 04-Sep-22 10:18:33 PM
 *  Author: Ahmed Adel
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_
#include "Std_types.h"
		/************Registers for DIO**********/
			
			/*****PORTA*****/
#define PORT_A (*((vuint8_t*)(0x3B)))
#define DDR_A (*((vuint8_t*)(0x3A)))
#define PIN_A (*((vuint8_t*)(0x39)))

			/*****PORTB*****/
#define PORT_B (*((vuint8_t*)(0x38)))
#define DDR_B (*((vuint8_t*)(0x37)))
#define PIN_B (*((vuint8_t*)(0x36)))

			/*****PORTC*****/
#define PORT_C (*((vuint8_t*)(0x35)))
#define DDR_C (*((vuint8_t*)(0x34)))
#define PIN_C (*((vuint8_t*)(0x33)))

			/*****PORTD*****/
#define PORT_D (*((vuint8_t*)(0x32)))
#define DDR_D (*((vuint8_t*)(0x31)))
#define PIN_D (*((vuint8_t*)(0x30)))

/************Interrupts  Registers**********/
#define SREG (*(vuint8_t*)0x5F)
#define GICR (*(vuint8_t*)0x5B)
#define GIFR (*(vuint8_t*)0x5A)
#define MCUCR (*(vuint8_t*)0x55)
#define MCUCSR (*(vuint8_t*)0x54)

/************Timer0 Registeres**********/

#define TCCR0  *((vuint8_t*)0x53) 
#define TCNT0  *((vuint8_t*)0x52) 
#define OCR0   *((vuint8_t*)0x5C) 
#define TIMSK  *((vuint8_t*)0x59) 
#define TIFR   *((vuint8_t*)0x58) 





#endif /* REGISTERS_H_ */