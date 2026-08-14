// 1. Find the length of string
/*#include<stdio.h>
#include<string.h>
#define SIZE 20

int main()
{
    char str[SIZE];
    int length, size ;

    printf("Enter a string :");
    fgets(str, sizeof(str), stdin);

    length = strlen(str) ;
    size   = sizeof(str) ;

    printf("length of string = %d\n", length);
    printf("Size of string   = %d\n", size);

    return 0 ;
}*/

// 1.1 Removing the '\n' part which comes when we use fgets() for getting input
/*#include<stdio.h>
#include<string.h>
#define SIZE 20
int main()
{
    char str[SIZE] ;
    int length, size ;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0' ;
    length = strlen(str);
    size   = sizeof(str);

    printf("Length of string = %zu\n", length);
    printf("Size of string   = %zu\n", size);

    return 0 ;
}*/ 

// 1.2 Length of string without using strlen();
/*#include<stdio.h>
#define SIZE 20
int main()
{
    char str[SIZE] ;
    int i, length ;

    printf("Enter a string :");
    fgets(str, sizeof(str), stdin);

    i = 0 ;
    while(str[i]!='\0' && str[i]!='\n')
    {
        i++;
    }
    
    length = i ;
    printf("Length of string = %d", length) ;

    return 0 ;
}*/

// 1.3 Without removing \n
/*#include<stdio.h>
#define SIZE 20
int main()
{
    char str[SIZE] ;
    int i, length ;

    printf("Enter a string :");
    fgets(str, sizeof(str), stdin);

    i = 0 ;
    while(str[i]!='\0')
    {
        i++;
    }
    
    length = i ;
    printf("Length of string = %d", i) ;

    return 0 ;
}*/

// 1.4 All in one
/*#include<stdio.h>
#include<string.h>
#define SIZE 20
int main()
{
    char str[SIZE] ;
    int length ;

    printf("Enter a string :");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0' ;
    length = strlen(str);

    if(length == 0)
    {
        printf("String is empty");
        return 0 ;
    }

    printf("Length of string = %d", length) ;

    return 0 ;
}*/


// 2. Copying the string
/*#include<stdio.h>
#include<string.h>
#define SIZE 30
int main()
{
    char str1[SIZE], str2[SIZE] ;

    printf("Enter a string :");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0' ;

    strcpy(str2, str1);

    printf("Original string : %s\n", str1);
    printf("Copied String : %s\n", str2) ;

    return 0 ;
}*/

// 2.1 Copy and Length
/*#include<stdio.h>
#include<string.h>
#define SIZE 30
int main()
{
    char str1[SIZE], str2[SIZE] ;
    int org_length , cpy_length ;

    printf("Enter a string :");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0' ;

    strcpy(str2, str1);
    org_length = strlen(str1);
    cpy_length = strlen(str2);

    printf("Original string : %s\n", str1);
    printf("Copied String   : %s\n", str2) ;
    printf("Length of original = %d\n", org_length);
    printf("Length of copy     = %d\n", cpy_length);

    return 0 ;
}*/

// 2.2 Takes two strings from the user  , Displays both original strings  , Copies the second string into the first string using strcpy()  , Displays both strings after copying.
/*#include<stdio.h>
#include<string.h>
#define SIZE 30
int main()
{
    char str1[SIZE], str2[SIZE];
    
    printf("Enter first string  : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0' ;
    printf("Enter second string : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0' ;

    printf("\nBefore copying :\n");
    printf("First string   : %s\n", str1);
    printf("Secong string  : %s\n", str2);

    strcpy(str1, str2);

    printf("\nAfter copying :\n");
    printf("First string   : %s\n", str1);
    printf("Secong string  : %s\n", str2);

    return 0 ;
}*/


// 3. Concatenation

/*#include<stdio.h>
#include<string.h>
#define SIZE 30
int main()
{
    char str1[SIZE], str2[SIZE] ;

    printf("Enter first string  : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] ='\0' ;
    printf("Enter second string : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] ='\0' ;

    printf("\nBefore concatenation:\n");
    printf("First string  : %s\n", str1);
    printf("Second string : %s\n", str2);

    strcat(str1, str2);

    printf("\nAfter concatenation:\n");
    printf("First string  : %s\n", str1);
    printf("Second string : %s\n", str2);

    return 0;
}*/

// 3.1 Concatenation with single space

/*#include<stdio.h>
#include<string.h>
#define SIZE 30
int main()
{
    char str1[SIZE], str2[SIZE], space[] = " " ;

    printf("Enter first string  : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] ='\0' ;
    printf("Enter second string : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] ='\0' ;

    printf("\nBefore concatenation:\n");
    printf("First string  : %s\n", str1);
    printf("Second string : %s\n", str2);

    strcat(str1, space);
    strcat(str1, str2);

    printf("\nAfter concatenation:\n");
    printf("First string  : %s\n", str1);
    printf("Second string : %s\n", str2);

    return 0;
}*/

// 3.2 Concatenation with multiple space

