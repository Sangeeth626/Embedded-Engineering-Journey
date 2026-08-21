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



// 9. Program to print the value of element of an array element using pointer and subscript notation



// 10. Program to print the value and the addrress of array elements by subscripting a pointer variable



// 11. Program to understand diffrence between pointer to an integer and pointer to an array of integers



// 12. Program to dereference a pointer to an array

