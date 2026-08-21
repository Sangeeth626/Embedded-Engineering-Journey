// 1. Swapping Two numbers

/*#include<stdio.h>

int swap(int a, int b);
int main()
{
    int a, b;

    printf("Enter first number :");
    scanf("%d", &a);
    printf("Enter second number :");
    scanf("%d", &b);

    swap(a,b);

    printf("First number = %d\n", a);
    printf("Second number = %d", b);

    return 0 ;
}

int swap(int a, int b)
{
    int temp ;

    temp = a ;
    a = b ;
    b = temp ;

    return (a,b)  ;
}*/

//note : This program fails to swap numbers because it uses pass by values
//       Changes to a and b inside the swap function only affect local copies, and pointers are required to modify the original variables in main.

// 1.1 Corrected code for swapping integers

/*#include<stdio.h>

void swap(int *a, int *b);
int main()
{
    int a, b;

    printf("Enter first number :");
    scanf("%d", &a);
    printf("Enter second number :");
    scanf("%d", &b);

    swap(&a,&b);                     // Pass addresses

    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0 ;
}

void swap(int *a, int *b)
{
    int temp ;

    temp = *a ;
    *a = *b ;
    *b = temp ;
}*/





