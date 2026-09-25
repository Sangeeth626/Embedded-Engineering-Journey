// 1. SET , CLEAR, TOGGLE and GETBIT

/*#include<stdio.h>

int setBit(int number , int bit_position);
int clearBit(int number , int bit_position);
int toggleBit(int numbet, int bit_position);
int getBit(int number , int bit_position);

int main()
{
    int number=9, bit_position=2 ;

    printf("Value of %d after setting %dth bit is %d\n", number, bit_position, setBit(number,bit_position)) ;

    number=9 ; bit_position=3 ;
    printf("Value of %d after clearing %dth position is %d\n",number, bit_position, clearBit(number, bit_position));

    number=9 ; bit_position=1 ;
    printf("Value of %d after toggling %dth position is %d\n",number, bit_position, toggleBit(number, bit_position));

    number=9 ; bit_position=1 ;
    printf("Getting bit of %dth positon of number %d = %d\n",bit_position, number, getBit(number, bit_position));

    return 0 ;
}

int setBit(int number , int bit_position)
{
   return number | (1<<bit_position);
}

int clearBit(int number, int bit_position)
{
    return number & ~(1<<bit_position);
}

int toggleBit(int number , int bit_position)
{
    return number ^ (1<<bit_position) ;
}

int getBit(int number, int bit_position)
{
    return number & (1<<bit_position) ;
}*/



// 2. Odd or Even using Bit Manipulation

/*#include<stdio.h>

void print_binary(unsigned char value);

int main()
{
    int reg_value = 9 ;
    int mask ;

    mask = (1<<0) ;
    printf("Mask in ") ;
    print_binary(mask);

    printf("\nRegister value before checking : %d\n", reg_value);
    print_binary(reg_value);
    reg_value &= mask ;
    printf("Register value after checking  : %d\n", reg_value);
    print_binary(reg_value);
    printf("\n");

    if(reg_value = 0)
    {
        printf("It is an odd number\n");
    }
    else if(reg_value = 1)
    {
        printf("It is an even number\n");
    }

    return 0 ;
}

void print_binary(unsigned char value) 
{
    printf("Binary :");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (value>>i)&1);
    }
    printf("\n");
}*/


// 2.1 Abstracted version

/*#include<stdio.h>
int main()
{
    int reg_value = 13 ;

    reg_value &= (1<<0) ;

    if(reg_value = 1)
    {
        printf("It is an odd number\n");
    }
    else if(reg_value = 0)
    {
        printf("It is an even number\n");
    }

    return 0 ;
}*/



