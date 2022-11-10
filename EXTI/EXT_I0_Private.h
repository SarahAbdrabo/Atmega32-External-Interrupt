/*included needed libs*/
#include "BIT_MATH.h"
#include "STD_TYPES.h"


/*always gaurd*/
#ifndef _EXT_I0_PRIVATE_H
#define _EXT_I0_PRIVATE_H


/*the address of the Registers*/
#define 	 MCUCR    (*((volatile u8*) 0x55))
#define 	 MCUCSR   (*((volatile u8*) 0x54))

#define 	 GICR	    (*((volatile u8*) 0x5B))
#define 	 GIFR	    (*((volatile u8*) 0x5A))

/*the four sense modes that you choose from in MCU Control REG for INT 0*/
#define 	EXT_I0_ON_LOW	 	5
#define 	EXT_I0_INT_ONC   	7    /*intpt on any change of state*/
#define 	EXT_I0_FALLING   	9
#define 	EXT_I0_RISING   	3

/*the pins for the Interrupt 0 Sense Control in MCUCR */
#define   ISC00    0
#define   ISC01    1
/*intpt 1 Sense modes in MCUCR*/
#define   ISC10    2
#define   ISC11    3
/*intpt 2 Sense modes in MCUCSR*/
#define   ISC6     6


/*INterrupt enable pin from the GICR*/
#define    INT0     6    /*bit no 6 in the GICR*/


#endif
