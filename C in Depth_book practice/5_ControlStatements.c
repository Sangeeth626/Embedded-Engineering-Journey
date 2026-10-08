// 1. Write a program to print bigger number
/*#include<stdio.h>
int main()
{
    int a, b ;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    if(a>b)
    {
        printf("Bigger number = %d\n", a);
    }
    else if(a<b)
    {
        printf("Bigger number = %d\n", b);
    }
    else
    {
        printf("Both number are equal");
    }

    return 0 ;
}*/



// 2. Program to print a whether a number is odd or even
/*#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num == 0)
    
    if((num & (1U<<0)) == 0)       // checking the LSB bit is 0 or 1
    {
        printf("%d is an even number", num);
    }
    else if((num & (1U<<0)) == 1)
    {
        printf("%d is an odd number", num);
    }

    return 0 ;
}*/



// 3. Print wheather any negative number is entered or not 
/*#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num<0)
    {
        printf("%d is a negative number\n", num);
        num = -num ;
    }
    printf("Number is %d\n", num);
    return 0 ;
}*/



// 4. Program to find the quotient and reminder 
/*#include<stdio.h>
int main()
{
    int x, y, quo, rem ;
    printf("Enter two numbers : ");
    scanf("%d%d", &x, &y);

    if(y != 0)
    {
        quo = (float)x/y;
        rem = x%y ;
        printf("Quotient = %d\nRemainder = %d\n", quo, rem);
    }
    else
    {
        printf("Divide by zero error\n");
    }

    return 0 ;
}*/



// 5. Program to find biggest number from three number 
/*#include<stdio.h>
int main()
{
    int x, y, z, big;
    printf("Enter three numbers : ");
    scanf("%d%d%d", &x, &y, &z);
    
    big = (x>y && x>z) ? x : (y>x && y>z) ? y : (z>x && z>y) ? z : x;
    printf("Biggest number is %d", big);

    return 0 ;
}*/



// 6. Program to find wheather a year is leap year or not 
/*#include<stdio.h>
int main()
{
    int year ;
    printf("Enter the year : ");
    scanf("%d", &year);

    if(((year%100 == 0) || (year%4 == 0) && (year%400 == 0)))
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }

    return 0;
}*/



// 7. Program to find the grade of student when the mark of 4 subject are given
/*#include<stdio.h>
#define SIZE 10

int main()
{
    float arr[SIZE] , total=0, total_persentage;
    int limit , overall_total;
    char grade ;
    printf("Enter the number of subject : ");
    scanf("%d", &limit) ;

    printf("Enter overall total mark : ");
    scanf("%d", &overall_total);

    printf("Enter the marks : ") ;
    for(int i=0 ; i<limit ; i++)
    {
        scanf("%f", &arr[i]) ;
    }

    for(int i=0 ; i<limit ; i++)
    {
        total += arr[i] ;
    } 

    printf("\nTotal marks obtained      = %.2f\n", total);
    total_persentage = (total/overall_total)*100 ;
    printf("Total persentage obtained = %.2f\n", total_persentage);

    if(total_persentage >= 90 && total_persentage <= 100) 
    {
        grade = 'S';
    }
    else if(total_persentage >= 80 && total_persentage <= 89)
    {
       grade = 'A';
    }
    else if(total_persentage >= 70 && total_persentage <= 79)
    {
        grade = 'B';
    }
    else if(total_persentage >= 60 && total_persentage <= 69)
    {
        grade = 'C';
    }
    else if(total_persentage >= 50 && total_persentage <= 59)
    {
        grade = 'D';
    }
    else if(total_persentage >= 40 && total_persentage <= 49)
    {
        grade = 'P';
    }
    else
    {
        grade = 'F';
    }
    
    printf("Grade = %c\n", grade);

    return 0 ;
}*/



// 8. Program to print number 1 to 10 using while loop
/*#include<stdio.h>
int main()
{
    int i=1;
    while(i <= 10)
    {
        printf("%d ", i);
        i++ ;
    }
    return 0 ;
}*/



// 9. Program to print the number in reverse order and with a diffrence of 2 
/*#include<stdio.h>
int main()
{
    int i=10;
    while(i>=1)
    {
        printf("%d ", i);
        i = i-2 ;
    }
}*/



// 10. Program to print the sum of digit of any number
/*#include<stdio.h>
int main()
{
    int n, digit, sum=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    while(n != 0)
    {
        digit = n%10 ;
        sum += digit ;
        n = n/10 ;
    }

    printf("Sum of digit = %d\n", sum);
    return 0 ;
}*/



