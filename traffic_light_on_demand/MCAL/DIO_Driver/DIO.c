/*
 * DIO.c
 *
 * Created: 09-Sep-22 10:43:49 PM
 *  Author: Ahmed Adel
 */ 

#include "DIO.h"
void DIO_INIT(uint8_t port,uint8_t pin_number,uint8_t direction)
{
	
	switch(port)
	{
		case PA:
			if (direction==INPUT)
			{
				CLEAR_BIT(DDR_A,pin_number);
			}
			else if (direction==OUTPUT)
			{
				SET_BIT(DDR_A,pin_number);
			}
			break;
		
		case PB:
			if (direction==INPUT)
			{
				CLEAR_BIT(DDR_B,pin_number);
			}
			else if (direction==OUTPUT)
			{
				SET_BIT(DDR_B,pin_number);
			}
			break;
		
		case PC:
			if (direction==INPUT)
			{
				CLEAR_BIT(DDR_C,pin_number);
			}
			else if (direction==OUTPUT)
			{
				SET_BIT(DDR_C,pin_number);
			}
			break;
		
		case PD:
			if (direction==INPUT)
			{
				CLEAR_BIT(DDR_D,pin_number);
			}
			else if (direction==OUTPUT)
			{
				SET_BIT(DDR_D,pin_number);
			}
			break;
	}
}

void DIO_WRITE(uint8_t port,uint8_t pin_number,uint8_t value)
{
	switch(port)
	{
		case PA:
			if (value==LOW)
			{
				CLEAR_BIT(PORT_A,pin_number);
			}
			else if (value==HIGH)
			{
				SET_BIT(PORT_A,pin_number);
			}
			break;
			
		case PB:
			if (value==LOW)
			{
				CLEAR_BIT(PORT_B,pin_number);
			}
			else if (value==HIGH)
			{
				SET_BIT(PORT_B,pin_number);
			}
			break;
			
		case PC:
			if (value==LOW)
			{
				CLEAR_BIT(PORT_C,pin_number);
			}
			else if (value==HIGH)
			{
				SET_BIT(PORT_C,pin_number);
			}
			break;
			
		case PD:
			if (value==LOW)
			{
				CLEAR_BIT(PORT_D,pin_number);
			}
			else if (value==HIGH)
			{
				SET_BIT(PORT_D,pin_number);
			}
			break;
	}
}

void DIO_TOGGLE(uint8_t port,uint8_t pin_number){
	
	switch(port)
	{
		case PA:
		TOGGLE_BIT(PORT_A, pin_number);
		break;
		case PB:
		TOGGLE_BIT(PORT_B, pin_number);
		break;
		case PC:
		TOGGLE_BIT(PORT_C, pin_number);
		break;
		case PD:
		TOGGLE_BIT(PORT_D, pin_number);
		break;
		
		
	}
		
}

uint8_t DIO_READ(uint8_t port,uint8_t pin_number, uint8_t *value)
{
	switch(port)
	{
		case PA:
		*value = GET_BIT(PIN_A, pin_number);
		break;
		case PB:
		*value = GET_BIT(PIN_B, pin_number);
		break;
		case PC:
		*value = GET_BIT(PIN_C, pin_number);
		break;
		case PD:
		*value = GET_BIT(PIN_D, pin_number);
		break;
		default:
		return 0; break;
	}
}