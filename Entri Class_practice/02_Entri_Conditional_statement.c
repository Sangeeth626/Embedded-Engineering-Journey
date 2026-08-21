// 1. Wheater a number is positive or negative

/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n>0)
    {
        printf("%d is a positive integer\n",n);
    }
    else if(n<0)
    {
        printf("%d is a negative number\n",n);
    }
    else
    {
        printf("%d is zero\n",n);
    }
}*/


// 2. Grading system

/*#include<stdio.h>

int main()
{
    int mark ;
    printf("Enter our mark : ");
    scanf("%d",&mark);

    if(mark<=100 && mark >= 90)
    {
        printf("Grade A+");
    }
    else if(mark<90 && mark >= 80)
    {
        printf("Grade A");
    }
    else if(mark<80 && mark >= 70)
    {
        printf("Grade B+");
    }
    else if(mark<70 && mark >= 60)
    {
        printf("Grade B");
    }
    else if(mark<60 && mark >= 50)
    {
        printf("Grade C");
    }
    else if(mark<50 && mark >= 40)
    {
        printf("Grade D");
    }
    else if(mark<40)
    {
        printf("Grade F");
    }
    else
    {
        printf("Invalid mark");
    }

    return 0;
}*/


// 3. Zero , Negative or Positive(Odd or Even)

/*#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n==0)
    {
        printf("You entered zero");
        return;
    }
    if(n<0)
    {
        printf("%d is negative number",n);
        return;
    }
    else
    {
        printf("%d is positive number\n",n);

        if(n%2 == 0)
        {
            printf("%d is even number",n);
        }
        else
        {
            printf("%d is odd number",n);
        }
    }
    return 0;
}*/


// 4. write a program to print the correspoding day to the number given (1-7) (sunday to saturday). adn if any invalid input is given should print the message "Invalid Input)

/*#include<stdio.h>
int main()
{
    int day ;
    printf("Enter the day : ");
    scanf("%d",&day);

    if(day==1)
    {
        printf("Its Monday");
    }
    else if(day==2)
    {
        printf("Its Tuesday");
    }
    else if(day==3)
    {
        printf("Its Wednesday");
    }
    else if(day==4)
    {
        printf("Its Thrusday");
    }
    else if(day==5)
    {
        printf("Its Friday");
    }
    else if(day==6)
    {
        printf("Its Saturday");
    }
    else if(day==7)
    {
        printf("Its Sunday");
    }
    else
    {
        printf("Invalid Day");
    }
}*/

