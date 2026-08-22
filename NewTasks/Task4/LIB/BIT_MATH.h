#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_

#define SetBit(reg, bitno)         ((reg) |=  (1 << (bitno)))   
#define ClearBit(reg, bitno)       ((reg) &= ~(1 << (bitno)))   
#define ToggleBit(reg, bitno)      ((reg) ^=  (1 << (bitno)))   
#define ReadBit(reg, bitno)        (((reg) >> (bitno)) & 1)     

#endif