// 1. Program to print address of variable using address operator

/*#include<stdio.h>
int main()
{
    int age = 24 ;
    int salary = 20000.50 ;

    printf("Address of age = %p\n", &age);
    printf("Address of salary = %p\n", &salary);

    return 0 ;
}*/


// 2. Dereferancing pointer variable

/*#include<stdio.h>
int main()
{
    int a = 61 ;
    float b = 69.8 ;
    int *p1 = &a ;
    float *p2 = &b ;

    printf("\nValue of a = Value of *p1 = Value of *(&a) = %d  %d  %d\n", a, *p1, *(&a)) ;
    printf("Value of b = Value of *p2 = Value of *(&b) = %.1f  %.1f  %.1f\n\n", b, *p2, *(&b)) ;
    printf("Address of a = Value of p1   = %p   %p\n", &a, p1);
    printf("Address of b = Value of p2   = %p   %p\n\n", &b, p2);
    printf("Address of p1 =  %p\n", &p1);
    printf("Address of p2 =  %p\n", &p2);

    return 0 ;
}*/


// 3. Program to print size of pointer variable and size of value dereferenced by them

/*#include<stdio.h>
int main()
{
    char   a='x'  , *p1=&a ;
    int    b=10   , *p2=&b ;
    float  c=98.9 , *p3=&c ;
    double d=98.98, *p4=&d ;  

    printf("size of (p1) = %u  ,  size of (*p1) = %u\n", sizeof(p1), sizeof(*p1));
    printf("size of (p2) = %u  ,  size of (*p2) = %u\n", sizeof(p2), sizeof(*p2));
    printf("size of (p3) = %u  ,  size of (*p3) = %u\n", sizeof(p3), sizeof(*p3));
    printf("size of (p4) = %u  ,  size of (*p4) = %u\n", sizeof(p4), sizeof(*p4));

    return 0 ;
}*/


// 4. Pointer Arithmatic

/*#include<stdio.h>
int main()
{
    int   a=5   , *pi=&a ;
    char  b='x' , *pc=&b ;
    float c=55.5, *pf=&c ;

    printf("\n----- Before Increment Operation -----\n");
    printf("Value of pi = Address of a = %p\n", pi) ;
    printf("Value of pc = Address of b = %p\n", pc) ;
    printf("Value of pf = Address of c = %p\n", pf) ;

    pi++ ;
    pc++ ;
    pf++ ;

    printf("\n----- After Increment Operation -----\n");
    printf("Value of pi = Address of a = %p\n", pi) ;
    printf("Value of pc = Address of b = %p\n", pc) ;
    printf("Value of pf = Address of c = %p", pf) ;

    return 0 ;
}*/


// 5. Postfix / Prefix increment / decrement in a pointer variable of base data type int*

/*#include<stdio.h>
int main()
{
    int a=5 ;
    int *p=&a ;

    printf("Value of p           = %p\n", p);
    printf("Value of p after ++p = %p\n", ++p);
    printf("Value of p after p++ = %p\n", p++);
    printf("Value of p           = %p\n", p);
    printf("Value of p after --p = %p\n", --p);
    printf("Value of p after p-- = %p\n", p--);
    printf("Value of p           = %p\n", p);

    return 0;
}*/

// 5.1 Precedence of Defrencing Operator and Increament/Decreament Operator

/*#include<stdio.h>
int main()
{
    int arr[2] = {25, 38};
    int *ptr = arr ;
    int x ;

    x = *ptr ;
    printf("Value of x = %d\n", x);
    printf("Address = %p\n", ptr);
    printf("*ptr = %d\n\n", *ptr) ;

//    x = *ptr++ ;                        // uncomment one by one to see the working
//    printf("Value of x = %d\n", x);
//    printf("Address = %p\n", ptr);
//    printf("*ptr = %d\n\n", *ptr) ;

//    x = *++ptr ;
//    printf("Value of x = %d\n", x);
//    printf("Address = %p\n", ptr);
//    printf("*ptr = %d\n\n", *ptr) ;

//    x = ++*ptr ;
//    printf("Value of x = %d\n", x);
//    printf("Address = %p\n", ptr);
//    printf("*ptr = %d\n\n", *ptr) ;

//    x = (*ptr)++ ;
//    printf("Value of x = %d\n", x);
//    printf("Address = %p\n", ptr);
//    printf("*ptr = %d\n\n", *ptr) ;
    return 0 ;
}*/


// 6. Pointer to Pointer

/*#include<stdio.h>
int main()
{
    int a=5   ;
    int *pa=&a ;
    int **ppa=&pa;

    printf("Value of a = Value of *pa = Value of *ppa = %d  %d  %d\n\n", a, *pa, **ppa);
    printf("Address of a = Value of pa   = %p  %p\n", &a, pa);
    printf("Address of pa = Value of ppa = %p  %p\n\n", &pa, ppa);
    printf("Address of ppa = %p", &ppa);

    return 0;
}*/


// 7. Program to print the value and address of the elements of an array

/*#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i ;

    for(i=0 ; i<5 ; i++)
    {
        printf("Value of arr[%d] = %d\t", i, arr[i]);
        printf("Address of arr[%d] = %p\n", i, &arr[i]);
    }

    return 0 ;
}*/

// 7.1 For char

/*#include<stdio.h>
int main()
{
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    int i ;

    for(i=0 ; i<5 ; i++)
    {
        printf("Value of arr[%d] = %d\t", i, arr[i]);
        printf("Address of arr[%d] = %p\n", i, &arr[i]);
    }

    return 0 ;
}*/


// 8. Program to print the value and address of element of an array using pointer notation  

