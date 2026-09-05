// 1. Write a simple C program that demonstrates the idea of a volatile variable.

// 1.1 My first try, actually it dosen't demostratre the working of volatile , it was just pass by value

/*#include<stdio.h>
int change_flag(volatile int flag);
int main()
{
    volatile int flag = 0 ;

    printf("Flag = %d\n", flag);
    flag = change_flag(flag);
    printf("Flag = %d\n", flag);

    return 0 ;
}

int change_flag(volatile int flag)
{
    flag = 1 ;
    return flag ;
}*/

// 1.2 Real demonstrate of volatile

/*#include<stdio.h>

volatile int flag = 0;      // Global variable
void set_flag(void);  

int main()
{
    printf("Waiting for flag....\n");

    set_flag();

    while(flag == 0)
    {
        // wait
    }

    printf("Flag changed\n");
    
    return 0 ;
}

void set_flag(void)
{
    flag = 1 ;
}*/


// 1.3 The problem was that flag was already 1 before the loop started.
//     This time, we're going to model the situation that volatile was designed for:
//     The CPU is checking a variable, while something outside the normal flow of the code changes it.           

/*#include<stdio.h>

volatile int flag = 0 ;

void set_flag(void);

int main()
{
    printf("Waiting...\n");

    while(flag == 0)
    {
        //wait
    }

    printf("Flag changed.\n");

    return 0 ;
}

void set_flag(void)
{
    flag = 1 ;
}*/



// 2. Diffrence between ordinary variable and volatile variable    

/*#include<stdio.h>

int flag = 0 ;     // fist use ordinary variable int flag=0 ;  and run using gcc -O2 -S  20_volatile.c -o 20_volatile.s command in powershell  , then use  .\20_volatile.s this commad to open  20_volatile.s in Microchip studio  or use dir 20_volatile.s this commad for details and code 20_volatile.s this command to open 20_volatile.s in VS code itself.   LATER  edit int flag=0; to volatile int flag=0; then run same command   and see the diffrence between both .s file without volatile and with volatile

void wait_flag(void);

int main()
{
    wait_flag();

    return 0 ;
}

void wait_flag(void)
{
    while(flag==0)
    {
        // wait
    }
}*/


// 3. volatile + Pointers


// 3.1 Without usig pointer :

/*#include<stdio.h>

void print_hexadecimal(unsigned char register_value);
void print_binary(unsigned char register_value);

int main()
{
    volatile unsigned int register_value = 0;
    volatile unsigned int *reg = &register_value;
    int mask, bit ;

    printf("\nInitial register value : %d\n", register_value);
    print_binary(register_value);
    print_hexadecimal(register_value);
    printf("\n");

    bit = 3 ;
    mask = (1<<bit);
    register_value |= mask ;
    printf("\nSet bit 3 :\n");
    printf("Register value : %d\n",register_value);
    print_binary(register_value);
    print_hexadecimal(register_value);
    printf("\n");

    bit = 5 ;
    mask = (1<<bit);
    register_value |= mask ;
    printf("\nSet bit 5 :\n");
    printf("Register value : %d\n", register_value);
    print_binary(register_value);
    print_hexadecimal(register_value);
    printf("\n");

    bit = 3 ;
    mask = (1<<bit);
    register_value &= ~(mask);
    printf("\nClear bit 3 :\n");
    printf("Register value : %d\n", register_value);
    print_binary(register_value);
    print_hexadecimal(register_value);
    printf("\n");

}

void print_hexadecimal(unsigned char register_value)
{
    int high_nibbele, low_nibbele ;

    high_nibbele = (register_value>>4) & 0x0F ;
    low_nibbele  = (register_value) & 0x0F ;

    printf("Hexadecimal : 0x");
    if(high_nibbele < 10)
    {
        printf("%c", '0' + high_nibbele);
    }
    else
    {
        printf("%c", 'A' + (high_nibbele - 10));
    }

    if(low_nibbele < 10)
    {
        printf("%c", '0' + low_nibbele);
    }
    else
    {
        printf("%c", 'A' + (low_nibbele - 10));
    }
}

void print_binary(unsigned char register_value)
{
    printf("Binary : 0b");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (register_value>>i)&1);
    }
    printf("\n");
}*/

