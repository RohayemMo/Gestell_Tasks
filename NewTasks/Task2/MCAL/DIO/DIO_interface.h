#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/Regsters.h"
#include "DIO_config.h"
#include "DIO_private.h"

void DIO_set_pin_direction(u8 G_name, u8 P_number, u8 DIR);
void DIO_set_pin_value(u8 G_name, u8 P_number, u8 VAL);
u8   DIO_get_pin_value(u8 G_name, u8 P_number);
void DIO_toggle_pin_value(u8 G_name, u8 P_number);

void DIO_set_group_direction(u8 G_name, u8 DIR);
void DIO_set_group_value(u8 G_name, u8 VAL);
u8   DIO_get_group_value(u8 G_name);

#endif
