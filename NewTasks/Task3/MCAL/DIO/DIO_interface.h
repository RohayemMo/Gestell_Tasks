#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#include <stdint.h>
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/Regsters.h"
#include "DIO_config.h"
#include "DIO_private.h"

void DIO_set_pin_direction(uint8_t G_name, uint8_t P_number, uint8_t DIR);
void DIO_set_pin_value(uint8_t G_name, uint8_t P_number, uint8_t VAL);
uint8_t   DIO_get_pin_value(uint8_t G_name, uint8_t P_number);
void DIO_toggle_pin_value(uint8_t G_name, uint8_t P_number);

void DIO_set_group_direction(uint8_t G_name, uint8_t DIR);
void DIO_set_group_value(uint8_t G_name, uint8_t VAL);
uint8_t   DIO_get_group_value(uint8_t G_name);

#endif
