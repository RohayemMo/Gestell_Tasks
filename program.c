#include <stdint.h>
#include <stdio.h>

#include "interface.h"

/*===============================================================================================*/
void Problem_1()
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
void Problem_2()
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
void Problem_3()
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
void Problem_4()
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
void Problem_5()
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
void Problem_6()
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
void Problem_7()
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
void Problem_8()
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
void Problem_9()
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
void Problem_10()
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
void Problem_11()
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
void Problem_12()
{

}
/*===============================================================================================*/
void Problem_13()
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
void Problem_14()
{
    int8_t number;
    printf("please enter number= ");
    scanf(" %hhd",&number);
    if (((number >> 7) & 1) == 1)
    {
    printf("Number %hhd is odd",number);
    }
    else
    {
    printf("Number %hhd is even",number);
    }
}
/*===============================================================================================*/
void Problem_15()
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