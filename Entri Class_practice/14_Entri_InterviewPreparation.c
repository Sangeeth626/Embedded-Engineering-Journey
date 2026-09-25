// 1. 

/*#include<stdio.h>
int main()
{
    int num , cube;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(int i=1 ; i<=num ; i++)
    {
        cube = i*i*i ;
        printf("Number is : %d and cube of the %d is : %d\n", i, i, cube);
    }

    return 0 ;
}*/



// 2. 

/*#include<stdio.h>
#define SIZE 20

int main()
{
    char str[SIZE] ;
    int count=0 ;

    printf("Enter a strig : ");
    fgets(str , sizeof(str), stdin) ;

    int i=0 ;
    while(str[i] != '\0'  && str[i] != '\n')
    {
        if(str[i] >'0' && str[i] <= '9')
        {
            count++ ;
        }
        i++ ;
    }

    printf("There are %d digits in string", count);

    return 0 ;
}*/



// 3. 

#include<stdio.h>
#define SIZE 40
int main()
{
    char str[SIZE] ;
    int digit_count=0 , Cap_alp_count = 0 , Small_alp_count=0 , special_chara_count=0;

    printf("Enter a strig : ");
    fgets(str , sizeof(str), stdin) ;

    int i=0 ;
    while(str[i] != '\0'  && str[i] != '\n')
    {
        if(str[i] >'0' && str[i] <= '9')
        {
            digit_count++ ;
        }
        else if(str[i] > 'A' && str[i] <= 'Z')
        {
            Cap_alp_count++ ;
        }
        else if(str[i] > 'a' && str[i] <= 'z')
        {
            Small_alp_count++ ;
        }
        else
        {
            special_chara_count++ ;
        }

        i++ ;
    }

    printf("There are %d digits in string\n", digit_count);
    printf("There are %d capital letters in string\n", Cap_alp_count);
    printf("There are %d small letters in string\n", Small_alp_count);
    printf("There are %d special characters in string\n", special_chara_count);

    return 0 ;
}