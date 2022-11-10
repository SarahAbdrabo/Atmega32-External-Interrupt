# C Driver to use external interrupt 0 on ATMEGA 32
- includes a basic toggle LED ISR. 

## How to use: 
 1. add needed files.
 2. write desired ISR
 3. activate the GIE and PIE in main. 
 4. build and run. 

## Notes and pointers: 
- EXTI0 uses pin D4 only. (as mentioned in data sheet.)
- General interrupt must be activated seperatly. 
- according to used complier u may need to change the __attribute() sentax. 
- this driver is not for all external interrupts in the atmega though they work in a similar fashion. 

## Future work
- expanding to a Generic Conigable EXTI driver ( adding External Interrupts 1, 2). 
