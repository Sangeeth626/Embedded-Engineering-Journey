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

/*#include<stdio.h>

void print_binary(unsigned char value);
int main()
{
    unsigned char value = 5 ;
    int bit ;                                      // earlier i used unsigned char and for scanf the format specifier for that if %hhu , But my MinW environment is older , so compiler's scanf implementation doesn't understand the hh length modifier.

    printf("\nValue before Set : %d\n", value);
    print_binary(value);

    printf("\nBefore scanf:\n");
    printf("value = %d\n", value);

    printf("Set Bit Position : ");
    scanf("%d", &bit);      // note : earlier we use scanf("%hhu", &bit); ,  format specifier of unsigned char is %hhu , look teble for more details

    printf("After scanf:\n");
    printf("bit   = %d\n", bit);
    printf("value = %d\n", value);

    if(bit< 0 || bit>7)              // note : bit is  unsigned char , An unsigned type cannot represent negative values , so bit < 0 condition is always false so we dont need the condition
    {
        printf("Invalid position\n");
        return 0 ;
    }

    value |= (1 << bit) ;

    printf("\nValue after Set  : %d\n", value);
    print_binary(value);


    return 0 ;
}

void print_binary(unsigned char value)
{
    printf("Binary of value  : ");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (value >> i) & 1);
    }
    printf("\n");
}
// note : For checking warning :
//          gcc -Wall -Wextra -std=c11 19_Bit_Manipulation.c -o 19_Bit_Manipulation.exe
*/


// 4. CLEAR Bit 3

/*#include<stdio.h>

void print_binary(unsigned char value);

int main()
{
    unsigned char value = 13 ;
    int bit ;

    printf("Value before clear : %d\n", value);
    print_binary(value);

    value &= ~(1<<3);

    printf("Value after clear  : %d\n", value);
    print_binary(value);

    return 0 ;
}

void print_binary(unsigned char value)
{
    printf("Binary of value    : ");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (value >> i) & 1) ;
    }
    printf("\n");
}*/

// 4.1 Now let's make your CLEAR operation reusable

/*#include<stdio.h>

void print_binary(unsigned char value);

int main()
{
    unsigned char value = 13 ;
    int bit ;

    printf("\nValue before clear : %d\n", value);
    print_binary(value);

    printf("\nEnter the bit position to be cleared : ");
    scanf("%d", &bit);
    if(bit<0 || bit>7)
    {
        printf("Invalid bit position\n");
        return 0 ;
    }

    value &= ~(1<<bit);

    printf("\nValue after clear  : %d\n", value);
    print_binary(value);

    return 0 ;
}

void print_binary(unsigned char value)
{
    printf("Binary of value    : ");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (value >> i) & 1) ;
    }
    printf("\n");
}*/


// 5. TOGGLE BIT 

/*#include<stdio.h>

void print_binary(unsigned char value);

int main()
{
    unsigned char value = 13 ;
    int bit ;

    printf("Value before toggle : %d\n", value);
    print_binary(value);

    printf("\nEnter the bit position to be toggled : ");
    scanf("%d", &bit);
    if(bit<0 || bit >7)
    {
        printf("Invalid bit position\n");
        return 0 ;
    }

    value ^= (1 << bit) ;
//    value ^= (1 << bit) ;

    printf("\nValue after toggle : %d\n", value);
    print_binary(value);
    return 0 ;
}

void print_binary(unsigned char value)
{
    printf("Binary of value  : ");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (value >> i) & 1);
    }
    printf("\n");
}*/



/*-------------------------- BIT FIELD -----------------------------*/


// 6. Calculating mask and Bit field , for given start_bit and width

/*#include<stdio.h>

void print_binary(unsigned char value);
void print_hexadecimal(unsigned char value);

int main()
{
    unsigned char value = 0 ;
    int start_bit , width , mask , field;

    printf("Value : %d\n", value);
    print_binary(value);
    print_hexadecimal(value);
    printf("\n");

    printf("Enter the start_bit : ");
    scanf("%d", &start_bit);
    printf("Enter the width     : ");
    scanf("%d", &width);
    printf("\n");

    if(start_bit < 0)
    {
        printf("Invalid start_bit\n!");
        return 0 ;
    }

    if(width <= 0)
    {
        printf("Invalid width!\n");
        return 0 ;
    }

    if((start_bit + width) > 8)
    {
        printf("Invalid field range!\n");
        printf("It is 8-bit register, so the sum of start_bit and width should ber less than 8!\n");
        return 0 ;
    }

    mask = ((1<<width) - 1) << start_bit ;
    printf("Mask : %d\n", mask);
    print_binary(mask);
    print_hexadecimal(mask);
    printf("\n");

    field = (value & mask) >> start_bit ;
    printf("Field : %d\n", field);
    print_binary(field);
    print_hexadecimal(field);
    printf("\n");

    return 0 ;
}

void print_binary(unsigned char value)
{
    printf("Binary : 0b");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (value>>i)&1);
    }
    printf("\n");
}

void print_hexadecimal(unsigned char value)
{
    int temp;
    int hex[2] ;

    printf("Hexadecimal : 0x");

    if(value == 0)
    {
        printf("0\n");
        return;
    }

    int i = 0 ;
    while(value!=0)
    {
        temp  = value % 16 ;
        hex[i] = temp ;
        value = value/16 ;

        i++ ;
    }

    for(i=i-1  ; i>=0 ; i--)
    {
        if(hex[i] == 10)
        {
            printf("A");
        }
        else if(hex[i] == 11)
        {
            printf("B");
        }
        else if(hex[i] == 12)
        {
            printf("C");
        }
        else if(hex[i] == 13)
        {
            printf("D");
        }
        else if(hex[i] == 14)
        {
            printf("E");
        }
        else if(hex[i] == 15)
        {
            printf("F");
        }
        else
        {
            printf("%d", hex[i]);
        }
    }

    printf("\n");
}*/

