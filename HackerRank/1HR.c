// 1. Updating a value using pointer

/*#include<stdio.h>

void update(int *a, int *b);

int main()
{
    int a, b ;
    int *pa=&a , *pb=&b ;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    update(pa, pb);

    printf("a = %d\nb = %d\n", a, b);

    return 0 ;
}

void update(int *a, int *b)
{
    int temp ;
    temp = *a ;

    *a = *a + *b ;
    *b = temp - *b ;

    if(*b < 0)
    {
        *b = -*b ;
    }
}*/


// 2. Condition statement 1

/*#include<stdio.h>
int main()
{
    int n ;

    printf("Enter a number : ");
    scanf("%d", &n);
    if(n<=0 || n>1000000000)
    {
        return 0 ;
    }
    
    if(n==1)
    {
        printf("one");
    }
    else if(n==2)
    {
        printf("two");
    }
    else if(n==3)
    {
        printf("three");
    }
    else if(n==4)
    {
        printf("four");
    }
    else if(n==5)
    {
        printf("five");
    }
    else if(n==6)
    {
        printf("six");
    }
    else if(n==7)
    {
        printf("seven");
    }
    else if(n==8)
    {
        printf("eight");
    }
    else if(n==9)
    {
        printf("nine");
    }
    else
    {
        printf("Greater than nine");
    }

    return 0 ;
}*/


// 3. Condition statement 2

/*For each integer n in the interval [a,b] (given as input) :
If 1<=n<=9 , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if n>9  and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd". */

/*#include<stdio.h>

void print_word(int i);

int main()
{
    int a, b ;
    printf("Enter the range : ");
    scanf("%d %d", &a, &b);

    if(a>=1 && b<=9)
    {
        for(int i=a ; i<=b ; i++)
        {
            print_word(i);
            printf("\n") ;
        }
        
        return 0 ;
    }

    for(int i=a ; i<=9 ; i++)
    {
        print_word(i);
        printf("\n") ;
    }

    for(int i=10 ; i<=b ; i++)
    {
        if(i%2 == 0)
        {
            printf("even");
            printf("\n") ;
        }
        else
        {
            printf("odd");
            printf("\n") ;
        }
    }

    return 0 ;
}

void print_word(int i)
{
    if(i==1)
    {
        printf("one");
    }
    else if(i==2)
    {
        printf("two");
    }
    else if(i==3)
    {
        printf("three");
    }
    else if(i==4)
    {
        printf("four");
    }
    else if(i==5)
    {
        printf("five");
    }
    else if(i==6)
    {
        printf("six");
    }
    else if(i==7)
    {
        printf("seven");
    }
    else if(i==8)
    {
        printf("eight");
    }
    else if(i==9)
    {
        printf("nine");
    }
}*/



// 4. Sum of digit of five digit number

/*#include<stdio.h>
int main()
{
    int n, digit, sum=0;

    printf("Enter a number : ");
    scanf("%d", &n);
    if(n<1000 && n>99999)
    {
        return 0 ;
    }

    while(n!=0)
    {
        digit = n%10 ;
        sum += digit ;
        n = n/10 ;
    }

    printf("Sum of digit = %d\n", sum);

    return 0 ;
}*/


// 5. Bitwise operation

/*
Function Description
Complete the calculate_the_maximum function in the editor below.

Calculate_the_maximum has the following parameters:
int n: the highest number to consider
int k: the result of a comparison must be lower than this number to be considered

Prints
Print the maximum values for the and, or and xor comparisons, each on a separate line.*/

/*#include<stdio.h>
int main()
{
    int n, k, max_AND=0, max_OR=0, max_XOR=0;

    printf("Enter the n and k : ");
    scanf("%d%d", &n, &k);

    for(int i=1 ; i<n ; i++)
    {
        for(int j=i+1 ; j<=n ; j++)
        {
            if((i&j) < k)
            {
                if((i&j) > max_AND)
                {
                    max_AND = i&j ;
                }
            }
            
            if((i|j) < k)  
            {
                if((i|j) > max_OR)
                {
                    max_OR = i|j ;
                }
            }

            if((i^j) < k)
            {
                if((i^j) > max_XOR)
                {
                    max_XOR = i^j ;
                }
            }
        }
    }

    printf("max_AND = %d\n", max_AND);
    printf("max_OR  = %d\n", max_OR);
    printf("max_XOR = %d\n", max_XOR);

    return 0 ;
}*/


// 6. Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  places after the decimal.

/*#include<stdio.h>
#define SIZE 100
int main()
{
    int arr[SIZE], limit;
    int positive_num_count=0, negative_num_count=0, zero_count=0;
    float a, b, c ;
    
    printf("Enter the size of array : ");
    scanf("%d", &limit);
    if(limit<0 && limit<SIZE)
    {
        return 0 ;
    }

    for(int i=0 ; i<limit ; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]<100 && arr[i]>100)
        {
            return 0 ;
        }
    }

    for(int i=0 ; i<limit ; i++)
    {
        if(arr[i]>0)
        {
            positive_num_count++ ;
        }
        else if(arr[i]<0)
        {
            negative_num_count++ ;
        }
        else if(arr[i] == 0)
        {
            zero_count++ ;
        }
    }

    a = positive_num_count ;
    b = negative_num_count;
    c = zero_count;
    printf("%.7f\n", a/limit);
    printf("%.7f\n", b/limit);
    printf("%.7f\n", c/limit);

    return 0 ;
}*/


// 7. Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int arr[SIZE], limit, max_sum=0, min_sum=0;
    int temp ;

    printf("Enter the limit : ");
    scanf("%d\n", &limit);
    if(limit<=0 && limit>SIZE)
    {
        return 0 ;
    }

    for(int i=0 ; i<limit ; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    for(int i=0 ; i<limit ; i++)
    {
        for(int j=0 ; j<limit; j++)
        {
            if(arr[j+1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
            }
        }
    }

    for(int i=0 ; i<limit ; i++)
    {
        printf("%d ", arr[i]);
    }

    for(int i=1 ; i<limit ; i++)
    {
        max_sum += arr[i] ;
    }

    for(int i=0 ; i<limit-1 ; i++)
    {
        min_sum += arr[i] ;
    }

    printf("\n%d\n", max_sum);
    printf("%d\n", max_sum);

    return 0 ;
}*/

// 7.1 Abstracted version

/*#include<stdio.h>
#define SIZE 5
int main()
{
    long int arr[SIZE];
    int temp, max_sum=0, min_sum=0 ;


    for(int i=0 ; i<SIZE ; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    for(int i=0 ; i<SIZE ; i++)
    {
        for(int j=0 ; j<SIZE; j++)
        {
            if(arr[j+1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
            }
        }
    }


    for(int i=1 ; i<SIZE ; i++)
    {
        max_sum += arr[i] ;
    }

    for(int i=0 ; i<SIZE-1 ; i++)
    {
        min_sum += arr[i] ;
    }

    printf("%d %d\n", min_sum, max_sum);

    return 0 ;
}*/