/*#include<stdio.h>
#include<string.h>
#define SIZE 50
int main()
{
    char str1[SIZE], str2[SIZE], str3[SIZE], space[] = " " ;

    printf("Enter first string  : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] ='\0' ;
    printf("Enter second string : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] ='\0' ;
    printf("Enter third string : ");
    fgets(str3, sizeof(str3), stdin);
    str3[strcspn(str3, "\n")] ='\0' ;

    printf("\nBefore concatenation:\n");
    printf("First string  : %s\n", str1);
    printf("Second string : %s\n", str2);
    printf("Third string  : %s\n", str3);

    strcat(str1, space);
    strcat(str1, str2);
    strcat(str1, space);
    strcat(str1, str3);

    printf("\nAfter concatenation:\n");
    printf("First string  : %s\n", str1);
    printf("Second string : %s\n", str2);
    printf("Third string  : %s\n", str3);

    return 0;
}*/


// 4. Compare

/*#include<stdio.h>
#include<string.h>
#define SIZE 50
int main()
{
    char str1[SIZE], str2[SIZE] ;

    printf("Enter first string  : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0' ;
    printf("Enter second string : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0' ;

    if(strcmp(str1, str2) == 0)
    {
        printf("Both strings are equal");
    }
    else if(strcmp(str1, str2) < 0)
    {
        printf("First string is smaller");
    }
    else
    {
        printf("Second string is smaller");
    }

    return 0 ;
}*/

// 4.1 Compare (equal or not)

/*#include<stdio.h>
#include<string.h>
#define SIZE 50
int main()
{
    char str1[SIZE], str2[SIZE] ;

    printf("Enter first string  : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0' ;
    printf("Enter second string : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0' ;

    if(strcmp(str1, str2) == 0)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Both strings are diffrent");
    }

    return 0 ;
}*/


// 5. Searching Character

/*#include<stdio.h>
#include<string.h>
#define SIZE 30
int main()
{
    char str[SIZE], ch, *result;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0' ;

    printf("Enter the character to be searched : ");
    scanf("%c", &ch) ;

    result = strchr(str, ch) ;

    if(result != NULL)
    {
        printf("Character found\n") ;
        printf("Character = %c\n", *result);
        printf("First occurance at index %ld", result - str);           // note : str     → address of index 0
//                                                                                result  → address of found character
//
//                                                                                 result - str
//                                                                                        ↓
//                                                                                number of positions between them
//                                                                                        ↓
//                                                                                     index
    }
    else
    {
        printf("Character not found");
    }

    return 0 ;
}*/


// 6. Searching sub-string

/*#include<stdio.h>
#include<string.h>
#define SIZE 50
int main()
{
    char str[SIZE], *result, sub[SIZE] ;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0' ;

    printf("Enter the sub-string to be searched : ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0' ;

    result = strstr(str, sub) ;

    if(result != NULL)
    {
        printf("Substring found\n") ;
        printf("sub-string = %s\n", result) ;
        printf("Starting index = %ld", result - str);
    }
    else
    {
        printf("Sub-string not found");
    }

    return 0 ;
}*/


// 7. All in one (Combined Program)

/*#include<stdio.h>
#include<string.h>
#define SIZE 100
int main()
{
    char str1[SIZE], str2[SIZE], str3[SIZE], ch, *result1, sub[SIZE], *result2;
    int l1, l2 ;

// INPUT    
    printf("Enter first string  : ");
    fgets(str1, sizeof(str1), stdin );
    str1[strcspn(str1, "\n")] = '\0' ;
    printf("Enter second string : ");
    fgets(str2, sizeof(str2), stdin );
    str2[strcspn(str2, "\n")] = '\0' ;

// LENGTH    
    l1 = strlen(str1);
    l2 = strlen(str2);
    printf("\nLength of first string  = %d\n", l1) ;
    printf("Length of second string = %d\n\n", l2) ;

    if(strcmp(str1, str2) == 0)
    {
        printf("Both string are equal\n");
    }
    else
    {
        printf("Both string are not equal\n");
    }

// COPYING
    strcpy(str3, str1);
    printf("\nCopied first string : %s\n", str3);

// CONCATENATION
    strcat(str3, str2);
    printf("After concatination : %s\n", str3);

// SEARCHING CHARACTER
    printf("\nEnter the character to be searched : ");
    scanf(" %c", &ch) ;
    getchar() ;                                  // note : it is used to solve input-buffer issue
    
    result1 = strchr(str3, ch);

    if(result1 != NULL)
    {
        printf("Character found\n");
        printf("Character %c is found at starting index %ld\n", *result1, result1 - str3);
    }
    else
    {
        printf("Character not found\n");
    }

// SEARCHING SUB-STRING
    printf("\nEnter the substring to be searched : ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0' ;
    
    result2 = strstr(str3, sub) ;

    if(result2 != NULL)
    {
        printf("Substring found\n");
        printf("Substring --%s-- found at index %ld\n", result2, result2 - str3) ;
    }
    else
    {
        printf("Substring not found\n");
    }

    return 0 ;
}*/

