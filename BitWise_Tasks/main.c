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
        case  1: Problem__1();  break;
        case  2: Problem__2();  break;
        case  3: Problem__3();  break;
        case  4: Problem__4();  break;
        case  5: Problem__5();  break;
        case  6: Problem__6();  break;
        case  7: Problem__7();  break;
        case  8: Problem__8();  break;
        case  9: Problem__9();  break;
        case 10: Problem__10(); break;
        case 11: Problem__11(); break;
        case 12: Problem__12(); break;
        case 13: Problem__13(); break;
        case 14: Problem__14(); break;
        case 15: Problem__15(); break;
        default: printf("invaild");
    }
    return 0;  
}