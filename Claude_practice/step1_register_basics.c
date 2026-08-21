//  ********** Brush-up Funtion and Pointers **********

// 0.1 Basics of function (Even and odd number)

/*#include <stdio.h>
 
int is_even(int n);

int main()
{
    int n, result ;
    printf("Enter the number : ");
    scanf("%d", &n);

    result = is_even(n) ;

    if(result==1)
    {
        printf("%d is an even number", n);
    }
    else
    {
        printf("%d is an odd number", n);
    }

    return 0 ;
}
int is_even(int n)
{
    if(n%2 == 0)
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}*/

// 0.2 Basics of function (Count Digit)

/*#include<stdio.h>

int count_digit(int n);

int main()
{
    int n, result ;

    printf("Enter a number : ");
    scanf("%d", &n);

    result = count_digit(n);

    printf("Count = %d", result);

    return 0 ;
}

int count_digit(int n)
{
    int count ;

    count = 0 ;
    while(n!=0)
    {
        n%10 ;
        n = n/10 ;
        count++ ;
    }
    
    return count ;
}*/

// 0.3 Basics of function ( Double the number (trying without pointer and with pointer))

/*#include<stdio.h>

void try_double(int x) ;
void real_double(int *x) ;

int main()
{
    int x, result ;
    printf("Enter the number  x : ");
    scanf("%d", &x);

    try_double(x) ;
    printf("Double of x (without pointer) = %d\n", x);

    real_double(&x) ;
    printf("Double of x (with pointer)    = %d", x);

    return 0 ;
}

// Old way: changes are LOST once the function ends
void try_double(int x)
{
    x = x*2 ;         // Only changes the LOCAL copy
}

// New way: changes the REAL variable, using a pointer
void real_double(int *x)
{
    *x = *x * 2 ;     // Goes to the actual address and changes it there
}
*/

// 0.4 Basics of function ( min and max of three number)

/*#include<stdio.h>

void get_min_max(int a, int b, int c, int *min, int *max);

int main()
{
    int a, b, c, min, max ;

    printf("Enter three numbers a, b, c : ");
    scanf("%d%d%d", &a, &b, &c);

    get_min_max(a, b , c, &min, &max);
    
    printf("Greater number = %d\n", max);
    printf("Smaller number = %d", min);

    return 0 ;
}

// This method is lengthy
/*void get_min_max(int a, int b, int c, int *min, int *max)
{
    if(a>b && a>c)
    {
        printf("%d is greater\n", *max = a) ;

        if(b>c)
        {
            printf("%d is smaller", *min = c);
        }
        else
        {
            printf("%d is smaller", *min = b) ;
        }
    }
    else if(b>a && b>c)
    {
        printf("%d is greater\n", *max = b) ;

        if(c>a)
        {
            printf("%d is smaller", *min = a);
        }
        else
        {
            printf("%d is smaller", *min = c) ;
        }
    }
    else if(c>a && c>b)
    {
        printf("%d is greater\n", *max = c) ;

        if(a>b)
        {
            printf("%d is smaller", *min = b);
        }
        else
        {
            printf("%d is smaller", *min = a) ;
        }
    }
    else if (a==b && a>c)
    {
        printf("First and second number (%d) is greater and equal\n", *max = a);
        printf("Third number (%d) is smaller", *min = c);
    }
    else if (b==c && b>a)
    {
        printf("First and second number (%d) is greater and equal\n", *max = b);
        printf("Third number (%d) is smaller", *min = a);
    }
    else if (c==a && c>b)
    {
        printf("First and second number (%d) is greater and equal\n", *max = c);
        printf("Third number (%d) is smaller", *min = b);
    }
    else
    {
        printf("All number are equal") ;
    }
}*/
// Easy and simple method
/*void get_min_max(int a, int b, int c, int *min, int *max)
{
    *max = a ;
    if(b>*max) *max = b ;
    if(c>*max) *max = c ;

    *min = a ;
    if(b<*min) *min = b ;
    if(c<*min) *min = c ;
}*/



//  !!!!*********** REGISTER BASICS & BIT MANIPULATION ***********!!!!  

// 1. Register Basics

