// 1. Modification  of Variable

/*#include<stdio.h>
int main()
{
    int a=5 ;
    int *ptr = &a ;

    printf("Value : %d   %d\n\n", a, *ptr);

    printf("Enter the number : ");
    scanf("%d", ptr);

    printf("Value : %d   %d\n", a, *ptr);

    return 0 ;
}*/



// 2. Modification of Pointer Variabele

/*#include<stdio.h>
int main()
{
    int *ptr ;

    printf("Enter the number : ");
    scanf("%d", ptr);

    printf("Value : %d\n", *ptr);

    return 0 ;
}*/



// 3. Array

/*#include<stdio.h>
int main()
{
    int arr[5] , i ;

    for(i=0 ; i<5 ; i++)
    {
        printf("%p  ", arr+i);
    }
    
    printf("\nEnter the Array Elements : ");
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d", arr+i);
    }

    for(i=0 ; i<5 ; i++)
    {
        printf("%d  ", *(arr+i));
    }

    return 0 ;
}*/



// 4. Printing Value and Address using Pointer notation and Subscript notation (Printing Value and Address by Adding pointer to index )

/*#include<stdio.h>
int main()
{
    int i , arr[5] = {25, 30, 35, 40, 45} , *p ;
    p = arr ;

    for(i=0 ; i<5 ; i++)
    {
        printf("\n--------------------------\n");
        printf("%d\t\t%d\t\t", *(p+i), p[i]);     // Printing value using Pointer notation *(p+i) and Subscript notation p[i]
        printf("\n");
        printf("%p\t%p\t", (void *)(p+i), (void *)&p[i]) ;   // Printing address using Pointer notation (void *)(p+i) and Subscript notation (void *)p[i]
        printf("\n--------------------------\n");
    }

    return 0 ;
}*/



// 5. Printing Value and Address by Subracting pointer by index 

/*#include<stdio.h>
int main()
{
    int arr[5] = {25, 30, 35, 40, 45} , i , *p ;
    p = &arr[4];

    for(i=0 ; i<5 ; i++)
    {
        printf("\n---------------------------\n") ;
        printf("%d\t\t%d\t\t", *(p-i), p[-i]);
        printf("\n");
        printf("%p\t%p\t", (void *)(p-i), (void *)&p[-i]);
        printf("\n---------------------------\n") ;
    }

    return 0 ;
}*/



// 6. Printing Value and Address by Subracting pointer by increamenting array

