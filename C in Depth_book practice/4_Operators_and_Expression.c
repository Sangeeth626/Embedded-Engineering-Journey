// 1. Integer arithmatic operation
/*#include<stdio.h>
int main()
{
    int a=10, b=5 ; 
    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", a/b);
    printf("%d\n", a%b);
    return 0 ;
}*/



// 2. Program to understand floating point arithmatics
/*#include<stdio.h>
int main()
{
    float a=12.4, b=3.8 ;
    printf("Sum = %.2f\n", a+b);
    printf("Diff = %.2f\n", a-b);
    printf("Mul = %.2f\n", a*b);
    printf("Div = %.2f\n", a/b);
    return 0;
}*/



// 3. Prefix increment/decrement 
/*#include<stdio.h>
int main()
{
    int x=8;
    printf("x=%d\n", x);
    printf("x=%d\n", ++x);
    printf("x=%d\n", x);
    printf("x=%d\n", --x);
    printf("x=%d\n", x);
    return 0 ;
}*/



// 4. Postfix increment/decrement 
/*#include<stdio.h>
int main()
{
    int x=8;
    printf("x=%d\n", x);
    printf("x=%d\n", x++);
    printf("x=%d\n", x);
    printf("x=%d\n", x--);
    printf("x=%d\n", x);
    return 0 ;
}*/



// 5. Program to understand Relational Operation
/*#include<stdio.h>
int main()
{
    int a=12 , b=14;
    if(a>b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    if(a>=b)
    {
        printf("%d is greater than or equal to %d\n", a, b);
    }
    if(a<b)
    {
        printf("%d is less than %d\n", a, b);
    }
    if(a<=b)
    {
        printf("%d is less than or equal to %d\n", a, b);
    }
    if(a!=b)
    {
        printf("%d is not equal to %d\n", a, b);
    }

    return 0 ;
}*/



// 6. Print the largest of two numbers using conditional operation
/*#include<stdio.h>
int main()
{
    int a, b, max ;
    printf("Enter two numbers :");
    scanf("%d%d", &a, &b);
    max = a>b ? a:b ;
    printf("Max = %d\n", max);
    return 0 ;
}*/



// 7. Program to understand use of comma operation
/*#include<stdio.h>
int main()
{
    int a, b, c, sum ;
    sum = (a=8, b=5, c=2, a+b+c);
    printf("Sum = %d\n", sum);
    return 0 ;
}*/



// 8. Program to interchange the value of operation using comma operation
/*#include<stdio.h>
int main()
{
    int a=8, b=7, temp ;
    printf("a=%d, b=%d\n",a, b);
    temp=a , a=b, b=temp ;
    printf("a=%d, b=%d\n", a, b);
    return 0 ;
}*/



// 9. Program to understand sizeof operation
/*#include<stdio.h>
int main()
{
    int var ;
    unsigned int num ;
    long long int num2;
    short int num3 ;
    printf("Size of char   = %zu\n", sizeof(char));
    printf("Size of int    = %zu\n", sizeof(int));
    printf("Size of float  = %zu\n", sizeof(float));
    printf("Size of double = %zu\n", sizeof(double));
    printf("Size of var    = %zu\n", sizeof(var));
    printf("Size of integer constant = %zu\n", sizeof(45));
    printf("Size of uint   = %zu\n", sizeof(num));
    printf("Size of llint  = %zu\n", sizeof(num2));
    printf("Size of sint   = %zu\n", sizeof(num3));
    return 0; 
}*/



// 11. Program to illustrate the use of cast operation 
/*#include<stdio.h>
int main()
{
    int x=5, y=2 ;
    float p, q ;
    p = x/y ;
    q = (float)x/y ;
    printf("%.2f\n",p);
    printf("%.2f\n",q);
    return 0; 
}*/



// 12. Program to evaluate some expression ;
/*#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, k ;

    a=8, b=4, c=2, d=1, e=5, f=20 ;
    printf("%d\t", a+b-(c+d)*3%e+f/9);
    
    a=17, b=5, c=6, d=3, e=5;
    printf("%d\t", a%6-b/2+(c*d-5)/e);

    a=4, b=5, c=6, d=3, e=5, f=10 ;
    printf("%d\t", a*b-c/d<e+f);

    a=8, b=5, c=8, d=3, e=65, f=10, g=2, h=5, k=2 ;
    printf("%d\t", a-b+c/d==e/f-g+h%k);

    return 0 ;
}*/