// 1. Before function and After function (Changing number)

/*#include<stdio.h>

void change(int n);

int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Before function = %d\n", n);
    change(n);
    printf("After function  = %d ", n);

    return 0 ;
}

void change(int n)
{
    n = 100 ;
}*/


// 2. Sum

/*#include<stdio.h>

void sum(int a, int b);

int main()
{
    int n1, n2, ans ;
    printf("Enter two numbers :");
    scanf("%d%d", &n1, &n2);

    printf("Before function n1 = %d\n", n1);
    sum(n1,n2) ;
    printf("After function n1 = %d\n", n1);

    return 0;
}

void sum(int a, int b)
{
    a = a+b ;
    printf("Inside function Sum = %d\n", a);
}*/


// 3. Change a number

/*#include<stdio.h>

void change(int a);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Before function (n) = %d\n", n);
    change(n);
    printf("After functin (n) = %d\n", n);

    return 0 ;
}

void change(int a)
{
    a = 100 ;
    printf("Inside function (copy of n) = %d\n", a);
}*/


// 4. Swapping number

/*#include<stdio.h>

void swap(int a, int b);

int main()
{
    int n1, n2, temp ;

    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);

    printf("\nBefore swap:\n");
    printf("First number (n1) = %d\n", n1);
    printf("Second number (n2) = %d\n", n2);
    swap(n1, n2);
    printf("\nAfter swap:\n");
    printf("First number (n1) = %d\n", n1);
    printf("Second number (n2) = %d\n", n2);

    return 0 ;
}

void swap(int a, int b)
{
    int temp ;

    temp = a ;
    a = b ;
    b = temp ;

    printf("\nInside function after swap:\n");
    printf("First number (copy of n1) = %d\n", a);
    printf("Second number (copy of n2) = %d\n", b);
}*/

//note : In Pass by Value, changes made to the function's parameters do not affect the original arguments.

// note :"I successfully swapped the numbers inside the function... so why didn't the original numbers swap?"
//       That question will naturally lead us toward pointers and modifying original variables.

