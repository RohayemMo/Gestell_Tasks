#include <util/delay.h>
#include "LIB/common_macros.h"
#include "MCAL/DIO/DIO_interface.h"

int main(void)
{
    
    DIO_set_pin_direction(Dio_groupA , Dio_pin0 , output);

    while (1)
    {
        DIO_set_pin_value(Dio_groupA , Dio_pin0 , high);

        _delay_ms(1000);

        DIO_set_pin_value(Dio_groupA , Dio_pin0 , low);

        _delay_ms(1000);
    }

    return 0;
}