// 11. Program to find the product of digit of any number 
/*#include<stdio.h>
int main()
{
    int n, digit, prod=1;
    printf("Enter a number : ");
    scanf("%d", &n);

    while(n!=0)
    {
        digit = n%10 ;
        prod *= digit ;
        n = n/10 ;
    }

    printf("Product of the number = %d", prod);
    return 0 ;
}*/



// 12. Program to find factorial of any number 
/*#include<stdio.h>
int main()
{
    int n, fact=1, i;
    printf("Enter the number : ");
    scanf("%d", &n);

    for(i=1 ; i<=n ; i++)
    {
        fact *= i ;
    }

    printf("%d! = %d\n", n, fact);
    return 0 ;
}*/



// 13. Program to convert binary number to decimal number ;
/*#include<stdio.h>
int main()
{
    int n, rem, d , dec=0, j=1;
    printf("Enter the number in binary : ");
    scanf("%d", &n);

    while(n != 0)
    {
        rem = n%10 ;
        d = rem * j ;
        dec += d ;
        j *= 2 ; 
        n = n/10 ;
    }

    printf("Decimal : %d\n", dec);
    return 0 ;
}*/


// 13.1 Write the program to find the power of a number without using library 
/*#include<stdio.h>

int power(int *n, int *p) ;

int main()
{
    int n , p , pow, temp ;
    printf("Enter a number  : ");
    scanf("%d", &n);
    printf("Enter the power : ");
    scanf("%d", &p);

    temp = n ;

    pow = power(&n, &p) ;

    printf("%d^%d = %d\n", temp, p, pow);

    return 0 ;
}


int power(int *n, int *p)
{
    int temp ;
    temp = *n ; 

    for(int i=1 ; i < *p ; i++)
    {
        *n *= temp ;
    }
    return *n ;
}*/



// 17. Program to print 1 to 10 using for loop
/*#include<stdio.h>
int main()
{
    for(int i=1 ; i<=10 ; i++)
    {
        printf("%d ", i);
    }
    return 0 ;
} */



// 18. Program to print number in reverse order with diffrence 2
/*#include<stdio.h>
int main()
{
    for(int i=10 ; i>=1 ; i-=2)
    {
        printf("%d ", i);
    }
    return 0 ;
}*/



// 19. Multiply two positive numbers without using * operation 
/*#include<stdio.h>
int main()
{
    int a, b, sum=0;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    for(int i=1 ; i<=b ; i++)
    {
        sum += a ; 
    }
    printf("%d * %d = %d\n", a, b, sum);
    return 0 ;
}*/



// 20. Find sum of series upto n terms 
/*#include<stdio.h>
int main()
{
    int n, sum=0; 
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=0 ; i<=n ; i++)
    {
        sum += i ;
    }
    printf("Sum of %d numbers : %d", n, sum);
    return 0 ;
}*/


// 21. Program to generate fibonacci series
/*#include<stdio.h>
int main()
{
    int n, n1, n2, n3 ; 
    printf("Enter thr number : ");
    scanf("%d", &n);

    n1 = 0 ; 
    n2 = 1 ; 
    printf("%d ", n1);
    printf("%d ", n2);

    for(int i=0 ; i<=n ; i++)
    {
        n3 = n1 + n2 ;
        printf("%d ", n3) ;
        n1 = n2 ;
        n2 = n3 ; 
    }
    return 0 ;
}*/



// 22. Sum of digit of any number 
/*#include<stdio.h>
int main()
{
    int n, digit, sum=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for( ; n!=0 ; n=n/10)
    {
        digit = n%10 ;
        sum += digit ;
    }
    printf("Sum of digit = %d\n", sum);
    return 0 ;
}*/



// 23. Program to show use of comma operator in for loop
/*#include<stdio.h>
int main()
{
    int i, j ;
    for(i=0, j=10 ; i<=j ; i++, j--)
    {
        printf("i = %d\tj = %d\n", i, j) ;
    }
    return 0 ;
}*/



// 24. Program to understand nesting in for loop
/*#include<stdio.h>
int main()
{
    int i, j;
    for(i=0 ; i<=3 ; i++)
    {
        printf("i = %d\t", i);
        for(j=0 ; j<=3 ; j++)
        {
            printf("j=%d  ", j);
        }
        printf("\n");
    }
    return 0 ;
}*/



