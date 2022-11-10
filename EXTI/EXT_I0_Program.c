/*included needed libs*/
#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "GIE_Interface.h"
#include "GIE_Private.h"

#include "EXT_I0_Interface.h"
#include "EXT_I0_Private.h"


#define NULL_PTR (void (*)(void))0

/*imp.*/
void EXTI0_voidDInit(void){


    /****clear all sense modes in all external intps******/
      CLR_BIT(MCUCR, ISC00);
			CLR_BIT(MCUCR, ISC01);
			/*ext1*/
			CLR_BIT(MCUCR, ISC10);
			CLR_BIT(MCUCR, ISC11);
			/*ext int 2*/
			CLR_BIT(MCUCSR, ISC6);
    /* choose the sense mode used. this will be configable in the future in a seperate file. */
    #define    SENSE_MODE     EXT_I0_FALLING

    if(SENSE_MODE == EXT_I0_FALLING)
	{
		CLR_BIT(MCUCR, ISC00);
		SET_BIT(MCUCR, ISC01);

	}
	else if ( SENSE_MODE ==  EXT_I0_RISING )
	{
		SET_BIT(MCUCR, ISC00);
		SET_BIT(MCUCR, ISC01);

	}
	else if (SENSE_MODE == EXT_I0_ON_LOW )
	{
		CLR_BIT(MCUCR, ISC00);
		CLR_BIT(MCUCR, ISC01);
	}
	else if ( SENSE_MODE == EXT_I0_INT_ONC )
	{
		SET_BIT(MCUCR, ISC00);
		CLR_BIT(MCUCR, ISC01);

	}
	else
	{
        /*adding future steps of closing the intpt + warining */
	}


    /******* Disable the state of all the interrupts ie PIEs.*********************/
    CLR_BIT(GICR, 5);
    CLR_BIT(GICR, 6);
    CLR_BIT(GICR, 7);
  
    /***********Clear All flags by setting them to Logical High **********************/
    SET_BIT(GIFR, 5);
    CLR_BIT(GICR, 6);
    CLR_BIT(GICR, 7);
}

void EXTI0_voidEnable(void){
	SET_BIT(GICR, INT0);

}
void EXTI0_voidDIsable(void){

	CLR_BIT(GICR, INT0);
}




/*a null ptr to recieve the addresss of the isr fun in app layer from the call back
Generic pointer, for the ISR only.
*/
void (*EXTI0_CallBackPtr)(void) = NULL_PTR ;

/*function to recieve the address and put it in the global generic pointer if it has 7aga gwah.*/
void EXTI0_SetCallBack( void(*Copy_ptrfn)(void) ){

	if (Copy_ptrfn != NULL_PTR){

		EXTI0_CallBackPtr = Copy_ptrfn;
	}
}

/*function to call the ISR > thru the call back address > so it will exexute */
void __vector_1(void)
{
	/*call ISR_Sarah thru the call back pointer*/
	/* calling ISR_Sarah(); thru a pointer to it*/
	EXTI0_CallBackPtr();
}



/*optional function to config sense mode in run time ie the main.c */
void  EXTI0_u8Singal(u8 Copy_u8SenseMode){
	if(Copy_u8SenseMode == EXT_I0_FALLING)
	{
		CLR_BIT(MCUCR, ISC00);
		SET_BIT(MCUCR, ISC01);
	}
	else if ( Copy_u8SenseMode ==  EXT_I0_RISING )
	{
		SET_BIT(MCUCR, ISC00);
		SET_BIT(MCUCR, ISC01);

	}
	else if (Copy_u8SenseMode == EXT_I0_ON_LOW )
	{
		CLR_BIT(MCUCR, ISC00);
		CLR_BIT(MCUCR, ISC01);
	}
	else if ( Copy_u8SenseMode == EXT_I0_INT_ONC )
	{
		SET_BIT(MCUCR, ISC00);
		CLR_BIT(MCUCR, ISC01);

	}
	else
	{
        /*adding an optional step of closing the intpt*/
	}

}
