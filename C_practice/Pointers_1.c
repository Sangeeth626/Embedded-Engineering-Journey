// 1. Basics ( &n operator)

/*#include<stdio.h>
int main()
{
    int n ;

    printf("Enter a number (n): ");
    scanf("%d", &n);
    printf("Value of (n)  = %d\n", n);
    printf("Address of (n) = %p", &n);

    return 0 ;
}*/


// 2. Basics ( *(&n) Operator)

/*#include<stdio.h>
int main()
{
    int n ;

    printf("Enter a number (n) : ");
    scanf("%d", &n);

    printf("Value of (n)  = %d\n", n);
    printf("Address of (n) = %p\n", &n);
    printf("Value using *(&n) = %d ", *(&n));

    return 0 ;
}*/


// 3. Basics (Pointer Variable ( int *p ) )

/*#include<stdio.h>
int main()
{
    int n ;
    int *p = &n ;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Value of n   = %d\n", n);
    printf("Address of n = %p\n", &n);
    printf("Value of p   = %p\n", p);
    printf("Value of n accessed through *p = %d", *p);

    return 0 ;
}*/


// 4. Changing number (Pointers + Function)

/*#include<stdio.h>

void change(int *p);
int main()
{
    int n=50 ;

    printf("Value of n before function call = %d\n", n);
    change(&n);                                              // note : Here address is passed to the function
    printf("Value of n after function call  = %d", n);

    return 0 ;
}

void change(int *p)
{
    *p = 100 ;
}*/


// 5. 1-D Array and Pointers

/*#include<stdio.h>
#define SIZE 20
int main(void)
{
    int a[SIZE], limit, i;
    int *p = a ;

    printf("Enter the limit : ");
    scanf("%d", &limit);
    if(limit <= 0 || limit > SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

    printf("Enter the array elements : ");
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The array elements are:\n");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ", p[i]);
    }

    return 0 ;
}*/


// 6. Pointer Arithmatic

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE] , limit, i ;
    int *p = a ;

    printf("Enter the limit : ");
    scanf("%d", &limit);
    if(limit<= 0 || limit>SIZE)
    {
        printf("Invalid limit");
    }

    printf("Enter the array elements : ");
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Printing all elemants using *p \n");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ", *p);
        p++ ;
    }
    if(limit >= 5)
    {
        int *p1 = &a[1];
        int *p2 = &a[4];
        printf("\np2 - p1 = %d", p2-p1);
    }

    return 0 ;
}*/


// 7. Pointer Strings

#include<stdio.h>
int main()
{
    
}