// 25. Program to check Armstrong number
/*#include<stdio.h>

int power(int *n , int *p) ;

int main()
{
    int n , digit, count=0, pow, sum=0, temp;
    printf("Enter the number : ");
    scanf("%d", &n);
    temp = n ;

    while(n!=0)
    {
        digit = n%10 ;
        count++ ;
        n = n/10 ;
    }

    n = temp ;

    while(n!=0)
    {
        digit = n%10 ;
        pow = power(&digit, &count) ;
        sum += pow ;
        n = n/10 ;
    }

    if(sum == temp)
    {
        printf("It is an armstrong number");
    }
    else
    {
        printf("It is not an armstrong number") ;
    }

    return 0 ;
}

int power(int *n, int *p)
{   int temp ;

    temp = *n ;

    for(int i=1 ; i<*p ; i++)
    {
        *n *= temp ; 
    }

    return *n ;
}*/


// 25.1 Program to print Armstrong number 
/*#include<stdio.h>
int main()
{
    int n, digit, sum, temp;
    printf("Armstrong numbers are : ");

    for(n=100 ; n<= 999 ; n++)
    {
        temp = n ;
        sum = 0 ;
        while(temp!=0)
        {
            digit = temp%10 ;
            sum += (digit * digit * digit);
            temp = temp/10 ;
        }

        if(sum == n)
        {
            printf("%d ", n);
        }

    }

    return 0 ;
}*/



// 26. Program to find the sum of digit until the sum is reduced to 1 digit
/*#include<stdio.h>

int sod(long int *n) ;

int main()
{
    long int n ;
    int sumod ;

    printf("Enter the number : ");
    scanf("%d", &n);

    sumod = sod(&n) ;

    do
    {
        sumod = sod(&n);
        n = sumod ; 
        printf("%d  ", sumod);
    } while(sumod>=10) ;

    return 0 ;
}

int sod(long int *n)
{
    int digit, sum=0, temp;

    temp = *n ;

    while(temp != 0)
    {
        digit = temp%10 ;
        sum += digit ;
        temp = temp/10 ;
    }

    return sum ; 
}*/



// 27. Program to understand use of break
/*#include<stdio.h>
int main()
{
    int n ;
    for(n=1 ; n<=5 ; n++)
    {
        printf("%d  ", n) ;
        if(n==3)
        {
            break ;
        }
    }

    return 0 ;
}*/



//28. Program to find whether the number is prime or not 
/*#include<stdio.h>
int main()
{
    int n, i, flag=1;
    printf("Enter a number : ");
    scanf("%d", &n);

    for(i=2 ; i<n ; i++)
    {
        if((n%i) == 0)
        {
            flag = 0 ;
            break ;
        }
    }

    if(flag == 1)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }

    return 0 ;
}*/



// 29. Program to undrstand continue statement
/*#include<stdio.h>
int main()
{
    int n ;
    for(n=1 ; n<=5 ; n++)
    {
        if(n==3)
        {
            continue;    // continue statement is used when we need to go to next iteration after skipping statement of the loop
        } 

        printf("%d ", n) ;
    }

    return 0 ;
}*/



// 30. Program to print sum and average of the 10 positive integers
/*#include<stdio.h>
int main()
{
    int n, i=1, sum=0;
    printf("Enter 10 numbers :\n");
    while(i<=10)
    {
        printf("Enter the %d number : ", i) ;
        scanf("%d", &n) ;
        if(n<0)
        {
            printf("Enter positive numbers");
            continue ;
        }
        sum += n ;
        i++ ;
    }

    printf("SUM = %d\nAverage = %d\n", sum, sum/10);

    return 0 ;
}*/



// 32. Program to understand switch control statement
/*#include<stdio.h>
int main()
{
    int choice;
    printf("Enter the choice : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1  : printf("First\n");
        case 2  : printf("Second\n");
        case 3  : printf("Third\n");
        default : printf("Wrong choice!\n") ;
    }

    return 0 ;
}*/



// 33. Program to understand switch with break statement
/*#include<stdio.h>
int main()
{
    int choice;
    printf("Enter the choice : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1  : printf("First\n"); break ;
        case 2  : printf("Second\n"); break ;
        case 3  : printf("Third\n"); break ;
        default : printf("Wrong choice!\n") ;
    }

    return 0 ;
}*/



// 34. Program to perform arithmatic calculator in integers
/*#include<stdio.h>
int main()
{
    int a, b;
    char op ;
    printf("Enter number , Operation and another number  : ");
    scanf("%d%c%d", &a, &op, &b);

    switch(op)
    {
        case '+' : printf("SUM = %d", a+b); break ;
        case '-' : printf("DIF = %d", a-b); break ;
        case '*' : printf("MUL = %d", a*b); break ;
        case '/' : printf("DIV = %.2f", (float)a/b); break ;
        case '%' : printf("MOD = %d", a%b); break ;
        default  : printf("Invalide Operation"); 
    }

    return 0 ;
}*/