/*#include <stdio.h>
#include <stdint.h>

// In a REAL chip, this would be a fixed hardware address like 0x40010000.
// Here, we simulate it with a normal variable, and pretend it's "the register".
volatile uint32_t fake_led_register = 0x00000000;  // starts as all-zero (all LEDs off)

// Helper function: prints the register in binary so we can SEE what's happening
void print_register(uint32_t reg) 
{
    printf("Register value: ");
    for (int bit = 7; bit >= 0; bit--) 
    {   // just show 8 bits for simplicity
        printf("%d", (reg >> bit) & 1);
    }
    printf("  (LED0 is the rightmost bit)\n");
}

int main() 
{
    printf("--- BEFORE ---\n");
    print_register(fake_led_register);

    // This is the real syntax you'd use on actual hardware:
    // "Take a pointer to our register, and turn on bit 0"
    volatile uint32_t *led_reg_ptr = &fake_led_register;

    *led_reg_ptr = *led_reg_ptr | (1 << 0);   // turn ON bit 0 (LED0)

    printf("\n--- AFTER turning on LED0 ---\n");
    print_register(fake_led_register);

    return 0;
}*/


// 2. Shift in Bit

/*#include<stdio.h>
#include<stdint.h>

volatile uint32_t fake_led_register = 0x00000000 ;

void print_register(uint32_t reg) ;

int main()
{
    volatile uint32_t *led_reg_ptr = &fake_led_register ;

    printf("--- Before ---\n");
    print_register(fake_led_register);

    *led_reg_ptr = *led_reg_ptr | (1 << 0);
    *led_reg_ptr = *led_reg_ptr | (1 << 3) ;

    printf("\n--- After ---\n");
    print_register(fake_led_register);

    return 0 ;
}

void print_register(uint32_t reg)
{
    int bit ;
    printf("Register Value : ");
    for(bit=7 ; bit>=0 ; bit--)
    {
        printf("%d", (reg >> bit) & 1);
    }
}*/

// 2.1 Shift in bit without using pointers (but this thing will not work in real hardware)

/*#include<stdio.h>
#include<stdint.h>

void print_register(uint32_t reg) ;

int main()
{
    volatile uint32_t fake_led_register = 0x00000000 ;

    printf("--- Before ---\n");
    print_register(fake_led_register);

    fake_led_register = fake_led_register | (1 << 0);
    fake_led_register = fake_led_register | (1 << 3);

    printf("\n--- After ---\n");
    print_register(fake_led_register);

    return 0 ;
}

void print_register(uint32_t reg)
{
    int bit ;
    printf("Register Value : ");
    for(bit=7 ; bit>=0 ; bit--)
    {
        printf("%d", (reg >> bit) & 1);
    }
}*/


// 3. Creating 3 functions for SET, CLEAR and TOGGLE the bit

/*#include<stdio.h>
#include<stdint.h>

volatile uint32_t fake_led_register = 0x00000000 ;

void set_bit(volatile uint32_t *reg, int bit_number);
void clear_bit(volatile uint32_t *reg, int bit_number);
void toggle_bit(volatile uint32_t *reg, int bit_number);
void print_register(uint32_t reg);

int main()
{
    volatile uint32_t *led_reg_ptr = &fake_led_register ;

    printf("\n---- BEFORE ----\n");
    print_register(fake_led_register);

// SET
    set_bit(&fake_led_register, 0);
    set_bit(&fake_led_register, 3);
    printf("\n---- AFTER SET ----\n");
    print_register(fake_led_register);

// CLEAR
    clear_bit(&fake_led_register, 0);
    printf("\n---- AFTER CLEAR ----\n");
    print_register(fake_led_register);

// TOGGLE
    toggle_bit(&fake_led_register, 3);
    printf("\n---- AFTER TOGGLE ----\n");
    print_register(fake_led_register);

    return 0 ;
}

void print_register(uint32_t reg)
{
    int bit ;
    printf("Register Value : ");
    for(bit=7 ; bit>=0 ; bit--)
    {
        printf("%d", (reg >> bit) &1);
    }
    printf("\n");
}

void set_bit(volatile uint32_t *reg, int bit_number)
{
    *reg = *reg | (1 << bit_number);
}

void clear_bit(volatile uint32_t *reg, int bit_number)
{
    *reg = *reg & ~(1 << bit_number);
}

void toggle_bit(volatile uint32_t *reg, int bit_number)
{
    *reg = *reg ^ (1 << bit_number);
}*/