#include <stdio.h>
#include <stdint.h>

#include "interface.h"

int main()
{
    uint8_t choose;
    printf("enter the number of the problem= ");
    scanf("%hhu",&choose);

    switch(choose)
    { 
        case  1: Problem_1();  break;
        case  2: Problem_2();  break;
        case  3: Problem_3();  break;
        case  4: Problem_4();  break;
        case  5: Problem_5();  break;
        case  6: Problem_6();  break;
        case  7: Problem_7();  break;
        case  8: Problem_8();  break;
        case  9: Problem_9();  break;
        case 10: Problem_10(); break;
        case 11: Problem_11(); break;
        case 12: Problem_12(); break;
        case 13: Problem_13(); break;
        case 14: Problem_14(); break;
        case 15: Problem_15(); break;
        default: printf("invaild");
    }
    return 0;  
}