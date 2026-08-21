
//      !!!!************  BASICS OF STRING  **************!!!!


// 1. Printing a Word

/*#include<stdio.h>
#define SIZE 30 
int main()
{
    char name[SIZE] ;          // Declaration

    printf("Enter one word : ");
    scanf("%s", name);       
    printf("You entered    : %s\n", name);

    return 0;
}*/

// 2. Read and Print a Full Name

/*#include<stdio.h>
#define SIZE 20
int main()
{
    char name[SIZE] ;

    printf("Enter your full name : ");
    fgets(name, SIZE, stdin);
    printf("Your name is : %s\n", name);

    return 0;
}*/


// 3. Transversing the string

/*#include<stdio.h>
#define SIZE 20
int main()
{
    char name[SIZE] ;
    int i ;

    printf("Enter the string :");
    fgets(name, sizeof(name), stdin);

    printf("Characters of String:\n");
    i=0 ;
    while(name[i] != '\0'  &&  name[i] != '\n')
    {
        printf("%c ",name[i]);
        i++;
    }

    return 0;
}*/


// 4. Length of the string

/*#include<stdio.h>
#define SIZE 20
int main()
{
    char name[SIZE] ;
    int i, count=0 ;

    printf("Enter the string : ");
    fgets(name, sizeof(name), stdin);

    i = 0;
    while(name[i] != '\0'  &&  name[i] != '/n');         // because in  fgets we have /n later /0 
    {
        printf("%c ", name[i]) ;
        count++ ;
        i++ ;
    }

    printf("Length of string : %d ", count);

    return 0;
}*/




//        !!!!**********  COUNTING THE STRING  **********!!!


// 5. Count the number of vowels 

/*#include<stdio.h>
#define SIZE 20
int main()
{
    char name[SIZE] ;
    int i, count=0 ;

    printf("Enter a string : ");
    fgets(name, sizeof(name), stdin);

    i = 0 ;
    while(name[i] != '\0'  && name[i] != '\n')
    {
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' ||  name[i] == 'u' ||
            name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' ||  name[i] == 'U')
        {
            count ++ ;
        }
        i++ ;
    }

    printf("Number of vowels in string is %d", count);

    return 0;
}*/


// 6. Count Consonants (ie... Must be an alphabet and not a vowel )

/*#include<stdio.h>
#define SIZE 20
int main()
{
    char name[SIZE] ;
    int i, count=0 ;

    printf("Enter a string : ");
    fgets(name, sizeof(name), stdin);

    i = 0 ;

    while(name[i] != '\0'  && name[i] != '\n')
    {
        if(name[i] >= 'A' && name[i] <= 'Z')
        {
            if(name[i] != 'A' && name[i] != 'E' && name[i] != 'I' && name[i] != 'O' &&  name[i] != 'U')
            {
                count++ ;
            }
        }
        if(name[i] >= 'a' && name[i] <= 'z')
        {
            if(name[i] != 'a' && name[i] != 'e' && name[i] != 'i' && name[i] != 'o' &&  name[i] != 'u')
            {
                count ++ ;
            }  
        }

        i++ ;
    }

    printf("Number of Consonants in string is %d", count);

    return 0;
}*/


// 7. Count Digit

/*#include<stdio.h>
#define SIZE 20
int main()
{
    char name[SIZE], c ;
    int i, count=0 ;

    printf("Enter a string : ");
    fgets(name, sizeof(name), stdin);

    i = 0 ;

    while(name[i] != '\0'  && name[i] != '\n')
    {
        if(name[i] >= '0' && name[i] <= '9')
        {
            count++ ;
        }

        i++ ;
    }

    printf("Number of digit in string is %d", count);

    return 0;
}*/


// 8. Count Special Character

/*#include<stdio.h>
#define SIZE 20
int main()
{
    char name[SIZE] ;
    int i, count=0 ;

    printf("Enter the string : ");
    fgets(name, sizeof(name), stdin);

    i = 0 ;
    while(name[i] != '\0'  && name[i] != '\n' )
    {
        if( ! ((name[i]>='A' && name[i]<='Z') || (name[i]>='a' && name[i]<='z') ||  (name[i]>='0' && name[i]<='9') || name[i]== ' ')) 
        {
            count ++ ;
        }

        i++ ;
    }

    printf("Number of special characters in the string are %d", count);

    return 0;
}*/




//    !!!!*************  MODIFYING THE STRING  ************!!!!


// 9. Convert Lowercase to Uppercase

/*#include<stdio.h>
#define SIZE 30
int main()
{
    char string[SIZE] ;
    int i ;

    printf("Enter the string with lowercase: ");
    fgets(string, sizeof(string), stdin);

    i = 0 ;
    while(string[i] != '\0'  &&  string[i] != '\n')
    {
        if(string[i] >= 'a'  &&  string[i] <= 'z')
        {
            string[i] = string[i] - ('a' - 'A') ;
        }

        i++ ;
    }

    printf("String in upper case : %s ", string);

    return 0 ;
}*/


