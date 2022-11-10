/*first step is always gaurd*/
#ifndef _GIE_INTERFACE_H
#define _GIE_INTERFACE_H

/*functions prototypes*/
void GIE_voidEnable(void);
void GIE_voidDisable(void);



/*since this reg conntains many pins,  it is good practice to specify which one. */
#define      GIE_PIN      7


#endif
