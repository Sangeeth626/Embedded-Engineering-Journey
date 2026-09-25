
#include <stdio.h>
#include <stdlib.h> //required for dynamic memory allocation

int main()
{
    int n = 2;
    //int *arr = (int *) malloc(n * sizeof(int));
    int *arr = (int *) calloc(n, sizeof(int));

    
    if(arr == NULL)
    {
        printf("Memory Allocation Failed!.\n");
        return 1;
    }


     printf("Before updating values :"); //to print from a newline
    //printing before assigning values into array
    for(int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    //assigning values into array
    for(int i = 0; i < n; ++i)
        arr[i] = i + 10;
    printf("\nAfter updating values :"); 
    //printing the array elements
    for(int i = 0; i < n; ++i)
        printf("%d ", arr[i]);

    int *temp =(int *) realloc(arr, 5 * sizeof(int)); //updated with new size
    
    if(temp == NULL)
    {
        printf("Re-allocation Failed!\n");
        return 1;
    }
    
    arr = temp; //safe update

    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
     printf("\nAfter updating values :"); 
    //printing the array elements
    for(int i = 0; i < 5; ++i)
        printf("%d ", arr[i]);
    //freeing memory
    free(arr); //memory freed
    arr = NULL;
    
    return 0;
}