// 6.1 Decimal to Hexadecimal using Nibble method 

/*#include<stdio.h>

void print_binary(unsigned char value);
void print_hexadecimal(unsigned char value);
int main()
{
    unsigned char value ;

    printf("Ente a value : ");
    scanf("%d",&value);
    if(value < 0 || value > 255)
    {
        printf("Invalid value\n");
        return 0;
    }

    print_binary(value);
    print_hexadecimal(value);

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
}

void print_hexadecimal(unsigned char value)
{
    char high_nibble, low_nibble;

    high_nibble = (value>>4) & 0x0F ;
    low_nibble  = value & 0x0F ;

    printf("\nHigh nibble : %d\n", high_nibble);
    printf("Low  nibble : %d\n", low_nibble);
    printf("Hexadecimal : ");

    if((high_nibble) < 10)
    {
        printf("%c", '0' + high_nibble);
    }
    else
    {
        printf("%c", 'A' + (high_nibble - 10));
    }

    if((low_nibble) < 10)
    {
        printf("%c", '0' + low_nibble);
    }
    else
    {
        printf("%c", 'A' + (low_nibble - 10));
    }
}*/



// 7. FIELD INSERTION / MODIFICATION

#include<stdio.h>

void print_binary(unsigned char register_value);
void print_hexadecimal(unsigned char register_value);

int main()
{
    int register_value ;                              // Here i use int data type intead of unsigned because mu MinGW GCC is older version the dosent contain format specifier %hhu , so i used int datatype and validate the limit just like unsigned char 0-255 
    int start_bit , width , new_field, mask ;

    printf("Enter the register value : ");
    scanf("%d", &register_value);
    if(register_value < 0 || register_value > 255)
    {
        printf("Invalid register value!\n");
        return 0 ;
    }
    print_binary(register_value);

// START BIT
    printf("Enter the start bit : ");
    scanf("%d", &start_bit);
    if(start_bit < 0 || start_bit > 7)
    {
        printf("Invalid start bit!\n");
        printf("Vaid range : 0 to 7 for 8-bit register\n");
        return 0 ;
    }

// WIDTH
    printf("Enter the width : ");
    scanf("%d", &width);  
    if(width <= 0 || width > 8)  
    {
        printf("Invalid width!\n");
        printf("Valid range : 1 to 8 for 8-bit register\n");
        return 0 ;
    }

// START BIT + WIDTH CONDITION
    if(start_bit + width > 8 )
    {
        printf("Invalid field!\n");
        printf("It is 8-bit regiter, So sum of start bit and width should not be greater then 8.\n");
        return 0 ;
    }

// NEW FIELD
    printf("Enter the new field : ");
    scanf("%d", &new_field);
    if(new_field < 0 || new_field > ((1 << width) - 1))
    {
        printf("Invalid new field value!\n");
        printf("Valid range is 0 to %d\n", (1 << width) - 1);
        return 0;
    }

// CREATING MASK
    mask = ((1<<width) - 1) << start_bit;
    printf("\nMask \n");
    print_binary(mask);

// CLEAR THE REGISTER_VALUE    
    register_value &= ~mask ;
    printf("\nRegister value after clear \n");
    print_binary(register_value);

// MODIFIED REGISTER   
    register_value |= (new_field << start_bit) ;
    printf("\nRegiser value after modification \n");
    print_binary(register_value);
    printf("Decimal : %d\n", register_value);
    print_hexadecimal(register_value);

    return 0 ;
}

void print_binary(unsigned char register_value)
{
    printf("Binary : 0b");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (register_value>>i)&1);
    }
    printf("\n");
}

void print_hexadecimal(unsigned char register_value)
{
    int high_nibble, low_nibble ;

    high_nibble = (register_value >> 4) & 0x0F ;
    low_nibble = register_value & 0x0F ;

    printf("Hexadecimal : 0x");
    if(high_nibble < 10)
    {
        printf("%c", '0' + high_nibble);
    }
    else
    {
        printf("%c", 'A' + (high_nibble - 10));
    }

    if(low_nibble < 10)
    {
        printf("%c", '0' + low_nibble);
    }
    else
    {
        printf("%c", 'A' + (low_nibble - 10));
    }
}