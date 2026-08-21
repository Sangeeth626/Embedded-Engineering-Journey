// 1. Value , Address and Size of Data type (single element)

/*#include<stdio.h>
int main()
{
    char c = 'x' ;
    char *pc = &c ;
    int a = 10 ; 
    int *pi = &a ;
    float f = 9.5 ;
    float *pf = &f ;
    double d = 9.569 ;
    double *pd = &d ;

    printf("\n------ CHARACTER ------\n") ;
    printf("Value of char = %c\n", *pc) ;
    printf("Address of char = %p\n", pc);
    printf("Size of cahr = %d\n", sizeof(c));

    printf("\n------ INTEGER ------\n") ;
    printf("Value of int = %d\n", *pi) ;
    printf("Address of int = %p\n", pi);
    printf("Size of int = %d\n", sizeof(a));

    printf("\n------ FLOAT ------\n") ;
    printf("Value of float = %.2f\n", *pf) ;
    printf("Address of float = %p\n", pf);
    printf("Size of float = %d\n", sizeof(f));

    printf("\n------ DOUBLE ------\n") ;
    printf("Value of double = %f\n", *pd) ;
    printf("Address of double = %p\n", pd);
    printf("Size of double = %d\n", sizeof(d));
    
    return 0;
}*/


// 2. Value , Address and Size of Data type (array of element)

/*#include<stdio.h>

void string_value_address_size (char *pc) ;
void integer_value_address_size (int *pi) ;
void float_value_address_size (float *pf) ;
void double_value_address_size (double *pd) ;

int main()
{
    printf("\n ---------- CHARACTERS ---------\n");
    char str[] = {"Embedded"} ;
    char *pc = str ;
    string_value_address_size(pc);

    printf("\n ---------- INTEGERS ---------\n");
    int arr[] = {1, 2, 3, 4, 5};
    int *pi = arr ;
    integer_value_address_size (pi) ;

    printf("\n ---------- FLOAT ---------\n");
    float arr_f[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *pf = arr_f ;
    float_value_address_size (pf) ;

    printf("\n ---------- DOUBLE ---------\n");
    double arr_d[] = {1.123, 2.234, 3.345, 4.456, 5.567};
    double *pd = arr_d ;
    double_value_address_size (pd) ;


    return 0 ;
}

void string_value_address_size (char *pc)
{
    int i = 0;
    while(*(pc+i) != '\0')
    {
        printf("Value of str[%d] = %c\t", i, *(pc+i)) ;
        printf("Address of str[%d] = %p\t", i, (void *)&pc[i]);      // note : here we need (void *)(pc+i) or (void *)&pc[i]  insted of &pc+i (because pc is a char * pointing at the first character,   &pc is the address of the variable pc itself ,   Since pc has type char *, &pc has type char ** )
        printf("Size of str[%d] = %zu byte", i, sizeof(*pc));      //        &pc+i means “move past one char * pointer object,” so its address changes by sizeof(char *), commonly 4 bytes in a 32-bit program or 8 bytes in a 64-bit program.
        i++ ;
        printf("\n");
    }
}

void integer_value_address_size (int *pi)
{
    int i;
    for(i=0 ; i<5 ; i++)
    {
        printf("Value of arr[%d] = %d\t", i, *(pi+i)) ;
        printf("Address of arr[%d] = %p\t", i, (void *)&pi[i]);     
        printf("Size of arr[%d] = %zu byte", i, sizeof(*pi));      
        printf("\n");
    }
}

void float_value_address_size (float *pf)
{
    int i;
    for(i=0 ; i<5 ; i++)
    {
        printf("Value of arr_f[%d] = %.2f\t", i, *(pf+i)) ;
        printf("Address of arr_f[%d] = %p\t  ", i, (void *)&pf[i]);     
        printf("Size of arr_f[%d] = %zu byte", i, sizeof(*pf));      
        printf("\n");
    }
}

void double_value_address_size (double *pd)
{
    int i;
    for(i=0 ; i<5 ; i++)
    {
        printf("Value of arr_d[%d] = %f\t", i, *(pd+i)) ;
        printf("Address of arr_d[%d] = %p\t  ", i, (void *)&pd[i]);     
        printf("Size of arr_d[%d] = %zu byte", i, sizeof(*pd));      
        printf("\n");
    }
}*/


