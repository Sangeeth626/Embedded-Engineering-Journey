// 1. Pointer to Pointer

/*#include<stdio.h>
int main()
{
    int n = 50 ;
    int *p = &n ;
    int **pp = &p ;

    printf("Value of n   = Value of *p = Value of **pp = %d  %d  %d\n", n,*p, **pp);
    printf("Address of n = Value of p  = %p   %p\n", &n, p);
    printf("Address of p = Value of pp = %p   %p", &p, pp);

    return 0 ;
}*/


// 2. Pointer to Pointer + Function + Pass by Value

/*#include<stdio.h>

void change_buffer(int**pp, int *new_buffer) ;

int main()
{
    int buffer_A = 10 , buffer_B =20 ;
    int *p = &buffer_A ;
    int **pp = &p ;

    printf("\n---- BEFORE ----\n");
    printf("Value of Buffer_A   = Value of *p = Value of **pp  = %d   %d   %d\n", buffer_A, *p, **pp);
    printf("Address of Buffer_A = Value of p  = %p   %p\n", &buffer_A, p);
    printf("Address of p        = Value of pp = %p   %p\n\n", &p, pp);

    printf("Value of Buffer A = %d\n", buffer_A);
    printf("Value of Buffer B = %d\n", buffer_B);
    printf("Address of Buffer A  = Value of p = %p  =  %p\n", &buffer_A, p);
    printf("Address of Buffer B != Value of p = %p != %p ", &buffer_B, p);


    change_buffer(&p, &buffer_B) ;

    printf("\n\n---- AFTER ----\n");
    printf("Value of Buffer_A   != Value of *p = Value of **pp  = %d !=  %d  =  %d\n", buffer_A, *p, **pp);
    printf("Address of Buffer_A != Value of p  = %p !=  %p\n", &buffer_A, p);
    printf("Address of p         = Value of pp = %p  =  %p\n\n", &p, pp);

    printf("Value of Buffer A = %d\n", buffer_A);
    printf("Value of Buffer B = %d\n", buffer_B);
    printf("Address of Buffer A != Value of p = %p != %p   \n", &buffer_A, p);
    printf("Address of Buffer B = Value of p  = %p  =  %p", &buffer_B, p);

    return 0 ;
}

void change_buffer(int **pp, int *new_buffer)
{
    *pp = new_buffer ;
}*/


// 3. Pointer to Pointer + Char

/*#include<stdio.h>
int main()
{
    char *names[] = {"Embedded", "Software", "Engineer"} ;
    char **p = names ;

    printf("%s\n", *p) ;
    printf("%c\n", **p) ;

    printf("%s\n", *(p+1)) ;
    printf("%c\n", **(p+1)) ;

    printf("%s\n", *(p+2)) ;
    printf("%c\n", **(p+2));

    return 0 ;
}*/


// 4. Switch between arrays

/*#include<stdio.h>

void change_buffer(char **pp, char *new_buffer);

int main()
{
    char buffer_A[] = "HELLO" ;
    char buffer_B[] = "WORLD" ;
    char buffer_C[] = "EMBEDDED" ;
    char *p  = buffer_A ;
    char **pp = &p ;
    int i ;

    printf("Current Buffer   : %s\n", p) ;
    printf("Address of Current Buffer = %p\n", p) ;

    i = 0 ;
    while(buffer_A[i] != '\0')
    {
        printf("Character [%d] = %c\t", i, *(*pp+i)) ; 
        printf("Address of Character [%d] = %p", i, p+i ) ;
        i++ ;
        printf("\n") ;
    }

    printf("\n--- Changing the Buffer to B---\n") ;

    change_buffer(&p, buffer_B) ;

    printf("Current Buffer   : %s\n", p) ;
    printf("Address of Current Buffer = %p\n", p) ;

    i = 0 ;
    while(buffer_B[i] != '\0')
    {
        printf("Character [%d] = %c\t", i, *(*pp+i)) ; 
        printf("Address of Character [%d] = %p", i, p+i ) ;
        i++ ;
        printf("\n") ;
    }

    printf("\n--- Changing the Buffer to C---\n") ;

    change_buffer(&p, buffer_C) ;

    printf("Current Buffer   : %s\n", p) ;
    printf("Address of Current Buffer = %p\n", p) ;

    i = 0 ;
    while(buffer_C[i] != '\0')
    {
        printf("Character [%d] = %c\t", i, *(*pp+i)) ; 
        printf("Address of Character [%d] = %p", i, p+i ) ;
        i++ ;
        printf("\n") ;
    }

    return 0 ;
}

void change_buffer(char **pp, char *new_buffer)
{
    *pp = new_buffer ;
}*/