// 10. Convert Uppercase to Lowercase

/*#include<stdio.h>
#define SIZE 30
int main()
{
    char string[SIZE] ;
    int i ;

    printf("Enter the string : ");
    fgets(string, sizeof(string), stdin);

    i = 0 ;
    while(string[i] != '\0'  &&  string[i] != '\n')
    {
        if(string[i] >= 'A'  &&  string[i] <= 'Z')
        {
            string[i] = string[i] + ('a' - 'A') ;
        }

        i++;
    }

    printf("String in lower case : %s", string);

    return 0 ;
}*/


// 11. Reversing the string

/*#include<stdio.h>
#define SIZE 20
int main()
{
    char str[SIZE] ;
    int i, j, temp, count=0 ;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

// LENGTH OF STRING
    i = 0 ;
    while(str[i]!='\0' && str[i]!= '\n')
    {
        count ++ ;
        i++;
    }
// LAST CHARA
    j = count  - 1 ;

// SWAPPING
    i = 0 ;
    while(i<j)    
    {
        temp = str[i] ;
        str[i] = str[j] ;
        str[j] = temp ;

        i++ ;
        j-- ;
    }

    printf("Reversed string : %s", str);

    return 0;
}*/


// 12. Palindrome string

/*#include<stdio.h>
#define SIZE 30
int main()
{
    char str[SIZE] ;
    int i, j, count=0, flag=1 ;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin); 

// Finding the length of string    
    i = 0 ;
    while(str[i]!='\0' && str[i]!='\n')
    {
        count ++ ;
        i++ ;
    }
// last chara
    j = count - 1;
// comparing
    i = 0 ;    
    while (i<j)
    {
        if(str[i]!=str[j])
        {
            flag = 0;
            break ;
        }

        i++ ;
        j -- ; 
    }

    if(flag==1)
    {
        printf("It is a palindrome string");
    }
    else
    {
        printf("It is not a palindrome string");
    }
    
    return 0 ;
}*/

// 13. Copy a string

/*#include<stdio.h>
#define SIZE 30
int main()
{
   char str1[SIZE], str2[SIZE] ;
   int i ,count=0, j;

   printf("Enter the string :");
   fgets(str1, sizeof(str1), stdin);



   i = 0 ;
   while(str1[i]!='\0' && str1[i]!='\n')
   {
    str2[i] = str1[i];
    count++ ;
    i++ ;
   }

   j = count;

   str2[j] = '\0';

   printf("Original : %s", str1);
   printf("Copy     : %s", str2);

   return 0 ;
}*/

// 13.1 Copy a string (Simpler version)

/*#include<stdio.h>
#define SIZE 30
int main()
{
   char str1[SIZE], str2[SIZE] ;
   int i ,count=0, j;

   printf("Enter the string :");
   fgets(str1, sizeof(str1), stdin);



   i = 0 ;
   while(str1[i]!='\0' && str1[i]!='\n')
   {
    str2[i] = str1[i];
    i++ ;
   }
                      
   str2[i] = '\0';                     // because after the loop value of i become count

   printf("Original : %s", str1);
   printf("Copy     : %s", str2);

   return 0 ;
}*/


// 14. String Concatenation

/*#include<stdio.h>
#define SIZE 50
int main()
{
    char str1[SIZE], str2[SIZE], str3[SIZE];
    int i, j ;

    printf("Enter first string  :");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter Second string :");
    fgets(str2, sizeof(str2), stdin);

    i = 0;
    while(str1[i]!='\0' && str1[i]!='\n')
    {
        str3[i] = str1[i] ;
        i++ ;
    }    
    str3[i] = '\0';
    printf("Copied string : %s\n", str3);

    j = 0 ;
    while(str2[j]!= '\0' && str2[j]!='\n' )
    {
        str3[i] = str2[j] ;
        j++ ;
        i++ ;
    }

    str3[i] = '\0' ;

    printf("Concatenated string : %s", str3);

    return 0 ;
}*/


// 15. String Comparison

/*#include<stdio.h>
#define SIZE 50
int main()
{
    char str1[SIZE], str2[SIZE] ;
    int i , flag=1;

    printf("Enter first string : ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string : ");
    fgets(str2, sizeof(str2), stdin);

    i = 0 ;
    while(str1[i]!='\0' && str1[i]!='\n'  &&  str2[i]!='\0' && str2[i]!='\n' )
    {
        if(str1[i] != str2[i])
        {
            flag = 0 ; 
            break ;    
        }

       i++ ;
    }

    if((str1[i]=='\0' || str1[i]=='\n')  &&  (str2[i]=='\0' || str2[i]=='\n'))
    {
        flag = 1 ;
    }
    else
    {
        flag = 0 ;
    }

    if(flag == 1)
    {
        printf("Both string are equal");
    }
    else
    {
        printf("Strings are not equal");
    }

    return 0 ;
}*/

