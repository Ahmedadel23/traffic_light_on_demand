/*
 * External_Interrupt.c
 *
 * Created: 09-Sep-22 10:43:49 PM
 *  Author: Ahmed Adel
 */ 
#include "External_Interrupt.h"



void ENABLE_EXTERNAL_INTERRUPT(INTERRUPT_NUM NUM,INTERRUPT_MODE MODE){
	
	switch (NUM)
	{
	 /*ENABLE INTERRUPT 0*/
	case INTERRUPT0:
	
	SET_BIT(GICR,INT_0);
	if (MODE==RISING_EDGE)
	{
	SET_BIT(MCUCR,ISC_00);
	SET_BIT(MCUCR,ISC_01);	
	}
	else if(MODE==FALLING_EDGE)
	{
	CLEAR_BIT(MCUCR,ISC_00);
	SET_BIT(MCUCR,ISC_01);	
		
	}
	else if(MODE==ANY_ADGE)
	{
    SET_BIT(MCUCR,ISC_00);
	CLEAR_BIT(MCUCR,ISC_01);
		
	}
	else if(MODE==LOW_LEVEL)
	{
	CLEAR_BIT(MCUCR,ISC_00);
	CLEAR_BIT(MCUCR,ISC_01);	
	}
	else{}
	
		break;
	 /*ENABLE INTERRUPT 1*/
	case INTERRUPT1:
	SET_BIT(GICR,INT_1);
	
	if (MODE==RISING_EDGE)
	{
		SET_BIT(MCUCR,ISC_10);
		SET_BIT(MCUCR,ISC_11);
	}
	else if(MODE==FALLING_EDGE)
	{
		CLEAR_BIT(MCUCR,ISC_10);
		SET_BIT(MCUCR,ISC_11);
		
	}
	else if(MODE==ANY_ADGE)
	{
		SET_BIT(MCUCR,ISC_10);
		CLEAR_BIT(MCUCR,ISC_11);
		
	}
	else if(MODE==LOW_LEVEL)
	{
		CLEAR_BIT(MCUCR,ISC_10);
		CLEAR_BIT(MCUCR,ISC_11);
	}
	else{}
	break;
     /*ENABLE INTERRUPT 2*/
	case INTERRUPT2:
	SET_BIT(GICR,INT_2);
	if (MODE==RISING_EDGE)
	{
	SET_BIT(MCUCSR,ISC_2);
	}
	else if(MODE==FALLING_EDGE)
	{
	CLEAR_BIT(MCUCSR,ISC_2);	
	}
	else{}
	break;			
		
	}
	
	
}

//.....................................................................//

void DISABLE_EXTERNAL_INTERRUPT(INTERRUPT_NUM NUM){
	
	switch (NUM)
	{
	case INTERRUPT0 :
	CLEAR_BIT(GICR,INT_0);
		break;
	case INTERRUPT1 :
	CLEAR_BIT(GICR,INT_1);
		break;
	case INTERRUPT2 :
	CLEAR_BIT(GICR,INT_2);
		break;
	}
		
}

//......................................................................//
void Enable_global_INT(void)
{
	SET_BIT(SREG,7);	
}
void Disable_global_INT(void)
{
	CLEAR_BIT(SREG,7);
}
