/*
 * Application.h
 *
 * Created: 09-Sep-22 10:46:59 PM
 *  Author: Ahmed Adel
 */ 


#ifndef APPLICATION_H_
#define APPLICATION_H_
#include "../DIO_Driver/DIO.h"
#include "../Ext_INT_Driver/External_Interrupt.h"
#include "../Timer_Driver/Timer0.h"
#include "../ECUAL/Led_Driver/Led.h"
#include "../ECUAL/Push_Button_Driver/button.h"

void APP_init(void);
void APP_start(void);
void normal_mode(void);
void clear_all_car_leds(void);
void car_green_op(void);
void car_yellow_op(void);
void car_red_op(void);
void Red_pedstrian_mode(void);
void blinking_both_yellow_leds(void);
#endif /* APPLICATION_H_ */