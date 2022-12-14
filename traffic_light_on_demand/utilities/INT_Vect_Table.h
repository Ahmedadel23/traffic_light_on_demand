/*
 * INT_Vect_Table.h
 *
 * Created: 12-Sep-22 3:52:23 PM
 *  Author: Ahmed Adel
 */ 


#ifndef INT_VECT_TABLE_H_
#define INT_VECT_TABLE_H_

/**********************************************************
* 						Definition 						  *
**********************************************************/

 /* External Interrupt Vector */
 /* External Interrupt Request 0 */
 #define EXT_INT_0 __vector_1
 /* External Interrupt Request 1 */
 #define EXT_INT_1 __vector_2
 /* External Interrupt Request 2 */
 #define EXT_INT_2 __vector_3

 /* Timer Interrupt Vector */

 /*Timer 2*/
 /* Timer/Counter2 Compare Match */
 #define TIMER2_COMP __vector_4
 /* Timer/Counter2 Overflow */
 #define TIMER2_OVF __vector_5

 /*Timer 1*/
 /* Timer/Counter1 Capture Event */
 #define TIMER1_CAPT __vector_6
 /* Timer/Counter1 Compare Match A */
 #define TIMER1_COMPA __vector_7
 /* Timer/Counter1 Compare Match B */
 #define TIMER1_COMPB __vector_8
 /* Timer/Counter1 Overflow */
 #define TIMER1_OVF __vector_9

 /*Timer 0*/
 /* Timer/Counter0 Compare Match */
 #define TIMER0_COMP __vector_10
 /* Timer/Counter0 Overflow */
 #define TIMER0_OVF __vector_11
 
 
 #define ISR(INT_VECT)  void INT_VECT (void) __attribute__((signal,used)); \
 void INT_VECT (void)

 /**********************************************************
 *          Assembly Enable/Disable Global Interrupt		  *
 **********************************************************/

 /* Assembly function to Enable Global Interrupt*/
 #define sei() __asm__ __volatile__ ("sei" ::: "memory");
 
 /* Assembly function to Disable Global Interrupt*/
 #define cli() __asm__ __volatile__ ("cli" ::: "memory");
 
 



#endif /* INT_VECT_TABLE_H_ */