// 2.

/*#include<stdio.h>
int main()
{
    int value = 10 ;
    int *p = &value ;

    printf("Value = %d\n", value);
    printf("Address of value = %p\n", p);
    printf("Size of value    = %d\n", sizeof(value)) ;
    printf("Size of pointer  = %d\n", sizeof(*p)) ;
    printf("Size of address  = %d", sizeof(&value));

    return 0 ;
}*/


// 3.

/*#include<stdio.h>
int main()
{
    int value = 10 ;
    int *p = &value ;

    printf("Value = %d\n", value);
    printf("Address of value = %p\n", p);
    printf("Size of value    = %d\n", sizeof(value)) ;
    printf("Size of pointer  = %d\n", sizeof(*p)) ;
    printf("Size of address  = %d", sizeof(&value));

    return 0 ;
}*/





//1. create a  **p_ptr and store the value of a pointer inside it and print values of it using p_ptr and modift the value uising p_ptr and also find the size of p_ptr?

#include<stdio.h>
int main()
{
    int num = 2 ;
    int *p = &num ;
    int **pp = &p ;

    printf("value : %d\n", num);
    printf("Address of value = value of p  : %p   %p\n", &num, (void *)p);
    printf("Address of p     = value of pp : %p   %p\n", (void *)&p, (void *)pp);
    
    printf("Size of value : %zu\n", sizeof(num));
    printf("Size of p     : %zu\n", sizeof(p));
    printf("Size of pp    : %zu\n\n", sizeof(pp));

    **pp = 10 ;

    printf("value : %d\n", num);
    printf("Address of value = value of p  : %p   %p\n", &num, (void *)p);
    printf("Address of p     = value of pp : %p   %p\n", (void *)&p, (void *)pp);

    return 0 ;
}