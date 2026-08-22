#include "MCAL/DIO/DIO_interface.h"
#include <stdint.h>
#include "LIB/Bit_Math.h"
#include "LIB/Regsters.h"


#define IR_PORT     Dio_groupA
#define IR_PIN      Dio_pin5
#define LED_PORT    Dio_groupC
#define LED_PIN     Dio_pin5


int main()
{
    uint8_t IR_Value;

    DIO_set_pin_direction(IR_PORT, IR_PIN, input);
    DIO_set_pin_value(IR_PORT, IR_PIN, high);
    DIO_set_pin_direction(LED_PORT, LED_PIN, output);
    DIO_set_pin_value(LED_PORT, LED_PIN, low);

    while (1)
    {
    IR_Value = DIO_get_pin_value(IR_PORT, IR_PIN);
    if (IR_Value == low)
    {
    DIO_set_pin_value(LED_PORT, LED_PIN, high);
    }
    else
    {
    DIO_set_pin_value(LED_PORT, LED_PIN, low);
    }
    }

return 0;
}