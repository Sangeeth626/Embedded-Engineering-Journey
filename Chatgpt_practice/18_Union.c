// 1. Write a program containing union {int ; float ; char} ;

/*#include<stdio.h>
#include<string.h>

typedef union
{
    int id ;
    float temperature ;
    char status[10] ;
} Data;

int main()
{
    Data data ;
    data.id = 100 ;
    data.temperature = 27.6 ;
    strcpy(data.status , "ON") ;          // note : In output you can see diffrent value for data.id and data.temperature because the union the memory is over written after each member , because in union we use single memory space
    Data *p = &data ;

    printf("data ID     : %d\n", data.id);
    printf("Temperature : %.2f\n", data.temperature);
    printf("Status      : %s\n", data.status);
//    printf("data ID     : %d\n", p->id);
//    printf("Temperature : %.2f\n", p->temperature);
//    printf("Status      : %s\n", p->status);

    printf("\n------------ MEMORY LAYOUT -----------\n");
    printf("Address of data.id          : %p\n", (void *)&p->id) ;
    printf("Address of data.temperature : %p\n", (void *)&p->temperature);
    printf("Address of data.status      : %p\n", (void *)&p->status);
    printf("Size of data.id             : %zu\n", sizeof(data.id));
    printf("Size of data.temperature    : %zu\n", sizeof(data.temperature));
    printf("Size of data.status         : %zu\n", sizeof(data.status));
    printf("Overall size of Data        : %zu\n", sizeof(data));                 // note : You can see overall size as 12 instead of 10 , this is to maintain proper alignment
    printf("Alignment of Data           : %zu\n", _Alignof(Data));

    return 0 ;
}*/


// 2. Union - Accessing Members Through a Pointer

/*#include<stdio.h>
#include<string.h>

typedef union
{
    int id ;
    float temperature ;
    char status[10] ;
} Data ;

int main()
{
    Data data ;
    Data *p = &data ;

    p->id          = 500 ;
    printf("data id     : %d\n", p->id);
    p->temperature = 36.5 ;
    printf("Temperature : %.2f\n", p->temperature);
    strcpy(data.status , "OK") ;
    printf("Status      : %s\n", p->status);

    printf("\n----------- MEMORY LAYOUT ------------\n");
    printf("Address of data             : %p\n", (void *)p);
    printf("Address of data.id          : %p\n", (void *)&p->id);
    printf("Address of data.temperature : %p\n", (void *)&p->temperature);
    printf("Address of data.status      : %p\n\n", (void *)&p->status);
    
    printf("Size of Data                : %zu bytes\n", sizeof(Data));
    printf("Size of *p                  : %zu bytes\n", sizeof(*p));
    printf("Size of p                   : %zu bytes\n", sizeof(p));
    printf("Size of data.id             : %zu bytes\n", sizeof(data.id));
    printf("Size of data.temperature    : %zu bytes\n", sizeof(data.temperature));
    printf("Size of data.status         : %zu bytes\n", sizeof(data.status));
    printf("Overall size of Data        : %zu bytes\n", sizeof(data)); 

    return 0 ;    
}*/


// 3. Union witg Different Data Representation

/*#include<stdio.h>

typedef union
{
    unsigned int value     ;
    unsigned char bytes[4] ;
} Data ;

int main()
{
    Data data ;
    data.value = 0x12345678 ;
    Data *p = &data ;

    printf("Value  : 0x%x\n", data.value) ;
    printf("Byte 0 : 0x%x\n", data.bytes[0]) ;
    printf("Byte 1 : 0x%x\n", data.bytes[1]) ;
    printf("Byte 2 : 0x%x\n", data.bytes[2]) ;
    printf("Byte 3 : 0x%x\n", data.bytes[3]) ;

    printf("\n--------- MEMORY LAYOUT---------\n") ;
    printf("Size of data       : %zu bytes\n", sizeof(data)) ;
    printf("Size of data.value : %zu bytes\n", sizeof(data.value)) ;
    printf("Size of data.bytes : %zu bytes\n\n", sizeof(data.bytes)) ;

    printf("Address of data          : %p\n", (void *)p);
    printf("Address of data.value    : %p\n", (void *)&p->value);
    printf("Address of data.bytes    : %p\n", (void *)&p->bytes);
    printf("Address of data.bytes[0] : %p\n", (void *)&p->bytes[0]);
    printf("Address of data.bytes[1] : %p\n", (void *)&p->bytes[1]);
    printf("Address of data.bytes[2] : %p\n", (void *)&p->bytes[2]);
    printf("Address of data.bytes[3] : %p\n", (void *)&p->bytes[3]);

    return 0 ;
}*/


// 4. Union + Bit Field

/*#include<stdio.h>
 
typedef struct 
{
    unsigned char enable : 1 ;
    unsigned char error  : 1 ;
    unsigned char mode   : 2 ;
    unsigned char speed  : 4 ;
} Control ;

int main()
{
    Control control ;
    control.enable = 1  ;
    control.error  = 0  ;
    control.mode   = 2  ;
    control.speed  = 10 ;

    printf("Enable = %d\n", control.enable);
    printf("Error  = %d\n", control.error);
    printf("Mode   = %d\n", control.mode);
    printf("Speed  = %d\n\n", control.speed);

    printf("Size of control    = %zu bytes\n\n", sizeof(control));

    printf("Address of control = %p\n\n", &control);
//    printf("Address of control.enabele = %p\n", &control.enable);   // note : &control.enable is impossible because enable is only a bit-field, not an independently addressable object.
    printf("Raw byte = 0x%02x\n\n", *(unsigned char *)&control) ;

    return 0 ;
}*/

// 4.1 Union + Bit field ("one memory location, multiple interpretations")

/*#include<stdio.h>

typedef union
{
    unsigned char value ;

    struct
    {
        unsigned char enable : 1 ;
        unsigned char error  : 1 ;
        unsigned char mode   : 2 ;
        unsigned char speed  : 4 ;
    } bits ;

} Register ;

void print_binary(unsigned char value) ;

int main()
{
    Register reg ;
    reg.value = 0xA9 ;

    printf("Register Value (hex): 0x%02x\n\n", reg.value) ;

    printf("Enable : %d\n", reg.bits.enable);
    printf("Error  : %d\n", reg.bits.error);
    printf("Mode   : %d\n", reg.bits.mode);
    printf("Speed  : %d\n\n", reg.bits.speed);

    printf("Size of reg       : %zu bytes\n", sizeof(reg));
    printf("Size of reg.value : %zu bytes\n", sizeof(reg.value));
    printf("Size of reg.bits  : %zu bytes\n\n", sizeof(reg.bits));

    printf("Address of reg       : %p\n", (void *)&reg);
    printf("Address of reg.value : %p\n", (void *)&reg.value);
    printf("Address of reg.bits  : %p\n\n", (void *)&reg.bits);

    reg.bits.enable = 0 ;
    printf("Register Value (hex) : 0x%02x\n", reg.value);

    printf("Register Value (bin) : ");
    print_binary(reg.value);
    printf("\n");

    return 0 ;
}

void print_binary(unsigned char value)
{
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (value >> i) & 1);
    }
}*/


