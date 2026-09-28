// 1. Write a program to print bigger number
#include<stdio.h>
int main()
{
    int a, b ;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    if(a>b)
    {
        printf("Bigger number = %d\n", a);
    }
    else if(a<b)
    {
        printf("Bigger number = %d\n", b);
    }
    else
    {
        printf("Both number are equal");
    }

    return 0 ;
}