// 1. Write a program to print bigger number
/*#include<stdio.h>
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
}*/



// 2. Program to print a whether a number is odd or even
/*#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num == 0)
    
    if((num & (1U<<0)) == 0)       // checking the LSB bit is 0 or 1
    {
        printf("%d is an even number", num);
    }
    else if((num & (1U<<0)) == 1)
    {
        printf("%d is an odd number", num);
    }

    return 0 ;
}*/



// 3. Print wheather any negative number is entered or not 
/*#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num<0)
    {
        printf("%d is a negative number\n", num);
        num = -num ;
    }
    printf("Number is %d\n", num);
    return 0 ;
}*/



// 4. Program to find the quotient and reminder 
/*#include<stdio.h>
int main()
{
    int x, y, quo, rem ;
    printf("Enter two numbers : ");
    scanf("%d%d", &x, &y);

    if(y != 0)
    {
        quo = (float)x/y;
        rem = x%y ;
        printf("Quotient = %d\nRemainder = %d\n", quo, rem);
    }
    else
    {
        printf("Divide by zero error\n");
    }

    return 0 ;
}*/



// 5. Program to find biggest number from three number 
/*#include<stdio.h>
int main()
{
    int x, y, z, big;
    printf("Enter three numbers : ");
    scanf("%d%d%d", &x, &y, &z);
    
    big = (x>y && x>z) ? x : (y>x && y>z) ? y : (z>x && z>y) ? z : x;
    printf("Biggest number is %d", big);

    return 0 ;
}*/



// 6. Program to find wheather a year is leap year or not 
/*#include<stdio.h>
int main()
{
    int year ;
    printf("Enter the year : ");
    scanf("%d", &year);

    if(((year%100 == 0) || (year%4 == 0) && (year%400 == 0)))
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }

    return 0;
}*/



// 7. Program to find the grade of student when the mark of 4 subject are given
/*#include<stdio.h>
#define SIZE 10

int main()
{
    float arr[SIZE] , total=0, total_persentage;
    int limit , overall_total;
    char grade ;
    printf("Enter the number of subject : ");
    scanf("%d", &limit) ;

    printf("Enter overall total mark : ");
    scanf("%d", &overall_total);

    printf("Enter the marks : ") ;
    for(int i=0 ; i<limit ; i++)
    {
        scanf("%f", &arr[i]) ;
    }

    for(int i=0 ; i<limit ; i++)
    {
        total += arr[i] ;
    } 

    printf("\nTotal marks obtained      = %.2f\n", total);
    total_persentage = (total/overall_total)*100 ;
    printf("Total persentage obtained = %.2f\n", total_persentage);

    if(total_persentage >= 90 && total_persentage <= 100) 
    {
        grade = 'S';
    }
    else if(total_persentage >= 80 && total_persentage <= 89)
    {
       grade = 'A';
    }
    else if(total_persentage >= 70 && total_persentage <= 79)
    {
        grade = 'B';
    }
    else if(total_persentage >= 60 && total_persentage <= 69)
    {
        grade = 'C';
    }
    else if(total_persentage >= 50 && total_persentage <= 59)
    {
        grade = 'D';
    }
    else if(total_persentage >= 40 && total_persentage <= 49)
    {
        grade = 'P';
    }
    else
    {
        grade = 'F';
    }
    
    printf("Grade = %c\n", grade);

    return 0 ;
}*/



// 8. Program to print number 1 to 10 using while loop
/*#include<stdio.h>
int main()
{
    int i=1;
    while(i <= 10)
    {
        printf("%d ", i);
        i++ ;
    }
    return 0 ;
}*/



// 9. Program to print the number in reverse order and with a diffrence of 2 
/*#include<stdio.h>
int main()
{
    int i=10;
    while(i>=1)
    {
        printf("%d ", i);
        i = i-2 ;
    }
}*/



// 10. Program to print the sum of digit of any number
/*#include<stdio.h>
int main()
{
    int n, digit, sum=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    while(n != 0)
    {
        digit = n%10 ;
        sum += digit ;
        n = n/10 ;
    }

    printf("Sum of digit = %d\n", sum);
    return 0 ;
}*/



