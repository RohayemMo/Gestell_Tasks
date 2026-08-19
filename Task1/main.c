#include "LIB/BIT_MATH.h"
#include "LIB/Regsters.h"
#include "MCAL/DIO/interface.h"
#include <util/delay.h>


int main(void)
{
    DIO_SET_P_DIR(DIO_GA, DIO_P0, DIO_OUTPUT);

    while (1)
    {
        ToggleBit(PORTA_Reg, DIO_P0);
        _delay_ms(500);
    }

    return 0;
}