// 4.1 Switch between arrays (Better way)

/*#include<stdio.h>

void change_buffer(char **pp, char *new_buffer);

int main()
{
    char buffer_A[] = "HELLO" ;
    char buffer_B[] = "WORLD" ;
    char buffer_C[] = "EMBEDDED" ;
    char *p  = buffer_A ;
    char **pp = &p ;
    int i ;

    printf("Current Buffer   : %s\n", p) ;
    printf("Address of Current Buffer = %p\n", p) ;

    i = 0 ;
    while((*pp)[i] != '\0')
    {
        printf("Character [%d] = %c\t", i, *(*pp+i)) ; 
        printf("Address of Character [%d] = %p", i, p+i ) ;
        i++ ;
        printf("\n") ;
    }

    printf("\n--- Changing the Buffer to B---\n") ;

    change_buffer(&p, buffer_B) ;

    printf("Current Buffer   : %s\n", p) ;
    printf("Address of Current Buffer = %p\n", p) ;

    i = 0 ;
    while((*pp)[i] != '\0')
    {
        printf("Character [%d] = %c\t", i, *(*pp+i)) ; 
        printf("Address of Character [%d] = %p", i, p+i ) ;
        i++ ;
        printf("\n") ;
    }

    printf("\n--- Changing the Buffer to C---\n") ;

    change_buffer(&p, buffer_C) ;

    printf("Current Buffer   : %s\n", p) ;
    printf("Address of Current Buffer = %p\n", p) ;

    i = 0 ;
    while((*pp)[i] != '\0')
    {
        printf("Character [%d] = %c\t", i, *(*pp+i)) ; 
        printf("Address of Character [%d] = %p", i, p+i ) ;
        i++ ;
        printf("\n") ;
    }

    return 0 ;
}

void change_buffer(char **pp, char *new_buffer)
{
    *pp = new_buffer ;
}*/


// 4.2 Switch between arrays (More better shorter and reusable way)

#include<stdio.h>

void change_buffer(char **pp, char *new_buffer);
void print_buffer(char **pp) ;

int main()
{
    char buffer_A[] = "HELLO" ;
    char buffer_B[] = "WORLD" ;
    char buffer_C[] = "EMBEDDED" ;
    char *p  = buffer_A ;
    char **pp = &p ;

    print_buffer(&p);

    printf("\n--- Changing the Buffer to B---\n") ;
    change_buffer(&p, buffer_B) ;
    print_buffer(&p);

    printf("\n--- Changing the Buffer to C---\n") ;
    change_buffer(&p, buffer_C) ;
    print_buffer(&p);

    return 0 ;
}

void change_buffer(char **pp, char *new_buffer)
{
    *pp = new_buffer ;
}

void print_buffer(char **pp)
{
    int i=0 ;

    printf("Current Buffer   : %s\n", *pp) ;
    printf("Address of Current Buffer = %p\n", (void*)(*pp + i)) ;
    
    while((*pp)[i] != '\0')
    {
        printf("Character [%d] = %c\t", i, *(*pp+i));
        printf("Address of Character [%d] = %p", i, (void*)(*pp + i)) ;
        i++ ; 
        printf("\n") ;
    }
}

