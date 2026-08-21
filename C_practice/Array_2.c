// 1. Count Even and Odd number 

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int limit, a[SIZE], i, Even_count=0, Odd_count=0 ;

    printf("Enter the limit : ");
    scanf("%d",&limit);
    if(limit<=0 || limit > SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

    printf("Enter %d elements : ", limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0 ; i<limit ; i++)
    {
        if(a[i]%2 == 0)
        {
            Even_count++ ;
        }
        else
        {
            Odd_count++ ;
        }
    }
    printf("There are %d even number and %d odd number", Even_count, Odd_count);

    return 0;
}*/


// 2. Positive , Negative or Zero

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int limit, a[SIZE], i, positive_count=0, negative_count=0, zero_count=0;
// LIMIT
    printf("Enter the limit : ");
    scanf("%d", &limit);
    if(limit <= 0 || limit > SIZE )
    {
        printf("Invalid limit");
        return 0;
    }
// INPUT
    printf("Enter %d elements : ", limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]);
    }
// CORE PART and OUTPUT
    for(i=0 ; i<limit ; i++)
    {
        if(a[i]<0)
        {
            negative_count++ ;
        }
        else if(a[i]>0)
        {
            positive_count++ ;
        }
        else
        {
            zero_count++ ;
        }
    }
    printf("There are %d positive number , %d negative number and %d zero", positive_count, negative_count, zero_count) ;

    return 0;
}*/


// 3. Find the frequency of a given number

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int limit, a[SIZE], i, count=0, search_number;
// LIMIT
    printf("Enter the limit : ");
    scanf("%d",&limit);
    if(limit <= 0 || limit > SIZE)
    {
        printf("Invalid limit");
        return 0;
    }
// INPUT
    printf("Enter %d numbers : ", limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]);
    }
// CORE PART and OUTPUT
    printf("Enter the number to be searched : ");
    scanf("%d",&search_number);
    for(i=0 ; i<limit ; i++)
    {
        if(a[i] == search_number)
        {
            count++ ;
        }
    }
    
    if(count == 0)
    {
        printf("%d is not present in array",search_number);
    }
    else
    {
        printf("%d is repeating %d times", search_number, count);
    }

    return 0;
}*/


// 4. Linear Search

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int limit, a[SIZE], i, search_number, flag=0, count=0;
// LIMIT   
    printf("Enter the limit : ");
    scanf("%d", &limit);
    if(limit<=0 || limit>SIZE)
    {
        printf("Invalid limit");
        return 0;
    }
// INPUT
    printf("Enter %d elements : ", limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]);
    }
// CORE PART and OUTPUT
    printf("Enter the number to be searched : ");
    scanf("%d",&search_number);

    printf("%d found at position : ", search_number);
    for(i=0; i<limit ; i++)
    {
        if(a[i] == search_number)
        {
            flag = 1 ;
            count++ ;
            printf("%d ", i+1);
        }
    }

    if(flag == 0)
    {
        printf("\n%d is not found in array", search_number);
        return 0 ;
    }

    printf("\n%d is found %d times", search_number, count);

    return 0;
}*/


// 5. Binary Search

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int limit, a[SIZE], i, low, high, mid, search_number ;

// LIMIT
    printf("Enter the limit : ");
    scanf("%d",&limit);
    if(limit<=0 || limit>SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

// INPUT
    printf("Enter %d elements in sorted order : ",limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]);
    }

// BINARY SEARCH
    low = 0;
    high = limit - 1;
    mid = (low + high) / 2 ;

    printf("Enter the number to be searched : ");
    scanf("%d", &search_number);

    while(low<=high)
    {
        mid = (low + high) / 2 ;
        if(a[mid] == search_number)
        {
            printf("%d is found at position %d", search_number, mid+1);
            return 0 ;
        }
        else if(a[mid] > search_number)
        {
            high = mid - 1 ;
        }
        else
        {
            low = mid + 1 ;
        }
    }
    printf("%d is not found in the array.", search_number);

    return 0;
}*/


// 6. BUBBLE SORT

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int a[SIZE], limit, i, j, temp=0, swapped ;

// LIMIT
    printf("Enter the limit : ");
    scanf("%d",&limit);
    if(limit<=0 || limit>SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

// INPUT
    printf("Enter %d elements : ",limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]);
    }

// BUBBLE SORT
    for(i=0 ; i < limit-1 ; i++)
    {
        swapped = 0;

        for(j=0 ; j < limit-i-1 ; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j] ;
                a[j] = a[j+1];
                a[j+1] = temp;

                swapped = 1;
            }
        }
        if(swapped == 0)
        {
            break;
        }
    }
// OUTPUT PRINTING
    printf("Sorted array : ");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d  ",a[i]);
    }

    return 0;
}*/


// 7. SELECTION SORT

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int limit, a[SIZE], i, j, minIndex=0 , temp=0 ; 

// LIMIT
    printf("Enter the limit : ");
    scanf("%d",&limit);
    if(limit<=0 || limit>SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

// INPUT
    printf("Enter %d elments : ", limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]);
    }

// SELECTION SORT
    for(i=0 ; i < limit-1 ; i++ )
    {
        minIndex = i;

        for(j=i+1 ; j < limit ; j++)
        {
            if(a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }

        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

// OUTPUT PRINTING
    printf("Sorted array    : ");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}*/


// 8. INSERTION SORT

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int limit, a[SIZE], i, j, key ;

// LIMIT
    printf("Enter the limit : ");
    scanf("%d",&limit);
    if(limit<=0 || limit>SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

// INPUT
    printf("Enter %d elements  : ", limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]);
    }   

// INSERTION SORT
    for(i=1 ; i<limit ; i++)
    {               
        key = a[i];
        j = i-1 ;

        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j] ;
            j-- ;
        }
        a[j+1] = key ;
    }

// PRINTING OUTPUT    
    printf("Sorted array     : ");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}*/

