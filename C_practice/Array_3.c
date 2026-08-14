// 1. REVERSE AN ARRAY

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int limit, a[SIZE], i, j ;

// LIMIT
    printf("Enter the limit  : ");
    scanf("%d",&limit);
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

// REVERSING 
    printf("Reversed array    : ");    
    i = limit - 1 ;
    while(i>=0)
    {
        printf("%d ",a[i]);
        i-- ;
    }

// note : Array does not actually revesed previously we only print array in reverse order
    printf("\nNew array       : ");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}*/

// 1.1 Actual Reversing

/*#include<stdio.h>
#define SIZE 10 
int main()
{
    int limit, a[SIZE], i, left, right, temp ;

// LIMIT
    printf("Enter the limit  : ");
    scanf("%d",&limit);
    if(limit<=0 || limit>SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

// INPUT
    printf("Enter %d elements : ", limit);
    for(i=0 ; i <limit ; i++)
    {
        scanf("%d", &a[i]);
    }

// REVERSING
    left = 0 ;
    right = limit - 1 ;

    while(left < right)
    {
        temp = a[left] ;
        a[left] = a[right] ;
        a[right] = temp ;

        left++ ;
        right-- ;
    }

// PRINTING OUTPUT
    printf("Reversed array   : ");
    for(i=0 ; i<limit ; i++ )
    {
        printf("%d ", a[i]);
    }

    return 0;
}*/


// 2. COPY ONE ARRAY TO ANOTHER

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int limit , a[SIZE], i, b[SIZE], temp=0 ;

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

// COPYING ARRAY 
    for(i=0 ; i<limit ; i++)
    {
        b[i] = a[i] ;
    }

// PRINTING OUTPUT
    printf("Array A : ");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nArray B : ");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}*/

// 2.1 Chaging an element from copied array

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int limit , a[SIZE], i, b[SIZE], temp=0 ;

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

// COPYING ARRAY 
    for(i=0 ; i<limit ; i++)
    {
        b[i] = a[i] ;
    }
    b[2] = 999 ;                  // note :  only this step

// PRINTING OUTPUT
    printf("Array A : ");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("\nArray B : ");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}*/


// 3. INSERT AN ELEMENT TO ARRAY

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int limit , a[SIZE], i, j, b[SIZE], insert_number, insert_position, arrayIndex ;

// LIMIT
    printf("Enter the limit  : ");
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

// COPYING ARRAY 
    for(i=0 ; i<limit ; i++)
    {
        b[i] = a[i] ;
    }

// INSERTING NEW ELEMENT TO ARRAY    
    printf("Enter the number to be inserted : ");
    scanf("%d",&insert_number);

    printf("Enter the position to be inserted : ");
    scanf("%d",&insert_position);
    if(insert_position < 1 || insert_position > limit + 1)
    {
        printf("Invalid position");
        return 0;
    }

    arrayIndex = insert_position - 1 ;

    j = limit-1;

    while(j>=arrayIndex)
    {
        b[j+1] = b[j];
        j-- ;                
    } 
    b[arrayIndex] = insert_number ;
    

// PRINTING OUTPUT
    printf("Original array   : ");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ", a[i]);
    }

    limit = limit + 1;
    printf("\nInserted array   : ");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}*/


// 4. DELETE AN ELEMENT FROM ARRAY

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int limit, a[SIZE], i, delete_position, arrayIndex ;

// LIMIT
    printf("Enter the limit  : ");
    scanf("%d",&limit);
    if(limit<=0 || limit>SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

// INPUT
    printf("Enter %d elements :", limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]);
    }

// DELETING ELEMENT
    printf("Enter which position element should be removed :  ");
    scanf("%d", &delete_position);
    if(delete_position<=0 || delete_position>limit)
    {
        printf("Invalid position");
        return 0;
    }

    i = delete_position - 1 ;

    while(i < limit-1)
    {
        a[i] = a[i+1] ;
        i++ ;
    }

    limit = limit - 1 ;

// PRINTING OUTPUT
    printf("New array        : ");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}*/


// 5. MERGE TWO ARRAY

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int limit1, limit2, limit, a[SIZE], b[SIZE], c[SIZE], i ;

// LIMIT
    printf("Enter the limit of first array   : ");
    scanf("%d",&limit1);
    if(limit1<=0 || limit1>SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

    printf("Enter the limit of second array  : ");
    scanf("%d",&limit2);
    if(limit2<=0 || limit2>SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

    if(limit1 + limit2 > SIZE)
    {
        printf("Merged array exceeds array size.");
        return 0;
    }

//INPUT
    printf("Enter %d elements for first array : ", limit1);
    for(i=0 ; i<limit1 ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter %d elements for second array: ", limit2);
    for(i=0 ; i<limit2 ; i++)
    {
        scanf("%d",&b[i]);
    }

// MERGING
    for(i=0 ; i<limit1 ; i++)
    {
        c[i] = a[i] ;
    }

    for(i=0 ; i<limit2 ; i++ )
    {
        c[i + limit1] = b[i];
    }

// PRINTING OUTPUT 
    limit = limit1 + limit2 ;

    printf("Merged array : ");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}*/


// 6. LEFT ROTATION BY ONE POSITION 

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int limit, a[SIZE], i, temp=0, rotateNumber;

// LIMIT
    printf("Enter the limit    : ");
    scanf("%d",&limit);
    if(limit<=0 || limit>SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

// INPUT
    printf("Enter %d elements   : ", limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]) ;
    }

// LEFT ROTATION
    temp = a[0];

    i = 0 ;
    while(i < limit-1)
    {
        a[i] = a[i+1] ;
        i++ ;
    }    

    a[limit - 1] = temp ;
      
// PRINTING OUTPUT
    printf("Left rotated array : ");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ", a[i]); 
    }

    return 0;
}*/


// 7. RIGHT ROTATION BY ONE POSITION

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int limit, a[SIZE], i, temp=0 ;

// LIMIT
    printf("Enter the limit    : ");
    scanf("%d",&limit);
    if(limit<=0 || limit>SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

// INPUT
    printf("Enter %d elements   : ", limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]) ;
    }

// LEFT ROTATION
    temp = a[limit - 1];

    i = limit - 2 ;
    while(i >= 0)
    {
        a[i+1] = a[i] ;
        i-- ;
    }    

    a[0] = temp ;
      
// PRINTING OUTPUT
    printf("Right rotated array: ");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ", a[i]); 
    }

    return 0;
}*/


// 8. REMOVE DUPLICATE ELEMENTS

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int limit, a[SIZE], i, j, k;

// LIMIT
    printf("Enter the limit    : ");
    scanf("%d",&limit);
    if(limit<=0 || limit>SIZE)
    {
        printf("Invalid limit");
        return 0;
    }

// INPUT
    printf("Enter %d elements   : ", limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d",&a[i]) ;
    }

// REMOVE DUPLICATE
    for(i=0 ; i<limit ; i++)
    {
        for(j=i+1 ; j<limit ; j++)
        {
            if(a[i] == a[j])
            {
                k = j ;                        //note : i for outer loop , j for comparison , k for shifting
                while(k< limit-1)                    
                {                              // note : k is used for shifting because , when there is no k , then j perform both comparison and shifting so j value become 4 and exit we cannot bring back j and decrese so we use extra k varible
                    a[k] = a[k+1];
                    k++ ;
                }
                limit = limit - 1 ;
                j = j-1 ;
            }
        }
    }

// PRINTING OUTPUT
    printf("New array : ");
    for(i=0 ; i<limit ; i++)
    {
        printf("%d ",a[i]);
    }    

    return 0;
}*/

