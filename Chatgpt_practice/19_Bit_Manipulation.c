/*------------------------------ READING BITS  ----------------------------------*/


// 1. Bitwise AND (&)

/*#include<stdio.h>
int main()
{
    unsigned char a = 5 ;
    unsigned char b = 3 ;

    printf("a & b = %d\n", a&b) ;

    return 0 ;
}*/

// 1.1 Using loop

/*#include<stdio.h>
int main()
{
    unsigned char a=5 ;

    for(int i=0 ; i<a ; i++)
    {
        printf("%d & %d = %d\n", a, i, a&i);
    }

    return 0 ;
}*/


// 2.  Understanding Bit Checking (Bit 0 , Bit 1 , Bit 2 , Bit 3)

/*#include<stdio.h>
int main()
{
    unsigned char value = 5 ;
    unsigned char mask0 = 0b00000001 , mask1 = 0b00000010 , mask2 = 0b00000100 , mask3 = 0b00001000 ;

    printf("value[%d] & mask0[%d] = %d\n", value, mask0, value & mask0);
    printf("value[%d] & mask1[%d] = %d\n", value, mask1, value & mask1);
    printf("value[%d] & mask2[%d] = %d\n", value, mask2, value & mask2);
    printf("value[%d] & mask3[%d] = %d\n", value, mask3, value & mask3);

    return 0 ;
}*/

// 2.1 Bit Checking (Bit 0 , Bit 1 , Bit 2 , Bit 3)

/*#include<stdio.h>
int main()
{
    unsigned char value = 5 ;
    unsigned char mask0 = 0b00000001 , mask1 = 0b00000010 , mask2 = 0b00000100 , mask3 = 0b00001000 ;

    if(value & mask0)
    {
        printf("Bit 0 = ON\n");
    }
    else
    {
        printf("Bit 0 = OFF\n");
    }

    if(value & mask1)
    {
        printf("Bit 1 = ON\n");
    }
    else
    {
        printf("Bit 1 = OFF\n");
    }

        if(value & mask2)
    {
        printf("Bit 2 = ON\n");
    }
    else
    {
        printf("Bit 2 = OFF\n");
    }

        if(value & mask3)
    {
        printf("Bit 3 = ON\n");
    }
    else
    {
        printf("Bit 3 = OFF\n");
    }
    return 0 ;
}*/

// 2.2 Bit Checking using loops through array (Bit 0 , Bit 1 , Bit 2 , Bit 3)

/*#include<stdio.h>
int main()
{
    unsigned char value = 5 ;
    unsigned char mask[4] = {0b00000001 , 0b00000010 , 0b00000100 , 0b00001000} ;

    for (int i=0 ; i<=3 ; i++)
    {        
        if(value & mask[i])
        {
            printf("Bit %d = ON\n", i);
        }
        else
        {
            printf("Bit %d = OFF\n", i);
        }
    }

    return 0 ;
}*/

// 2.3 Bit Checking using loops through Left shift( 1 << n) (Bit 0 , Bit 1 , Bit 2 , Bit 3)

/*#include<stdio.h>
int main()
{
    unsigned char value = 5 ;

    for(int i=0 ; i<=3 ; i++)
    {
        if(value & (1<<i))
        {
            printf("Bit %d = ON\n", i) ;
        }
        else
        {
            printf("Bit %d = OFF\n", i) ;
        }
    }

    return 0 ;
}*/



/*-----------------------------  MODIFICATION OF BITS  -------------------------*/


// 3. SET Bit 3 

/*#include<stdio.h>

void print_binary(unsigned char value);

int main()
{
    unsigned char value = 5 ;

    printf("value before set : %d\n", value);
    print_binary(value);

    value |= (1 << 3) ;

    printf("value after set  : %d\n", value);
    print_binary(value);

    return 0 ;
}

void print_binary(unsigned char value)
{
    printf("Binary           : ");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (value >> i) & 1 ) ;
    }
    printf("\n");
}*/

// 3.1 Now let's make your SET operation reusable