// 35. Program to find the whether the alphabet is vowel or consonant
/*#include<stdio.h>
int main()
{
    char ch ;
    printf("Enter a character : ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
                    printf("Alphabet is a vowel\n") ;
                    break ;
        default  : printf("Alphabet is consonant\n");
    }

    return 0 ;
}*/



// 36. A menu driven program using infinite loop switch
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice ;

    while(1)       // infinite loop
    {
        printf("1.Create Address book\n");
        printf("2.Create new contact\n");
        printf("3.Edit the contact\n");
        printf("4.Delete the contact\n");
        printf("5.Display the contact list\n");
        printf("6.Exit\n");

        printf("\nEnter Your Choice : ");
        scanf("%d", &choice) ;
        switch(choice)
        {
            case 1 : printf("Address book created.....\n\n") ; break ;
            case 2 : printf("Created new contact.....\n\n") ; break ;
            case 3 : printf("Contact Edited.....\n\n") ; break ;
            case 4 : printf("Contact deleted.....\n\n") ; break ;
            case 5 : printf("Contact Displayed.....\n\n") ; break ;
            case 6 : exit(1) ;                                          // loop exits
            default : printf("Wrong Choice\n") ;
        }
    }
    return 0 ;
}*/



// 37. Program to check whether the date entered is valid or not. Assume that dates between year 1850 and 2050
/*#include<stdio.h>
int main()
{
    int d, m, y ;
    int flag = 1 , isLeap=0;
    printf("Enter the (dd/mm/yyyy) : ") ;
    scanf("%d/%d/%d", &d, &m, &y);

    if(y%100 !=0 && y%4 ==0 || y%400==0)
    {
        isLeap = 1 ;
    }

    if(y<1850 || y>2050 || m<1 || m>12 || d<1 || d>31)
    {
        flag = 0 ;
    }
    else if(m==2)
    {
        if(d>30 || (d==29 && !isLeap))
        {
            flag = 0;
        }
    }
    else if(m==4 || m==6 || m==8 || m==10 || m==12)
    {
        if(d>=30)
        {
            flag = 0 ;
        }
    }

    if(flag == 0)
    {
        printf("Invalide Date") ;
    }
    else
    {
        printf("Valid date");
    }

    return 0;
}*/



// 38. Program to find number of notes required for a given amount of money
/*#include<stdio.h>
int main()
{
    int n, choice, notes;
    printf("Enter the total numbers of rupees : ");
    scanf("%d", &n);
    printf("Enter the value of note from which you want to begin : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 500 : notes = n/500 ;
                   printf("Number of 500 notes = %d\n", notes);
                   n = n%500 ;
        case 100 : notes = n/100 ;
                   printf("Number of 100 notes = %d\n", notes);
                   n=n%100 ;
        case 50 : notes = n/50 ;
                  printf("Number of 50 notes  = %d\n", notes);
                  n = n%50 ;
        case 20 : notes = n/20 ;
                  printf("Number of 20 notes  = %d\n", notes);
                  n=n%20 ;
        case 10 : notes = n/10;
                  printf("Number of 10 notes  = %d\n", notes);
                  n = n%10 ;
        case 5 : notes = n/5 ;
                 printf("Number of 5 notes   = %d\n", notes);
                 n=n%5 ; 
        case 2 : notes = n/2 ;
                 printf("Number of 2 notes   = %d\n", notes);
                 n = n%2 ;
        case 1 : notes = n/1 ;
                 printf("Number of 1 notes   = %d\n", notes);
                 n=n%1 ;  
                 break ;                              
        default : printf("Enter only valid values\n");
                  break ;
    }
    return 0 ;
}*/





/*--------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                     PATTERN  PRINTING
---------------------------------------------------------------------------------------------------------------------------------------------------------------*/

// 1.a
/*#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0 ;
}*/



// 1.b
/*#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("%d", i) ;
        }
        printf("\n");
    }
    return 0 ;
}*/



// 1.c
/*#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0 ;
}*/



// 1.d
/*#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("%d", i+j);
        }
        printf("\n");
    }
    return 0 ;
}*/



// 1.e
/*#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            if((i+j)%2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0 ;
}*/


// 1.f
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("*");
            printf("%d", i);
        }
        printf("\n");
    }
    return 0 ;
}