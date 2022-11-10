/*first step is always gaurd*/
#ifndef _EXT_I0_INTERFACE_H
#define _EXT_I0_INTERFACE_H


/*functions prototypes*/
void EXTI0_voidDInit(void);

void EXTI0_voidEnable(void);
void EXTI0_voidDIsable(void);

/*function to change the inteerupt sense mode in run time- optional*/
void  EXTI0_u8Singal(u8 Copy_u8SenseMode);

/*the vector table fun to call is + the compiler opt. addition */
void __vector_1 (void) __attribute__((signal));

/*the call back function to pass the function address in from the app layer.*/
void EXTI0_SetCallBack( void(*Copy_ptrfn)(void) );

#endif