/*#include<stdio.h>
int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    int i ;

    for(i=0 ; i<5 ; i++)
    {
        printf("Value of arr[%d] = %d\t", i, *(arr+i));
        printf("Address of arr[%d] = %p\n", i, arr+i) ;
    }
    return 0 ;
}*/


// 9. Program to print the value of element of an array element using pointer and subscript notation

/*#include <stdio.h>
int main()
{
    int arr[5] = {5, 10, 15, 20, 25} ;
    int i = 0 ;
    for(i=0 ; i<5 ; i++)
    {
        printf("Value of arr[%d] = ", i);
        printf("%d\t", arr[i]);
        printf("%d\t", *(arr+i));
        printf("%d\t", *(i+arr));
        printf("%d\n", i[arr]);
        printf("Address of arr[%d] = %p\n", i , &arr[i]);
    }
}*/

// 10. Program to print the value and the addrress of array elements by subscripting a pointer variable

/*#include<stdio.h>
int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    int *p = arr ;
    int i ;

    for(i=0 ; i<5 ; i++)
    {
        printf("Address of arr[%d] = %p   %p   %p   %p\n", i, &arr[i], &p[i], arr+i, p+i);
        printf("Value of arr[%d]   = %d   %d   %d   %d\n", i, arr[i], p[i], *(arr+i), *(p+i));
    }
    return 0 ;
}*/


// 11. Program to understand diffrence between pointer to an integer and pointer to an array of integers

/*#include<stdio.h>
int main()
{
    int arr[5] ;     // declaring array of 5 elements
    int *p ;         // declaring integer pointer
    p = arr ;        // points to 0th element
    int (*ptr)[5] ;  // decalring array pointer
    ptr = &arr ;     // points to the whole array

    printf("p = %p , ptr = %p\n", p, ptr);
    p++ ;
    ptr++ ;
    printf("p = %p , ptr = %p\n", p, ptr);

    return 0 ;
}*/


// 12. Program to dereference a pointer to an array

/*#include<stdio.h>
int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    int *p = arr ;
    int (*ptr)[5] = &arr ;

    printf("p = %p  ,  ptr = %p\n", p, ptr);
    printf("*p = %d ,  *ptr = %p\n", *p, *ptr);
    printf("Size of p  = %zu   ,  Size of ptr  = %zu\n", sizeof(p), sizeof(ptr));
    printf("Size of *p = %zu   ,  Size of *ptr = %zu", sizeof(*p), sizeof(*ptr));

    return 0 ;
}*/


// 13. Program to print value and address of 2D array

/*#include<stdio.h>
int main()
{
    int arr[3][4] = {{10, 11, 12, 13} , {20, 21, 22, 23} , {30, 31, 32, 33}} ;
    int i, j ;

    for(i=0 ; i<3 ; i++)
    {
        printf("Address of %dth array = %p\n", i, arr[i]);
        for(j=0 ; j<4 ; j++)
        {
            printf("%d  ", arr[i][j]) ;
        }
        printf("\n") ;
    }
    return 0 ;
}*/

// 13.1 Using dereferance operation to print

/*#include<stdio.h>
int main()
{
    int arr[3][4] = {{10, 11, 12, 13} , {20, 21, 22, 23} , {30, 31, 32, 33}} ;
    int i, j ;

    for(i=0 ; i<3 ; i++)
    {
        printf("Address of %dth array = %p\n", i, *(arr+i));
        for(j=0 ; j<4 ; j++)
        {
            printf("%d  ", *(*(arr+i)+j) ) ;
        }
        printf("\n") ;
    }
    return 0 ;
}*/


// 14. Program to print elements of 2D array by subscripting a pointer to an array

/*#include<stdio.h>
int main()
{
    int arr[3][4] = {{10, 11, 12, 13} , {20, 21, 22, 23} , {30, 31, 32, 33}};
    int (*ptr)[4] ;   
    ptr = arr ;

    printf("%p   %p   %p\n", ptr, ptr+1, ptr+3);
    printf("%d   %d   %d\n", ptr[0][0], ptr[1][2], ptr[2][3]);

    return 0 ;
}*/

// 14.1 Program to print elements of 2D array by subscripting a pointer to an array ( Using Deferance operation)

/*#include<stdio.h>
int main()
{
    int arr[3][4] = {{10, 11, 12, 13} , {20, 21, 22, 23} , {30, 31, 32, 33}};
    int (*ptr)[4] ;   
    ptr = arr ;

    printf("%p   %p   %p\n", *ptr, *(ptr+1), *(ptr+3) );
    printf("%d   %d   %d\n", **ptr, *(*(ptr+1)+2), *(*(ptr+2)+3));

    return 0 ;
}*/


// 15. Program to print the element of 3D array using pointer notation


// 16. Call by value ( Incrementing the value inside function)

/*#include<stdio.h>

void increment(int x, int y);

int main()
{
    int a=5 , b=10 ;

    printf("a = %d  ,  b = %d\n", a, b);
    increment(a, b);
    printf("a = %d  ,  b = %d\n", a, b);

    return 0 ;
}

void increment(int x, int y)
{
    x++ ;
    y++ ;
    printf("x = %d  ,  y = %d\n", x, y);
}*/


// 17. Call by Referance ( Incrementing the value inside function)

/*#include<stdio.h>

void increment(int *p, int *q);

int main()
{
    int a=5 , b=10 ;

    printf(" a = %d  ,   b = %d\n", a, b);
    increment(&a, &b);
    printf(" a = %d  ,   b = %d\n", a, b);

    return 0 ;
}

void increment(int *p, int *q)
{
    (*p)++ ;
    (*q)++ ;
    printf("*p = %d  ,  *q = %d\n", *p, *q);
}*/


// 18. Retuning more than one value from function using call by referance ( Sum, Diffrence, Product  of two numbers )

