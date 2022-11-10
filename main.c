/*
includes of : DIO , GIE, EXT INT 0 + LI
 */
#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "DIO_Interface.h"
#include "DIO_Private.h"

#include "GIE_Interface.h"
#include "GIE_Private.h"

#include "EXT_I0_Interface.h"
#include "EXT_I0_Private.h"


/***************************************************************************************/

void ISR_Sarah (void){

    if ( DIO_u8GetPinValue(PORTD, PIN2) == HIGH)
    {
        DIO_VoidDigitalTogglePin(PORTC, PIN2);
    }

    }



int main(void)
{

    	 /**make all leds high, button connected on exti0, make led 1 low
    LED2 D3
    LED1 C7
    LED0 C2
    INTPT PIN on pushbutton D2**/


    DIO_voidSetPinDir(PORTC, PIN7, OUTPUT);  //DDR REG
    DIO_voidSetPinDir(PORTC, PIN2, OUTPUT);  //DDR REG
    DIO_voidSetPinDir(PORTD, PIN3, OUTPUT);  //DDR REG
	/* the ext int 0 pin needs to be set as input but not pulled up. */
    DIO_voidSetPinDir(PORTD, PIN2, INPUT);   //DDR REG

    DIO_voidSetPinValue(PORTC, PIN7, HIGH);
    DIO_voidSetPinValue(PORTC, PIN2, HIGH);
    DIO_voidSetPinValue(PORTD, PIN3, HIGH);
	/*********************************Interrupt init. ***********************************/
	
    EXTI0_SetCallBack(ISR_Sarah);


    GIE_voidEnable();
    EXTI0_voidDInit();
    EXTI0_voidEnable();

	
    while(1)
    {
        /*just call the isr and wait*/

    }

    return 0;
}
