// 1. displayBits

#include<stdio.h>
void displayBits(int x) ;
int main()
{
    int a, b ;

    printf("Enter values for a and b in hexadecimal : ");
    scanf("%x %x",&a, &b);

    printf("a   = %X\n", a);      displayBits(a) ;
    printf("b   = %X\n", b);      displayBits(b) ;
    printf("a&b = %X\n", a&b);    displayBits(a&b) ;
    printf("a|b = %X\n", a|b);    displayBits(a|b) ;
    printf("~a  = %X\n", ~a);     displayBits(~a) ;
    printf("~b  = %X\n", ~b);     displayBits(~b) ;

    return 0 ;
}

void displayBits(int x)
{
    printf("Binary : ");
    for(int i=31 ; i>=0 ; i--)
    {
        printf("%d", (x>>i)&1);
    }
    printf("\n\n");
}