/*
 * Application.c
 *
 * Created: 09-Sep-22 10:47:13 PM
 *  Author: Ahmed Adel
 */ 

/*
car green led ---> portA 0
car yellow led ---> portA 1
car red led ---> portA 2


pedestrian green led ---> portB 0
pedestrian yellow led ---> portB 1
pedestrian red led ---> portB 2
*/


#include "Application.h"
volatile uint8_t state=0;
volatile uint8_t green_car_flag=0,yellow_car_flag=0,red_car_flag=0;

ISR(EXT_INT_0)
{
	state=1;
	
	if (((green_car_flag==1)||(yellow_car_flag==1))&&(state==1))
	{
		TIMER0_endDelay();
		clear_all_car_leds();
		blinking_both_yellow_leds();
		DIO_WRITE(PA,2,HIGH);
		DIO_WRITE(PB,0,HIGH);
		TIMER0_Delay_ms(5000000);
		DIO_WRITE(PA,2,LOW);
		blinking_both_yellow_leds();
		DIO_WRITE(PB,0,LOW);
		DIO_WRITE(PA,0,HIGH);
		DIO_WRITE(PB,2,HIGH);
		
		state=0;
	}
	
	else if ((red_car_flag==1)&&(state==1))
	{
		
		Red_pedstrian_mode();
		state=0;
	}
	
	
}

void APP_init(void)
{
	/*initialize the Led pins*/
	DIO_INIT(PA,0,OUTPUT);
	DIO_INIT(PA,1,OUTPUT);
	DIO_INIT(PA,2,OUTPUT);
	
	DIO_INIT(PB,0,OUTPUT);
	DIO_INIT(PB,1,OUTPUT);
	DIO_INIT(PB,2,OUTPUT);
	/***************************************************************/
	/*initialize the starting led process will be low */
	DIO_WRITE(PA,0,LOW);
	DIO_WRITE(PA,1,LOW);
	DIO_WRITE(PA,2,LOW);
	
	DIO_WRITE(PB,0,LOW);
	DIO_WRITE(PB,1,LOW);
	DIO_WRITE(PB,2,LOW);
	/****************************************************************/
	ENABLE_EXTERNAL_INTERRUPT(INTERRUPT0,FALLING_EDGE);
	Enable_global_INT();
	
	Timer0_ConfigType config_TIMER0 = {NORMAL_MODE,F_CPU_1024};
	TIMER0_init(&config_TIMER0);
	
}

	void normal_mode(void)
	{		
	
		car_green_op();
		car_yellow_op();
		car_red_op();
		car_yellow_op();
	}
	
	void clear_all_car_leds(void)
	{
		DIO_WRITE(PA,0,LOW);
		DIO_WRITE(PA,1,LOW);
		DIO_WRITE(PA,2,LOW);
	}
	
	void car_green_op(void)
	{
		DIO_WRITE(PA,0,HIGH);
		green_car_flag=1;
		
		TIMER0_Delay_ms(5000000);
		green_car_flag=0;
		DIO_WRITE(PA,0,LOW);
		
	}
	
	void car_yellow_op(void)
	{
		DIO_WRITE(PA,2,LOW);
		for(int yellow_led=0;yellow_led<10;yellow_led++)
		{
			yellow_car_flag=1;
			DIO_TOGGLE(PA,1);
			TIMER0_Delay_ms(1000000);
			yellow_car_flag=0;
		}
		
	}
	
	void car_red_op(void)
	{
		DIO_WRITE(PA,2,HIGH);
		red_car_flag=1;
		
		TIMER0_Delay_ms(5000000);
		red_car_flag=0;
		DIO_WRITE(PA,2,LOW);
	}

void Red_pedstrian_mode(void)
{
	TIMER0_endDelay();
	DIO_WRITE(PB,0,HIGH);
	TIMER0_Delay_ms(5000000);
	DIO_WRITE(PB,0,LOW);
	TIMER0_endDelay();
	DIO_WRITE(PA,2,LOW);	
}


void blinking_both_yellow_leds(void)
{
	for (int i=0;i<10;i++) //blinking both yellow leds for 5 sec
	{
		DIO_TOGGLE(PA,1);
		DIO_TOGGLE(PB,1);
		TIMER0_Delay_ms(1000000);
	}
}


void APP_start(void)
{
	while (1)
	{	
		
		normal_mode();
		
	}
}