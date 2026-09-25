// 1. SET , CLEAR , TOGGLE , READ and MULTI-bit field

/*#include<stdio.h>
void print_binary(unsigned int REG) ;
void print_hexadecimal(unsigned int REG) ;

int main()
{
    unsigned int REG = 0, mask, bit_value;
    int bit_position = 5 ;
    int width = 1 ;


    mask = ((1U << width) - 1U) << bit_position ;
    printf("\nMASK:\n");
    printf("Decimal : %d\n", mask);
    print_binary(mask) ;
    print_hexadecimal(mask); 
    printf("\n");

    REG |= mask ;
    printf("After SET:\n");
    printf("Decimal : %d\n", REG);
    print_binary(REG) ;
    print_hexadecimal(REG);
    printf("\n");

    REG &= ~(mask) ;
    printf("After CLEAR:\n");
    printf("Decimal : %d\n", REG);
    print_binary(REG) ;
    print_hexadecimal(REG);
    printf("\n");

    REG ^= mask ;
    printf("After TOGGLE:\n");
    printf("Decimal : %d\n", REG);
    print_binary(REG) ;
    print_hexadecimal(REG);
    printf("\n");

    bit_value = (REG >> 5) & 1U ;
    printf("READING bit:\n");
    printf("Decimal : %d\n", bit_value);
    print_binary(bit_value) ;
    print_hexadecimal(bit_value);
    printf("\n");

    bit_position = 4 ;
    width = 4 ;

    mask = ((1U<<width) - 1U ) << bit_position ;
    printf("MASK:\n");
    printf("Decimal : %d\n", mask);
    print_binary(mask) ;
    print_hexadecimal(mask); 
    printf("\n");

    REG &= ~(mask);
    printf("After CLEAR :\n");
    printf("Decimal : %d\n", REG);
    print_binary(REG);
    print_hexadecimal(REG);
    printf("\n");

    REG |= (5U << bit_position);
    printf("MODE 5 :\n");
    printf("Decimal : %d\n", REG);
    print_binary(REG);
    print_hexadecimal(REG);
    printf("\n");

    return 0; 
}

void print_binary(unsigned int REG)
{
    printf("Binary : ");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (REG>>i)&1) ;
    }
    printf("\n");
}

void print_hexadecimal(unsigned int REG)
{
    char high_nibble, low_nibble ;

    high_nibble = (REG>>4) & 0x0F ;
    low_nibble = REG & 0x0F ;

    printf("Hexadecimal : ");
    if(high_nibble < 10)
    {
        printf("%c", '0' + high_nibble) ;
    }
    else if(high_nibble >= 10)
    {
        printf("%c", 'A' + (high_nibble - 10)) ;
    }

    if(low_nibble < 10)
    {
        printf("%c", '0' + low_nibble) ;
    }
    else if(low_nibble >= 10)
    {
        printf("%c", 'A' + (low_nibble - 10)) ;
    }
    printf("\n");
}*/




// 2. Register map  ->  GPIO5 Configuration(MODE)  ->  Mask  ->  BSRR(for controlling output )
/*
A. Configure GPIO5 as output
B. Set GPIO5 HIGH using BSRR
C. Set GPIO5 LOW using BSRR 
*/

/*#include<stdio.h>

void print_binary(unsigned int value) ;

typedef struct
{
    volatile unsigned int MODER ;      // +0x00
    volatile unsigned int OTYPER ;     // +0x04
    volatile unsigned int OSPEEDR ;    // +0x08
    volatile unsigned int PUPDR ;      // +0x0C
    volatile unsigned int IDR ;        // +0x10
    volatile unsigned int ODR ;        // +0x14
    volatile unsigned int BSRR ;       // +0x18
    volatile unsigned int LCKR ;       // +0x1C
} GPIO_TypeDef ;

#define GPIOA_BASE 0x40020000
#define GPIOA ((GPIO_TypeDef *)GPIOA_BASE)

#define GPIO5_MODE_MASK   (3U << 10)
#define GPIO5_MODE_OUTPUT (1U << 10)

#define GPIO5_BSRR_HIGH (1U << 5)
#define GPIO5_BSRR_LOW  (1U << (5+16))

int main()
{
    // A. Congigure GPIO5 as OUTPUT
    GPIOA->MODER = (GPIOA->MODER & ~(GPIO5_MODE_MASK) )  |  GPIO5_MODE_OUTPUT ;
//    printf("After configuring GPIO5 as OUTPUT : %d\n", GPIOA->MODER);
//    printf("After configuring GPIO5 as OUTPUT : %X\n", GPIOA->MODER);
//    print_binary(GPIOA->MODER);                  // note : We cannot print it because  PC does not have an STM32 GPIO peripheral at: 0x40020000 Therefore, dereferencing: (GPIO_TypeDef *)0x40020000 on Windows/Linux normally attempts to access an invalid/unmapped address and can cause an access violation/segmentation fault

    // B. Set GPIO5 HIGH using BSRR
    GPIOA->BSRR  = GPIO5_BSRR_HIGH ;
//    printf("After Setting GPIO5 HIGH : %d\n", GPIOA->BSRR);
//    printf("After Setting GPIO5 HIGH : %X\n", GPIOA->BSRR);
//    print_binary(GPIOA->BSRR);

    // C. Set GPIO5 LOW using BSRR
    GPIOA->BSRR  = GPIO5_BSRR_LOW ;
//    printf("After Setting GPIO5 LOW : %d\n", GPIOA->BSRR);
//    printf("After Setting GPIO5 LOW : %X\n", GPIOA->BSRR);
//    print_binary(GPIOA->BSRR);

    return 0 ;
}

void print_binary(unsigned int value)
{
    printf("Binary : ");
    for(int i=31 ; i>=0 ; i--)
    {
        printf("%d", (value>>i)&1);
    }
    printf("\n");
}*/




