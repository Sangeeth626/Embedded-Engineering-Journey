// 1. 
/*#include<stdio.h>
int main()
{
    int a=-3 ;
    a = -a-a+!a ;
    printf("%d\n", a);
    return 0 ;
}*/



// 2. 
/*#include<stdio.h>
int main()
{
    int a=2, b=1, c, d ;
    c = a<b ;
    d = (a>b) && (c<b) ;
    printf("%d , %d", c, d);
    return 0 ;
}*/



// 3.
/*#include<stdio.h>
int main()
{
    int a=9, b=15, c=16, d=12, e, f ;
    e = !(a<b || b<c) ;
    f = (a>b) ? a-b : b-a ;
    printf("%d , %d", e, f);
    return 0 ;
}*/



// 4. 
/*#include<stdio.h>
int main()
{
    int a=5 ;
    a=6 ;
    a = a+5*a ;
    printf("%d", a);
    return 0 ;
}*/



// 5. 
/*#include<stdio.h>
int main()
{
    int a=5, b=5 ;
    printf("%d, %d\t", ++a, b--);
    printf("%d, %d\t", a, b);
    printf("%d, %d\t", ++a, b++);
    printf("%d, %d\n", a, b);
    return 0 ;
}*/



// 6. 
/*#include<stdio.h>
int main()
{
    int x, y, z ;
    x = 8++ ;
    y = ++x++ ;
    z = (x+y)-- ;
    printf("x=%d , y=%d , z=%d\n", x, y);
    return 0 ;
}*/


// 7.
/*#include<stdio.h>
int main()
{
    int a=4 , b=8, c=3 , d=9, z ;
    z = a++ + ++b * c--  - --d ;
    printf("a=%d, b=%d, c=%d, d=%d, z=%d", a, b, c, d, z);
    return 0 ;
}*/



// 8. 
/*#include<stdio.h>
int main()
{
    int a=14, b, c ;
    a=a%5 ;
    b=a/3 ;
    c=a/5%3 ;
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    return 0 ;
}*/



// 9. 
/*#include<stdio.h>
int main()
{
    int a=15, b=13, c=16, x, y ;
    x = a-3%2+c*2/4%2+b/4 ;
    y = a = b+5-b+9/3 ;
    return 0 ;
}*/



// 10. 
/*#include<stdio.h>
int main()
{
    int x, y, z, k=10 ;
    k += (x=5 , y=x+2, z=x+y);
    printf("x=%d, y=%d, z=%d, k=%d\n", x, y, z, k);
    return 0 ;
}*/



// 11. 
/*#include<stdio.h>
int main()
{
    float b ;
    b = 15/2 ;
    printf("%f\t", b);
    b = (float)15/2 + (15/2);
    printf("%f\n", b);
    return 0 ;
}*/



// 12.
/*#include<stdio.h>
int main()
{
    int a=9 ;
    char ch ='A' ;
    a = a+ch+24 ;
    printf("%d, %c\t %d, %c\n", ch, ch, a, a);
    return 0 ;
}*/



// 13.
/*#include<stdio.h>
int main()
{
    int a, b, c, d ;
    a=b=c=d=4 ;
    a*=b+1 ;
    c+=d*=3 ;
    printf("a=%d, c=%d\n", a, c);
    return 0 ;
}*/



// 14. 
/*#include<stdio.h>
int main()
{
    int a=5, b=10, temp ;
    temp=a, a=b, b=temp ;
    printf("a=%d,  b=%d", a, b);
}*/



// 15. 
/*#include<stdio.h>
int main()
{
    int a=10, b=3, max ;
    max = a>b ? a : b ;
    printf("max=%d\n", max);
    return 0 ;
}*/



// 16. 
/*#include<stdio.h>
int main()
{
    int a=5, b=6 ;
    printf("%d\t %d\t %d, %d\n", a=b, a==b, a, b);
    return 0;
}*/



// 17.
/*#include<stdio.h>
int main()
{
    int a=3, b=4, c=3, d=4, x, y ;
    x = (a=5) && (b=7) ;
    y = (c=5) || (d=8) ;
    printf("a=%d, b=%d, c=%d, d=%d, x=%d, y=%d\n", a, b, c, d, x, y);
    x = (a==6) && (b=9) ;
    y = (c==6) || (d=10) ;    
    printf("a=%d, b=%d, c=%d, d=%d, x=%d, y=%d\n", a, b, c, d, x, y);
    return 0 ;
}*/



// 18.
/*#include<stdio.h>
int main()
{
    int a=10;
    a = a++ ;
    a = a++ * a-- ;
    printf("%d\n", a);
    printf("%d\n", a++ * a++);
    return 0  ;
}*/



// 19.
/*#include<stdio.h>
int main()
{
    int a=2, b=2, x, y ;
    x = 4*(++a * 2+3);
    y = 4*(b++ * 2+3);
    printf("a=%d, b=%d, x=%d, y=%d\n", a, b, x, y);
    return 0 ;
}*/



// 20. Write a program that enters temperature in Celsius and convert it into Fahrenheit 
/*#include<stdio.h>
int main()
{
    float c, f ;
    printf("Enter the temperature in Celsius : ");
    scanf("%f", &c);
    f = (c*1.8) + 32 ;
    printf("Temperature in fahrenheit = %f\n", f);
    return 0 ;
}*/



// 21. Write a program that accept area of the circle and give area and perimeter of circle
/*#include<stdio.h>
#define pi 3.14
int main()
{
    int r;
    printf("Enter the radious of the circle : ");
    scanf("%d", &r);
    printf("Area of the circle      = %f\n", (float)2*pi*r*r);
    printf("Perimeter of the circle = %f\n", (float)2*pi*r);
    return 0 ;
}*/



// 22. Write a program that accept number in decimal and print number in octal and hexadecimal
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("In Octal       = %o\n", n);
    printf("In Hexadecimal = %X\n", n);
    return 0 ;
}*/



// 23. Write a program to accept any number and print the value of remainder after dividing it by 3
/*#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%d modulo 3 = %d\n", n, n%3);
    return 0 ;
}*/



// 24. 
/*#include<stdio.h>
int main()
{
    int a, b, r ;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b) ;
    r = a>b ? a-b : a+b ;
    printf("%d\n", r);
    return 0 ;
}*/



// 25. Write a program that accept marks in five subject and calculate total persentage ;
/*#include<stdio.h>
int main()
{
    int arr[5], sum=0;
    for(int i=0 ; i<5 ; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i] ;
    }
    printf("%d\n", sum);
    printf("Persentage = %.2f", (float)sum/5);
    return 0 ;
}*/