// 11. Program to find the product of digit of any number 
/*#include<stdio.h>
int main()
{
    int n, digit, prod=1;
    printf("Enter a number : ");
    scanf("%d", &n);

    while(n!=0)
    {
        digit = n%10 ;
        prod *= digit ;
        n = n/10 ;
    }

    printf("Product of the number = %d", prod);
    return 0 ;
}*/



// 12. Program to find factorial of any number 
/*#include<stdio.h>
int main()
{
    int n, fact=1, i;
    printf("Enter the number : ");
    scanf("%d", &n);

    for(i=1 ; i<=n ; i++)
    {
        fact *= i ;
    }

    printf("%d! = %d\n", n, fact);
    return 0 ;
}*/



// 13. Program to convert binary number to decimal number ;
/*#include<stdio.h>
int main()
{
    int n, rem, d , dec=0, j=1;
    printf("Enter the number in binary : ");
    scanf("%d", &n);

    while(n != 0)
    {
        rem = n%10 ;
        d = rem * j ;
        dec += d ;
        j *= 2 ; 
        n = n/10 ;
    }

    printf("Decimal : %d\n", dec);
    return 0 ;
}*/


// 13.1 Write the program to find the power of a number without using library 
/*#include<stdio.h>

int power(int *n, int *p) ;

int main()
{
    int n , p , pow, temp ;
    printf("Enter a number  : ");
    scanf("%d", &n);
    printf("Enter the power : ");
    scanf("%d", &p);

    temp = n ;

    pow = power(&n, &p) ;

    printf("%d^%d = %d\n", temp, p, pow);

    return 0 ;
}


int power(int *n, int *p)
{
    int temp ;
    temp = *n ; 

    for(int i=1 ; i < *p ; i++)
    {
        *n *= temp ;
    }
    return *n ;
}*/



// 17. Program to print 1 to 10 using for loop
/*#include<stdio.h>
int main()
{
    for(int i=1 ; i<=10 ; i++)
    {
        printf("%d ", i);
    }
    return 0 ;
} */



// 18. Program to print number in reverse order with diffrence 2
/*#include<stdio.h>
int main()
{
    for(int i=10 ; i>=1 ; i-=2)
    {
        printf("%d ", i);
    }
    return 0 ;
}*/



// 19. Multiply two positive numbers without using * operation 
/*#include<stdio.h>
int main()
{
    int a, b, sum=0;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    for(int i=1 ; i<=b ; i++)
    {
        sum += a ; 
    }
    printf("%d * %d = %d\n", a, b, sum);
    return 0 ;
}*/



// 20. Find sum of series upto n terms 
/*#include<stdio.h>
int main()
{
    int n, sum=0; 
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=0 ; i<=n ; i++)
    {
        sum += i ;
    }
    printf("Sum of %d numbers : %d", n, sum);
    return 0 ;
}*/


// 21. Program to generate fibonacci series
/*#include<stdio.h>
int main()
{
    int n, n1, n2, n3 ; 
    printf("Enter thr number : ");
    scanf("%d", &n);

    n1 = 0 ; 
    n2 = 1 ; 
    printf("%d ", n1);
    printf("%d ", n2);

    for(int i=0 ; i<=n ; i++)
    {
        n3 = n1 + n2 ;
        printf("%d ", n3) ;
        n1 = n2 ;
        n2 = n3 ; 
    }
    return 0 ;
}*/



// 22. Sum of digit of any number 
/*#include<stdio.h>
int main()
{
    int n, digit, sum=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for( ; n!=0 ; n=n/10)
    {
        digit = n%10 ;
        sum += digit ;
    }
    printf("Sum of digit = %d\n", sum);
    return 0 ;
}*/



// 23. Program to show use of comma operator in for loop
/*#include<stdio.h>
int main()
{
    int i, j ;
    for(i=0, j=10 ; i<=j ; i++, j--)
    {
        printf("i = %d\tj = %d\n", i, j) ;
    }
    return 0 ;
}*/



// 24. Program to understand nesting in for loop
/*#include<stdio.h>
int main()
{
    int i, j;
    for(i=0 ; i<=3 ; i++)
    {
        printf("i = %d\t", i);
        for(j=0 ; j<=3 ; j++)
        {
            printf("j=%d  ", j);
        }
        printf("\n");
    }
    return 0 ;
}*/



// 25. Program to print Armstrong number
