// 1. %d and &i -> print decimal integer

/*#include<stdio.h>
int main()
{
    int marks ;
    printf("Enter the mark : ");
    scanf("%d", &marks);
    printf("Mark = %d\n", marks);
    return 0 ;
}*/


//  2. %c  ->  print a single character

/*#include<stdio.h>
int main()
{
    char character ;
    printf("Enter the character : ");
    scanf("%c", &character);
    printf("Character = %c\n", character);
    return 0 ;
}*/


// 3. %f  ->  print a floating point number

/*#include<stdio.h>
int main()
{
    float decimal_number ;
    printf("Enter a decimal number : ");
    scanf("%f", &decimal_number);
    printf("Decimal number = %.2f\n", decimal_number);
    return 0 ;
}*/


// 4. %s  ->  string

/*#include<stdio.h>
int main()
{
    char str[10] ;
    printf("Enter a string : ");
    scanf("%s", &str);
    printf("String = %s\n", str);
    return 0 ;
}*/

// 4.1 defining SIZE 

/*#include<stdio.h>
#define SIZE 20
char main()
{
    int str[SIZE] ;
    printf("Enter a string : ");
    scanf("%s", &str);
    printf("String : %s\n", str);
    return 0 ;
}*/

// 4.2 Printing full name 

/*#include<stdio.h>
#define SIZE 20 
int main()
{
    char str[SIZE] ;
    printf("Enter full name : ");
    fgets(str, SIZE, stdin);
    printf("Full name       : %s\n", str);
    return 0 ;
}*/


// 5. %d (decimal) , %o (Octal) and %x (Hexadecimal)

/*#include<stdio.h>
int main()
{
    int a ;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf(" decimal = %d\n Octal = %o\n Hexadecimal= 0x%x\n", a, a, a);
    return 0 ;
}*/


// 6. %wd -> format fot integer input and integer output 

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Numbers are : %d %d %d\n", a, b, c);
    printf("Numbers are : %4d %4d %4d\n", a, b, c);
    return 0 ;
}
