#include "interface.h"
#include "config.h"
#include "private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/Regsters.h"


void DIO_SET_P_DIR(uint8_t G_name, uint8_t P_number, uint8_t DIR)
{
    switch (G_name)
    {
        case DIO_GA:
            if (DIR == DIO_OUTPUT)
                SetBit(DDRA_Reg, P_number);
            else
                ClearBit(DDRA_Reg, P_number);
            break;

        case DIO_GB:
            if (DIR == DIO_OUTPUT)
                SetBit(DDRB_Reg, P_number);
            else
                ClearBit(DDRB_Reg, P_number);
            break;

        case DIO_GC:
            if (DIR == DIO_OUTPUT)
                SetBit(DDRC_Reg, P_number);
            else
                ClearBit(DDRC_Reg, P_number);
            break;

        case DIO_GD:
            if (DIR == DIO_OUTPUT)
                SetBit(DDRD_Reg, P_number);
            else
                ClearBit(DDRD_Reg, P_number);
            break;

        default:
            break;
    }
}


void DIO_SET_P_VAL(uint8_t G_name, uint8_t P_number, uint8_t VAL)
{
    switch (G_name)
    {
        case DIO_GA:
            if (VAL == DIO_HIGH)
                SetBit(PORTA_Reg, P_number);
            else
                ClearBit(PORTA_Reg, P_number);
            break;

        case DIO_GB:
            if (VAL == DIO_HIGH)
                SetBit(PORTB_Reg, P_number);
            else
                ClearBit(PORTB_Reg, P_number);
            break;

        case DIO_GC:
            if (VAL == DIO_HIGH)
                SetBit(PORTC_Reg, P_number);
            else
                ClearBit(PORTC_Reg, P_number);
            break;

        case DIO_GD:
            if (VAL == DIO_HIGH)
                SetBit(PORTD_Reg, P_number);
            else
                ClearBit(PORTD_Reg, P_number);
            break;

        default:
            break;
    }
}


uint8_t DIO_GET_P_VAL(uint8_t G_name, uint8_t P_number)
{
    uint8_t value = 0;

    switch (G_name)
    {
        case DIO_GA:
            value = ReadBit(PINA_Reg, P_number);
            break;

        case DIO_GB:
            value = ReadBit(PINB_Reg, P_number);
            break;

        case DIO_GC:
            value = ReadBit(PINC_Reg, P_number);
            break;

        case DIO_GD:
            value = ReadBit(PIND_Reg, P_number);
            break;

        default:
            value = 0;
            break;
    }

    return value;
}


void DIO_SET_G_DIR(uint8_t G_name, uint8_t DIR)
{
    switch (G_name)
    {
        case DIO_GA:
            if (DIR == DIO_OUTPUT)
                DDRA_Reg = 0xFF;
            else
                DDRA_Reg = 0x00;
            break;

        case DIO_GB:
            if (DIR == DIO_OUTPUT)
                DDRB_Reg = 0xFF;
            else
                DDRB_Reg = 0x00;
            break;

        case DIO_GC:
            if (DIR == DIO_OUTPUT)
                DDRC_Reg = 0xFF;
            else
                DDRC_Reg = 0x00;
            break;

        case DIO_GD:
            if (DIR == DIO_OUTPUT)
                DDRD_Reg = 0xFF;
            else
                DDRD_Reg = 0x00;
            break;

        default:
            break;
    }
}


void DIO_SET_G_VAL(uint8_t G_name, uint8_t VAL)
{
    switch (G_name)
    {
        case DIO_GA:
            PORTA_Reg = VAL;
            break;

        case DIO_GB:
            PORTB_Reg = VAL;
            break;

        case DIO_GC:
            PORTC_Reg = VAL;
            break;

        case DIO_GD:
            PORTD_Reg = VAL;
            break;

        default:
            break;
    }
}


uint8_t DIO_GET_G_VAL(uint8_t G_name)
{
    uint8_t value = 0;

    switch (G_name)
    {
        case DIO_GA:
            value = PINA_Reg;
            break;

        case DIO_GB:
            value = PINB_Reg;
            break;

        case DIO_GC:
            value = PINC_Reg;
            break;

        case DIO_GD:
            value = PIND_Reg;
            break;

        default:
            value = 0;
            break;
    }

    return value;
}