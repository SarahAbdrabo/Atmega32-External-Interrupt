#ifndef _DIO_INTERFACE_H
#define _DIO_INTERFACE_H


/*function prototypes         */
/* what are the dio functions?*/
/*reg ddr */
void DIO_voidSetPinDir(u8 Copy_u8Port, u8  Copy_u8Pin, u8 Copy_u8Dir );
void DIO_voidSetPortDir(u8 Copy_u8Port, u8 Copy_u8Dir );

/*high or low : PORT*/
void DIO_voidSetPinValue(u8 Copy_u8Port, u8  Copy_u8Pin, u8 Copy_u8Val );
void DIO_voidSetPortValue(u8 Copy_u8Port, u8 Copy_u8Val );


/*reg PIN*/
u8   DIO_u8GetPinValue (u8 Copy_u8Port, u8  Copy_u8Pin );
u8   DIO_u8GetPortValue (u8 Copy_u8Port);




void DIO_VoidDigitalTogglePin	(u8 port, u8 pin);


/* function Prototypes
void  DIO_voidSetPinDir    (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Direction );
void  DIO_voidSetPinValue  (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Value );
u8    DIO_u8GetPinValue    (u8 Copy_u8PORT, u8 Copy_u8PIN);
void  DIO_u8TogglePin      (u8 Copy_u8PORT, u8 Copy_u8PIN);
void  DIO_voidSetPortDir   (u8 Copy_u8PORT,u8 Copy_u8Direction  );
void  DIO_voidSetPortValue (u8 Copy_u8PORT,u8 Copy_u8Value ); */


/******Data type protection for functions Arguments*********/

#define   PORTA     0
#define   PORTB     1
#define   PORTC     2
#define   PORTD     3

#define   PIN0      0
#define   PIN1      1
#define   PIN2      2
#define   PIN3      3
#define   PIN4      4
#define   PIN5      5
#define   PIN6      6
#define   PIN7      7

#define   OUTPUT    1
#define   INPUT     0

#define   HIGH      1
#define   LOW       0








#endif
