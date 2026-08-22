#include "DIO_interface.h"

void DIO_set_pin_direction(u8 G_name, u8 P_number, u8 DIR)
{
    switch (G_name)
    {
        case Dio_groupA:
            if (DIR == output) SetBit(DDRA, P_number);
            else                ClearBit(DDRA, P_number);
            break;

        case Dio_groupB:
            if (DIR == output) SetBit(DDRB, P_number);
            else                ClearBit(DDRB, P_number);
            break;

        case Dio_groupC:
            if (DIR == output) SetBit(DDRC, P_number);
            else                ClearBit(DDRC, P_number);
            break;

        case Dio_groupD:
            if (DIR == output) SetBit(DDRD, P_number);
            else                ClearBit(DDRD, P_number);
            break;

        default:
            break;
    }
}

void DIO_set_pin_value(u8 G_name, u8 P_number, u8 VAL)
{
    switch (G_name)
    {
        case Dio_groupA:
            if (VAL == high) SetBit(PORTA, P_number);
            else               ClearBit(PORTA, P_number);
            break;

        case Dio_groupB:
            if (VAL == high) SetBit(PORTB, P_number);
            else               ClearBit(PORTB, P_number);
            break;

        case Dio_groupC:
            if (VAL == high) SetBit(PORTC, P_number);
            else               ClearBit(PORTC, P_number);
            break;

        case Dio_groupD:
            if (VAL == high) SetBit(PORTD, P_number);
            else               ClearBit(PORTD, P_number);
            break;

        default:
            break;
    }
}

u8 DIO_get_pin_value(u8 G_name, u8 P_number)
{
    u8 value = 0;

    switch (G_name)
    {
        case Dio_groupA: value = ReadBit(PINA, P_number); break;
        case Dio_groupB: value = ReadBit(PINB, P_number); break;
        case Dio_groupC: value = ReadBit(PINC, P_number); break;
        case Dio_groupD: value = ReadBit(PIND, P_number); break;
        default:         value = 0; break;
    }

    return value;
}

void DIO_toggle_pin_value(u8 G_name, u8 P_number)
{
    switch (G_name)
    {
        case Dio_groupA: ToggleBit(PORTA, P_number); break;
        case Dio_groupB: ToggleBit(PORTB, P_number); break;
        case Dio_groupC: ToggleBit(PORTC, P_number); break;
        case Dio_groupD: ToggleBit(PORTD, P_number); break;
        default: break;
    }
}

void DIO_set_group_direction(u8 G_name, u8 DIR)
{
    switch (G_name)
    {
        case Dio_groupA: DDRA = (DIR == output) ? 0xFF : 0x00; break;
        case Dio_groupB: DDRB = (DIR == output) ? 0xFF : 0x00; break;
        case Dio_groupC: DDRC = (DIR == output) ? 0xFF : 0x00; break;
        case Dio_groupD: DDRD = (DIR == output) ? 0xFF : 0x00; break;
        default: break;
    }
}

void DIO_set_group_value(u8 G_name, u8 VAL)
{
    switch (G_name)
    {
        case Dio_groupA: PORTA = VAL; break;
        case Dio_groupB: PORTB = VAL; break;
        case Dio_groupC: PORTC = VAL; break;
        case Dio_groupD: PORTD = VAL; break;
        default: break;
    }
}

u8 DIO_get_group_value(u8 G_name)
{
    u8 value = 0;

    switch (G_name)
    {
        case Dio_groupA: value = PINA; break;
        case Dio_groupB: value = PINB; break;
        case Dio_groupC: value = PINC; break;
        case Dio_groupD: value = PIND; break;
        default:         value = 0; break;
    }

    return value;
}
