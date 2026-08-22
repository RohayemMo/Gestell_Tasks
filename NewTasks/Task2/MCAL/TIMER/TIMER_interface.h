#include <stdint.h>
#ifndef _TIMER_INTERFACE_H_
#define _TIMER_INTERFACE_H_

#include "../../LIB/BIT_MATH.h"
#include "../../LIB/Regsters.h"
#include "TIMER_config.h"
#include "TIMER_private.h"
#include "../../LIB/common_macros.h"
#include <stdint.h>

void TIMER0_init(timer0_config_t config);
void TIMER0_start(uint8_t clock_select_value);
void TIMER0_stop(void);
void TIMER0_set_preload (uint8_t preload_value);
void TIMER0_set_compare_match (uint8_t compare_match_value);


void TIMER0_set_call_back_fucntion (uint8_t timer_interupt_type , void (*PF)(void));


// compare match
void __vector_10(void)   __attribute__((signal));
// overflow 
void __vector_11(void)   __attribute__((signal));

#endif
