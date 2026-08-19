#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#include <stdint.h>
#include "config.h"
#include "private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/Regsters.h"

void DIO_SET_P_DIR(uint8_t G_name , uint8_t P_number , uint8_t DIR);  
void DIO_SET_P_VAL(uint8_t G_name , uint8_t P_number , uint8_t VAL );  
uint8_t DIO_GET_P_VAL(uint8_t G_name , uint8_t P_number);   

void DIO_SET_G_DIR(uint8_t G_name , uint8_t DIR);
void DIO_SET_G_VAL(uint8_t G_name , uint8_t VAL);
uint8_t DIO_GET_G_VAL(uint8_t G_name);

#endif