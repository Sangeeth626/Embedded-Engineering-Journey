// 1. Declare an array of 5 integers and print all elements.

/*#include<stdio.h>
int main()
{
    int a[5] = {1,3,5,7,9} , i;

    for(i=0 ; i<5 ; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}*/

// 1.1 Good practice (Defining the size)

/*#include<stdio.h>

#define SIZE 5

int main()
{
    int a[SIZE] = {1,3,5,7,9};

    for(int i = 0; i < SIZE; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}*/


// 2. Read 10 integers from the user and print them using an array

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE], i;

    printf("Enter the number : ");

// INPUT
    for(i=0 ; i<SIZE ; i++)
    {
        scanf("%d",&a[i]);
    }

// OUTPUT
    for(i=0 ; i<SIZE ; i++)
    {
        printf("%d = %d\n" ,i, a[i]);
    }

    return 0;
}*/


// 3. Read 5 floating-point numbers and print them

/*#include <stdio.h>
#define SIZE 5
int main()
{
    int i ;
    float a[SIZE] ;

    printf("Enter 5 floating point numbers : \n");

// INPUT
    for(i=0 ; i<SIZE ; i++)
    {
        scanf("%f",&a[i]);
    }

 //OUTPUT   
    for(i=0 ; i<SIZE ; i++)
    {
        printf("%d = %.2f\n",i ,a[i]);
    }

    return 0;
}*/


// 4. Store {11,22,33,44,55} in an array and print each element on a new line.

/*#include<stdio.h>
#define SIZE 5
int main()
{
    int a[SIZE] = {11,22,33,44,55} , i ;

    for(i=0 ; i<SIZE ; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}*/


// 5. Read n integers (n <= 100)

/*#include<stdio.h>
#define SIZE 100
int main()
{
    int a[SIZE], limit, i;

    printf("Enter a limit : ");
    scanf("%d",&limit);

    if(limit <= 0 || limit > SIZE)
    {
        printf("Invalid limit.");
        return 0;
    }

    printf("Enter %d numbers : ", limit);

// INPUT
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]);
    }
//OUTPUT
        for(i=0 ; i<limit ; i++)
    {
        printf("%d  ",a[i]);
    }    

    return 0;
}*/


// 6. Print first and last element

/*#include<stdio.h>
#define SIZE 5
int main()
{
    int a[5]={11,22,33,44,55} ;

    printf("First element = %d \n",a[0]);
    printf("Last element = %d ", a[SIZE - 1]);

    return 0;
}*/


// 7. Update third element to 999

/*#include <stdio.h>
#define SIZE 5
int main ()
{
    int a[SIZE]={10,20,30,40,50} , i ;

    a[2] = 999 ;

    for(i=0 ; i<SIZE ; i++)
    {
        printf("%d  ",a[i]);
    }

    return 0;
}*/


 
        //*******LEVEL 2*******//


// 1. Sum of array elements

/*#include<stdio.h>
#define SIZE 100
int main()
{
    int a[SIZE] ,i ,sum=0, limit;

    printf("Enter the size of array : ");
    scanf("%d",&limit);

    printf("Enter %d array elements : ", limit);
// INPUT
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d", &a[i]);
    }


    for(i=0 ; i<limit ; i++)
    {
        sum += a[i];
    }
    printf("SUM = %d", sum);

    return 0;
}*/


// 2. Average of array elements

/*#include <stdio.h>
#define SIZE 100
int main()
{
    int  limit , i;
    float a[SIZE], sum =0;

    printf("Enter the limit : ");
    scanf("%d",&limit);

    if(limit <= 0 || limit > SIZE)
    {
        printf("Invalid limit.");
        return 0;
    }

    printf("Enter %d elements : ",limit);

    for(i=0 ; i<limit ; i++)
    {
        scanf("%f",&a[i]);
    }

    for(i=0 ; i<limit ; i++)
    {
        sum += a[i];
    }
    printf("Sum = %.2f\n",sum);
    printf("Average = %.2f", (float) sum/limit);

    return 0;
}*/


// 3. Find the largest element in an array

/*#include<stdio.h>
#define SIZE 100
int main()
{
    int a[SIZE], i, limit;

    printf("Enter the size of array : ");
    scanf("%d",&limit);

    if(limit<=0 || limit>SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

    printf("Enter %d elements : ",limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]);
    }

    int largest = a[0];
    for(i=1 ; i<limit ; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
    }
    printf("Largest number is %d ", largest);

    return 0;
}*/


// 4. Find the smallest element in an array

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE], limit, i, smallest ;
    printf("Enter the limit : ");
    scanf("%d",&limit);

    if(limit<=0 || limit>SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

    printf("Enter %d elements : ", limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]);
    }

    smallest = a[0];
    for(i=1 ; i<limit ; i++)
    {
        if(a[i]<smallest)
        {
            smallest = a[i];
        }
    }
    printf("Smallest element is %d", smallest);
}*/


// 5. Find the second largest element in an array

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE],i ,limit, largest, secondlargest;

    printf("Enter the limit : ");
    scanf("%d",&limit);

    if(limit<=0 || limit>SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

    printf("Enter %d elements : ",limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]);
    }

    largest = a[0];
    secondlargest = a[0];
    for(i=1 ; i<limit ; i++)
    {
        if(a[i] > largest)
        {
            secondlargest = largest ;
            largest = a[i];
        }
        else if(a[i] > secondlargest && a[i] != largest)
        {
            secondlargest = a[i];
        }
    }
    printf("Largest element is %d\n", largest);
    printf("Second largest element is %d", secondlargest);

    return 0;
}*/


// 6. Find the second smallest element in an array

/*#include<stdio.h>
#include<limits.h>
#define SIZE 10
int main()
{
    int a[SIZE], limit, i, smallest = INT_MAX , secondsmallest = INT_MAX;

    printf("Enter the limit : ");
    scanf("%d",&limit);

    if(limit<=2 || limit>SIZE)                    // note : limit<=2
    {
        printf("Invalid limit");
        return 0 ;
    }

    printf("Enter %d elements : ", limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]);
    }

    if(a[0] < a[1])
    {
        smallest = a[0];
        secondsmallest = a[1];
    }
    else
    {
        smallest = a[1];
        secondsmallest = a[0];
    }

    for(i=2 ; i<limit ; i++)
    {
        if(a[i]<smallest)
        {
            secondsmallest = smallest;
            smallest = a[i];
        }
        else if(a[i]<secondsmallest && a[i] != smallest)
        {
            secondsmallest = a[i];
        }
    }
    printf("Smallest element is %d\n", smallest);
    printf("Second smallest element is %d", secondsmallest);

    return 0;
}*/
