# C Driver to use external interrupt 0 on ATMEGA 32
- includes a basic toggle LED ISR. 

## Notes and pointers: 
- EXTI0 uses pin D4 only. (as mentioned in data sheet.)
- General interrupt must be activated seperatly. 
- according to used complier u may need to change the __attribute() sentax. 
- this driver is not for all external interrupts in the atmega though they work in a similar fashion. 

## Future work
- expanding to a Generic Conigable EXTI driver ( adding External Interrupts 1, 2). 
