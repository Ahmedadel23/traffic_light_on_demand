/*
 * External_Interrupt.h
 *
 * Created: 09-Sep-22 10:43:49 PM
 *  Author: Ahmed Adel
 */ 


#ifndef EXTERNAL_INTERRUPT_H_
#define EXTERNAL_INTERRUPT_H_
#include "../utilities/Registers.h"
#include "../utilities/Macros.h"
#include "../utilities/INT_Vect_Table.h"

#define INT_0		6
#define INT_1		7
#define INT_2		5
#define  ISC_00		0
#define  ISC_01		1
#define  ISC_10		2
#define  ISC_11		3
#define ISC_2		6

typedef enum {
	RISING_EDGE=0,
	FALLING_EDGE,
	ANY_ADGE,
	LOW_LEVEL,
	}INTERRUPT_MODE;
	
typedef enum {
	INTERRUPT0=0,
	INTERRUPT1,
	INTERRUPT2,
	}INTERRUPT_NUM;
	


void ENABLE_EXTERNAL_INTERRUPT(INTERRUPT_NUM NUM,INTERRUPT_MODE MODE); 
void DISABLE_EXTERNAL_INTERRUPT(INTERRUPT_NUM NUM);
void Enable_global_INT(void);
void Disable_global_INT(void);

#endif /* EXTERNAL_INTERRUPT_H_ */