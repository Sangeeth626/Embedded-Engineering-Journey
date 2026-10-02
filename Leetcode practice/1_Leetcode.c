// 1. Two SUM (first try)

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE] ;
    int i, j, limit, target;

    printf("Enter the limit : ") ;
    scanf("%d", &limit);

    printf("Enter %d array elements : ", limit);
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the target : ");
    scanf("%d", &target);

    for(i=0 ; i<limit ; i++)
    {
        for(j=i+1 ; j<limit ; j++)
        {
            if(target == arr[i] + arr[j])
            {
                printf("[%d, %d]\n", i, j) ;
            }
        }
    }

    return 0 ;
}*/



// 1.1 Two SUM (leetcode function)
/*int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* result = (int*)malloc(2 * sizeof(int)) ;
    *returnSize = 2 ;

    for(int i=0 ; i<numsSize ; i++)
    {
        for(int j=i+1 ; j<numsSize ; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                result[0] = i ;
                result[1] = j ;
                return result ;
            }
        }
    }
    return 0 ;
}*/


// 1.2 Two SUM (Complete solution)

#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int* twoSum(int* nums, int numsSize, int target, int* returnSize) ;

int main()
{
    int nums[SIZE], returnSize;
    int numsSize, target;
    int* result ;

    printf("Enter the numsSize : ");
    scanf("%d", &numsSize) ;

    printf("Enter the numbers : ");
    for(int i=0 ; i<numsSize ; i++)
    {
        scanf("%d", &nums[i]) ;
    }

    printf("Enter the target : ");
    scanf("%d", &target) ;

    returnSize = 2 ;

    result = twoSum(nums, numsSize, target, &returnSize); 
    if(result != 0)
    {
        printf("[%d, %d]", result[0], result[1]) ;
        free(result) ;
    }
    else
    {
        printf("No solution found!") ;
    }
    
    return 0 ;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* result = (int*)malloc(2 * sizeof(int)) ;
    *returnSize = 2 ;

    for(int i=0 ; i<numsSize ; i++)
    {
        for(int j=i+1 ; j<numsSize ; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                result[0] = i ;
                result[1] = j ;
                return result ;
            }
        }
    }
    return 0 ;
}