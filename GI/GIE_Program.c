/*included needed libs*/
#include "BIT_MATH.h"
#include "STD_TYPES.h"


#include "GIE_Interface.h"
#include "GIE_Private.h"

void GIE_voidEnable(void)
{
	SET_BIT(SREG, GIE_PIN);
}
void GIE_voidDisable(void)
{

	CLR_BIT(SREG, GIE_PIN);
}




