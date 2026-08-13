#include <stdint.h>
#include <stdio.h>

#include "interface.h"
#include "private.h"

/*===============================================================================================*/
void Problem__1()
{
    int8_t number;
    printf("please enter number= ");
    scanf(" %hhd",&number);
    if((number&1)==1)
    {
        printf("LSB of %hhd is sent (1)\n",number);
    }
    else
    {
         printf("LSB of %hhd is unsent (0)\n",number);
    }
}
/*===============================================================================================*/
void Problem__2()
{
    int8_t number;
    printf("please enter number= ");
    scanf(" %hhd",&number);
    int8_t MSB=number;
    int8_t MSB_Value=(MSB>>7);
    if((MSB_Value&1)==1)
    {
        printf("MSB of %hhd is sent (1)\n",number);
    }
    else
    {
         printf("MSB of %hhd is unsent (0)\n",number);
    }
}
/*===============================================================================================*/
void Problem__3()
{
    int8_t number;
    int8_t BIT;
    printf("please enter number= ");
    scanf(" %hhd",&number);
    printf("please enter nth bit to check(31-0  )= ");
    scanf(" %hhd",&BIT);

    if(((number>>BIT)&1)==1)
    {
        printf("BIT %hhd is set to 1\n",BIT);
    }
    else
    {
        printf("BIT %hhd is Uset to 0\n",BIT);
    }
}
/*===============================================================================================*/
void Problem__4()
{
    int8_t number;
    int8_t BIT;
    printf("please enter number= ");
    scanf(" %hhd",&number);
    printf("enter th bit to set= ");
    scanf(" %hhd",&BIT);

    int8_t number_after=number | (1<<BIT);

    printf("Set bitsuccessfully\n");
    printf("Number before setting %hhd bit= %hhd\n", BIT, number);
    printf("Number after setting %hhd bit= %hhd\n", BIT , number_after);
}
/*===============================================================================================*/
void Problem__5()
{
    int8_t number;
    int8_t BIT;
    printf("please enter number= ");
    scanf(" %hhd",&number);
    printf("enter thw bit to set= ");
    scanf(" %hhd",&BIT);

    int8_t number_after=number &~ (1<<BIT);

    printf("Clear Bit successfully\n");
    printf("Number before setting %hhd bit= %hhd\n", BIT, number);
    printf("Number after setting %hhd bit- %hhd\n", BIT , number_after);
}
/*===============================================================================================*/
void Problem__6()
{
    int8_t number;
    int8_t highest_Bit=0;
    printf("please enter number= ");
    scanf(" %hhd",&number);
    for( int8_t counter=0 ; counter<8 ; counter++)
    {
        if(((number>>counter)&1)==1)
        {
            highest_Bit=counter;
        }
    }
    printf("Highest order set bit in %hhd is %hhd\n",number,highest_Bit);
}
/*===============================================================================================*/
void Problem__7()
{
    int8_t number;
    int8_t Lowest_Bit=0;
    printf("please enter number= ");
    scanf(" %hhd",&number);
    for( int8_t counter=0 ; counter<8 ; counter++)
    {
        if(((number>>counter)&1)==1)
        {
        Lowest_Bit=counter;
        break;
        }
    }
    printf("Lowest order set bit in %hhd is %hhd\n",number,Lowest_Bit);
}
/*===============================================================================================*/
void Problem__8()
{
    int8_t number;
    int8_t Count_Zero=0;
    printf("please enter number= ");
    scanf(" %hhd",&number);
    for( int8_t counter=0 ; counter<8 ; counter++)
    {
        if(((number>>counter)&1)==0)
        {
        Count_Zero++;
        }
        else
        {
            break;
        }
    }
    printf("The number of trilling zero in %hhd is %hhd\n",number,Count_Zero);
}
/*===============================================================================================*/
void Problem__9()
{
    int8_t number;
    int8_t Count_LeadingOf_Zeros=0;
    printf("please enter number= ");
    scanf(" %hhd",&number);
    for( int8_t counter=7 ; counter>0 ; counter--)
    {
        if(((number>>counter)&1)==0)
        {
        Count_LeadingOf_Zeros++;
        }
        else
        {
            break;
        }
    }
    printf("number of leadind zeros in %hhd is %hhd\n",number,Count_LeadingOf_Zeros);
}
/*===============================================================================================*/
void Problem__10()
{
    int8_t number;
    int8_t result=0;
    printf("please enter number= ");
    scanf(" %hhd",&number);

    for( int8_t counter=0 ; counter<8 ; counter++)
    {
        if (((number >> counter) & 1) == 1)
        {
        result = result & ~ (1 << counter);
        }
        else
        {
        result= result | (1<<counter);
        }
    }

    printf("The original number= %hhd\n",number);
    printf("number after bits are flipped= %hhd\n",result);

}
/*===============================================================================================*/
void Problem__11()
{
    int8_t number;
    int8_t Count_Zeros=0;
    int8_t Count_Ones=0;
    printf("please enter number= ");
    scanf(" %hhd",&number);
    for( int8_t counter=0 ; counter<8 ; counter++)
    {
        if(((number>>counter)&1)==0)
        {
        Count_Zeros++;
        }
        else
        {
        Count_Ones++;
        }
    }
    printf("Total zeros = %hhd\n",Count_Zeros);
    printf("Total ones = %hhd\n",Count_Ones);
}
/*===============================================================================================*/
void Problem__12()
{
    int8_t number;
    int8_t choose;
    int8_t times;
    printf("please enter number= ");
    scanf(" %hhd",&number);
    int8_t roated_number= number;

    printf("%hhd for Right Shift\n", Right_Shift);
    printf("%hhd for Left Shift\n", Left_Shift);
    printf("Your choice: ");
    scanf("%hhd", &choose);
    printf("enter how many times do you want to rotate: ");
    scanf("%hhd", &times);
    
    if(choose==Right_Shift)
    {
        for(int8_t counter=0 ; counter<times ; counter++)
        {
            if((roated_number&1)==1)
            {
            roated_number= roated_number>>1;
            roated_number= roated_number |  (1 << (7));
            }
            else if((roated_number&1)==0)
            {
            roated_number= roated_number>>1;
            roated_number= roated_number & ~(1 << (7));
            }

        }
        printf("Rotated number = %hhd\n", roated_number);
    }
    else if(choose==Left_Shift)
    {
        for(int8_t counter=0 ; counter<times ; counter++)
        {
            if((roated_number&(1<<7))!=0)
            {
            roated_number= roated_number<<1;
            roated_number= roated_number | 1;
            }
            else if((roated_number&(1<<7))==0)
            {
            roated_number= roated_number<<1;
            }
        }
        printf("Rotated number = %hhd\n", roated_number);
    }
}
/*===============================================================================================*/
void Problem__13()
{
    int8_t number;
    int8_t num_1;
    int8_t num_2;
    printf("please enter number1= ");
    scanf(" %hhd",&num_1);
    printf("please enter number2= ");
    scanf(" %hhd",&num_2);
    printf("Original num1= %hhd\n",num_1);
    printf("Original num1= %hhd\n",num_2);

    num_1=num_1 ^ num_2;
    num_2=num_1 ^ num_2;
    num_1=num_1 ^ num_2;

    printf("number1 after swap= %hhd\n",num_1);
    printf("number2 after swap= %hhd\n",num_2);
}
/*===============================================================================================*/
void Problem__14()
{
    int8_t number;
    printf("please enter number= ");
    scanf(" %hhd",&number);
    if (((number >> 1) & 1) == 1)
    {
    printf("Number %hhd is odd",number);
    }
    else
    {
    printf("Number %hhd is even",number);
    }
}
/*===============================================================================================*/
void Problem__15()
{
    int8_t number;
    printf("please enter number= ");
    scanf(" %hhd",&number);
    
    printf("Number %hhd in binary",number);
    for(int8_t counter=7;counter>=0;counter--)
    {
        if(((number>>counter)&1)==1)
        {
         printf("1");
        }
        else
        {
         printf("0");
        }
    }
}
/*===============================================================================================*/