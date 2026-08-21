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

/*#include<stdio.h>
int main()
{
    char str[]= "Embedded C" ;
    char *p = str;

    while(*p != '\0')
    {
        printf("%c", *p);
        p++ ;
    }

    return 0 ;
}*/


// 8. Pointers and const int *p 

// 8.0 without const 

/*#include<stdio.h>
int main()
{
    int n = 50;
    int *p  = &n ;

    printf("Value of  n = %d\n", n);
    printf("Value of *p = %d\n", *p);

    *p = 100 ;                      
    printf("Value of *p = %d\n", *p);

    return 0 ;
}*/

// 8.1 with const (but cannot change the value )

/*#include<stdio.h>
int main()
{
    int n = 50;
    const int *p  = &n ;

    printf("Value of  n = %d\n", n);
    printf("Value of *p = %d\n", *p);

//    *p = 100 ;                      note : here we cannot modify the value of n through p , if we do that the compiler shows error
    printf("Value of *p = %d\n", *p);

    return 0 ;
}*/

// 8.2 with const (can change the value)

/*#include<stdio.h>
int main()
{
    int n = 50;
    const int *p  = &n ;

    printf("Value of  n = %d\n", n);
    printf("Value of *p = %d\n", *p);

    p = &n ;                   // note : We can able to change p 
    n = 100 ;
    printf("Value of *p = %d\n", *p);

    return 0 ;
}*/

// 8.3 with const (can change the value)

/*#include<stdio.h>
int main()
{
    int n = 50, n1 ;
    const int *p  = &n ;

    printf("Value of  n = %d\n", n);
    printf("Value of *p = %d\n", *p);

    p = &n1 ;
    n1 = 100 ;
    printf("Value of *p = %d\n", *p);

    return 0 ;
}*/


// 9. Pointers with int *const p

// 9.0 Without const

/*#include<stdio.h>
int main()
{
    int n = 50 ;
    int *p = &n ;

    printf("Value of  n = %d\n", n);
    printf("Value of *p = %d\n", *p);

    *p = 100 ;
    printf("Value of *p = %d\n", *p);
    printf("Value of  n = %d",n );

    return 0 ;
}*/

// 9.1 With const (Trying to modify through *p)

/*#include<stdio.h>
int main()
{
    int n = 50 ;
    int *const p = &n ;

    printf("Value of  n = %d\n", n);
    printf("Value of *p = %d\n", *p);

    *p = 100 ;          // note : When we use { int *const } , Then we can able to modify data through pointer
    printf("Value of *p = %d\n", *p);
    printf("Value of  n = %d", n);

    return 0 ;
}*/

// 9.2 With const (Trying to modify through p=&n )

/*#include<stdio.h>
int main()
{
    int n = 50 ;
    int *const p = &n ;

    printf("Value of  n = %d\n", n);
    printf("Value of *p = %d\n", *p);

//    p = &n ;                  // note : Connot change p , shows compile error
    printf("Value of *p = %d\n", *p);
    printf("Value of  n = %d", n);

    return 0 ;
}*/


// 10. Pointers with const *const p

// 10.1 With const (Trying to modify through *p (ie...DATA))

/*#include<stdio.h>
int main()
{
    int n = 50 ;
    const int *const p = &n ;

    printf("Value of  n = %d", n);
    printf("Value of *p = %d", *p);

//    *p = 100 ;                    // note : Cannot able to modify data , It shows compilation error 
    printf("Value of *p = %d", *p);
    printf("Value of  n = %d", n);

    return 0 ;
}*/

// 10.2 With const (Trying to modify through p=&n (ie...Pointer))

/*#include<stdio.h>
int main()
{
    int n = 50 ;
    const int *const p = &n ;

    printf("Value of  n = %d", n);
    printf("Value of *p = %d", *p);

//    p = &n ;                // note : Cannot able to modify pointer , It shows compilation error
    n = 100 ;                    
    printf("Value of *p = %d", *p);
    printf("Value of  n = %d", n);

    return 0 ;
}*/

// 10.3 With const ( Directly modifing n )

/*#include<stdio.h>
int main()
{
    int n = 50 ;
    const int *const p = &n ;

    printf("Value of  n = %d\n", n);
    printf("Value of *p = %d\n", *p);

    n = 100 ;                    
    printf("Value of *p = %d\n", *p);
    printf("Value of  n = %d", n);

    return 0 ;
}*/


//    ******** 11. Const with function parameter ********

// 11.1 Display function

/*#include<stdio.h>

void display(const int *p) ;
int main()
{
    int n = 50 ;
//    int *p = &n ;     note : We dont need this because we already passing &n directly

    display(&n);

    printf("Value of  n = %d\n", n) ;
//    printf("Value of *p = %d", *p) ;

    return 0 ;
}

void display(const int *p) 
{
//    *p = 100 ;              // note : Connot able to modify Data because we are using (const int *p)
    printf("Value inside display = %d\n", *p);
}*/

// 11.2 Normal Pointer parameter (For understanding the basic function opration in pointer)

/*#include<stdio.h>

void change(int *p) ;

int main()
{
    int n = 50 ;
    printf("Value of  n  before function call = %d\n", n);
    change(&n);
    printf("Value of  n  after function call  = %d", n);

    return 0 ;
}

void change(int *p)
{
    *p = 100 ;
    printf("Value of *p inside change()       = %d\n", *p);
}*/

// 11.3 Introducing const to this function

/*#include<stdio.h>

void change(const int *p) ;

int main()
{
    int n = 50 ;
    printf("Value of  n  before function call = %d\n", n);
    change(&n);
    printf("Value of  n  after function call  = %d", n);

    return 0 ;
}

void change(const int *p)        // note :  const int *p , Here p provides read-only access to the integer it points to.
{
//    *p = 100 ;           // note : Here we use const int *p , so we cannot modify the Data , It shows compilation error
    printf("Value of *p inside change()       = %d\n", *p);
}*/

// 11.4 Trying to modify and summing

/*#include<stdio.h>

void display(const int *p1, const int *p2);

int main()
{
    int n1 = 50, n2= 100 ;
    int *p1 = &n1 ;
    int *p2 = &n2 ;

    printf("Value of n1 =  Value of *p1 = %d\n", *p1);
    printf("Value of n2 =  Value of *p2 = %d\n", *p2);

    display(&n1, &n2);

    printf("Sum of n1 and n2 = %d", *p1 + *p2);

    return 0 ;
}

void display(const int *p1, const int *p2)
{
//    *p1 = 150 ;            note : We cannot modify the Data (*p)
//    *p2 = 200 ;
    printf("Value of *p1 inside display() = %d\n", *p1);
    printf("Value of *p2 inside display() = %d\n", *p2) ;
}*/

// 11.5 Modifying one variable But only read another variable

/*#include<stdio.h>

void process(int *p1, const int *p2);

int main()
{
    int n1 = 50 ;
    int n2 = 100 ;

    printf("Value of n1 before function call = %d\n", n1);
    printf("Value of n1 before function call = %d\n", n2);

    process(&n1, &n2);

    printf("Value of *p1 after function call = %d\n", n1);
    printf("Value of *p2 after function call = %d\n", n2);

    return 0 ;
}

void process(int *p1, const int *p2)
{
    *p1 = 150 ;            // note : Data can be modified through p1
//    *p2 = 200 ;             note : Data cannot be modified through p1
    printf("Value of *p1 inside process() = %d\n", *p1);
    printf("Value of *p2 inside process() = %d\n", *p2);
}*/