// 3.1 Usig pointer :

/*#include<stdio.h>

void print_hexadecimal(volatile unsigned char *reg);
void print_binary(volatile unsigned char *reg);

int main()
{
    volatile unsigned char register_value = 0;
    volatile unsigned char *reg = &register_value;
    int mask, bit ;

    printf("\nInitial register value : %d\n", *reg);
    print_binary(reg);
    print_hexadecimal(reg);
    printf("\n");

    bit = 3 ;
    mask = (1<<bit);
    *reg |= mask ;
    printf("\nSet bit 3 :\n");
    printf("Register value : %d\n",*reg);
    print_binary(reg);
    print_hexadecimal(reg);
    printf("\n");

    bit = 5 ;
    mask = (1<<bit);
    *reg |= mask ;
    printf("\nSet bit 5 :\n");
    printf("Register value : %d\n", *reg);
    print_binary(reg);
    print_hexadecimal(reg);
    printf("\n");

    bit = 3 ;
    mask = (1<<bit);
    *reg &= ~(mask);
    printf("\nClear bit 3 :\n");
    printf("Register value : %d\n", *reg);
    print_binary(reg);
    print_hexadecimal(reg);
    printf("\n");

}

void print_hexadecimal(volatile unsigned char *reg)
{
    int high_nibbele, low_nibbele ;

    high_nibbele = (*reg>>4) & 0x0F ;
    low_nibbele  = (*reg) & 0x0F ;

    printf("Hexadecimal : 0x");
    if(high_nibbele < 10)
    {
        printf("%c", '0' + high_nibbele);
    }
    else
    {
        printf("%c", 'A' + (high_nibbele - 10));
    }

    if(low_nibbele < 10)
    {
        printf("%c", '0' + low_nibbele);
    }
    else
    {
        printf("%c", 'A' + (low_nibbele - 10));
    }
}

void print_binary(volatile unsigned char *reg)
{
    printf("Binary : 0b");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (*reg>>i)&1);
    }
    printf("\n");
}*/

// 3.2 Understanding volatile data and volatile pointer

/*#include<stdio.h>
int main()
{
    int a=5, b=10 ;
    volatile int *p1 = &a ;
    int *volatile p2 = &b ;
    volatile int *volatile p3 =&a ;

    printf("Case 1 (volatile data)             : %d\n", *p1);
    printf("Case 2 (volatile pointer)          : %d\n", *p2);
    printf("Case 3 (volatile data and pointer) : %d\n", *p3);

    return 0 ;
}*/

// 3.3 const + volatile

/*#include<stdio.h>
int main()
{
    int a=5, b=10, c=15;
    const volatile int *p1 = &a;
    volatile int *const p2 = &b;
    const volatile int *const p3 = &c;

    printf("Dereferancing p1 (before) : %d\n", *p1);
//    *p1 = 20 ;  // note : we cannot modify the data through software because there is const int , also the data may change unexpetedely through hardware or interrupt because there is volatile int
    p1 = &b ;     // note : Here pointer is not a constant so we can able to modify pointer
    printf("Dereferancing p1 (after)  : %d\n\n", *p1);

    printf("Dereferencing p2 (before) : %d\n", *p2);
    *p2 = 25 ;     // note : Here pointer is const , but data is not const, so we can able to change the data through pointer and also data is volatile, so data may change unexpetedely through hardware or interrupt because there is volatile int
//    p2 = &a ;    // note : Pointer is const , therefore cannot modify address value inside pointer
    printf("Dereferencing p2 (after)  : %d\n\n", *p2);

    printf("Dereferancing p3 (before) : %d\n", *p3);
//   *p3 = 30 ;    // note : cannot able to modify neither data nor pointer , but data may change change unexpetedely through hardware or interrupt because there is volatile int
//    p3 = &a ;
    printf("Dereferancing p3 (after)  : %d\n", *p3);
    
    return 0 ;    
}*/

