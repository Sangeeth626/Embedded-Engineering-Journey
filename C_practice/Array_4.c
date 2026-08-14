// 1. Read and display matrix

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int a[SIZE][SIZE], rows, columns,  i, j ;

// ROWS AND COLOUMN    
    printf("Enter the number of rows   : ");
    scanf("%d",&rows);
    printf("Enter the number of column : ");
    scanf("%d",&columns);

    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }
// INPUT
    printf("Enter the matrix elements  :\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
// OUTPUT PRINTING
    printf("\nMatrix :\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }    

    return 0;
}*/


// 2. Sum of all elements in Matrix

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE][SIZE], rows, columns, i, j, sum=0 ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : ");
    scanf("%d",&rows);
    printf("Enter the number of columns : "); 
    scanf("%d",&columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }

//  INPUT 
    printf("Enter the matrix elements  :\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// SUM 
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            sum += a[i][j];
        }
    }

// PRINTING OUTPUT 
    printf("Sum of elements = %d", sum); 

    return 0;
}*/


// 3. Row-wise Sum of a Matrix

/*#include<stdio.h>
#define SIZE 10 
int main()
{
    int a[SIZE][SIZE], rows, columns, i, j, sum=0 ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : ");
    scanf("%d",&rows); 
    printf("Enter the number of columns : ");
    scanf("%d",&columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }    

// INPUT
    printf("Enter the matrix elements :\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }    

// ROW-WISE SUM 
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            sum += a[i][j];
        }
        printf("Sum of row %d = %d", i+1, sum );
        sum = 0 ;
    }    

    return 0 ;   
}*/


// 4. Column-wise Sum of Matrix

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE][SIZE], rows, columns, i, j, sum=0 ;

// ROWS AND COLUMNS 
    printf("Enter the number of rows    : ");
    scanf("%d", &rows); 
    printf("Enter the number of columns : ");
    scanf("%d", &columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0; 
    }

// INPUT 
    printf("Enter the matrix elements :\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    } 
    
// COLUMN-WISE SUM
    for(j=0 ; j<columns ; j++)
    {
        sum = 0 ;

        for(i=0 ; i<rows ; i++)
        {
            sum += a[i][j];
        }
        printf("Sum of column %d = %d\n", j+1, sum);        
    }    
    
    return 0;
}*/


// 5. Largest Element in a Matrix

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE][SIZE], rows, columns, i, j, largest ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : "); 
    scanf("%d", &rows); 
    printf("Enter the number of columns : ");
    scanf("%d", &columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }

// INPUT
    printf("Enter the matrix elements :\n ");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// LARGEST ELEMENT
    largest = a[0][0];

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            if(a[i][j] > largest )
            {
                largest = a[i][j];
            }
        }
    }    

// PRINTING OUTPUT
    printf("Largest element = %d", largest);

    return 0;
}*/


// 6. Smallest Element in Matrix

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE][SIZE], rows, columns, i, j, smallest ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : "); 
    scanf("%d", &rows); 
    printf("Enter the number of columns : ");
    scanf("%d", &columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }

// INPUT
    printf("Enter the matrix elements :\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// LARGEST ELEMENT
    smallest = a[0][0];

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            if(a[i][j] < smallest )
            {
                smallest = a[i][j];
            }
        }
    }    

// PRINTING OUTPUT
    printf("Smallest element = %d", smallest);

    return 0;
}*/


// 7. Search Element in Matrix

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE][SIZE], rows, columns, i, j, search_element, flag=0 ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : "); 
    scanf("%d", &rows); 
    printf("Enter the number of columns : ");
    scanf("%d", &columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }

// INPUT
    printf("Enter the matrix elements :\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// SEARCHING    
    printf("Enter the element to be searched : ");
    scanf("%d", &search_element);

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            if(a[i][j] == search_element)
            {
                flag = 1 ;
                printf("%d is found at position row %d and column %d\n", search_element, i+1 ,j+1);
            }
        }
    }

    if(flag==0)
    {
        printf("%d is not found in matrix", search_element);
    }

    return 0;
}*/


// 8. Matrix Addition

/*#include<stdio.h>
#define SIZE 5
int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE], rows1, columns1, rows2, columns2, i, j, rows3, columns3;

// ROWS AND COLUMNS OF MATRIX A
    printf("Enter the number of rows for matrix A    : ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for matrix A : ");   
    scanf("%d", &columns1);
    if(rows1<=0 || rows1>SIZE || columns1<=0 || columns1>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }
// INPUT 0F MATRIX A
    printf("Enter the elements for matrix A :\n");
    for(i=0 ; i<rows1 ; i++)
    {
        for(j=0 ; j<columns1 ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// ROWS AND COLUMNS OF MATRIX B
    printf("Enter the number of rows for matrix B    : ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for matrix B : ");   
    scanf("%d", &columns2);
    if(rows2<=0 || rows2>SIZE || columns2<=0 || columns2>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }
// INPUT OF MATRIX B
    printf("Enter the elements for matrix B :\n");
    for(i=0 ; i<rows2 ; i++)
    {
        for(j=0 ; j<columns2 ; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

// MATRIX ADDTION    

    if(rows1 != rows2 || columns1 != columns2)
    {
        printf("Matrix addition is not possible.\n");
        return 0;
    }

    rows3 = rows1;
    columns3 = columns1;


    for(i=0 ; i<rows3 ; i++)
    {
        for(j=0 ; j<columns3 ;j++ )
        {
            c[i][j] = a[i][j] + b[i][j] ;
        }
    }

// PRINTING RESULT 
    printf("\nSum of Matrix:\n");
    for(i=0 ; i<rows3 ; i++)
    {
        for(j=0 ; j<columns3 ; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0 ;
}*/


// 9. Matrix Multiplication

/*#include<stdio.h>
#define SIZE 5
int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE] ;
    int rows1, columns1, rows2, columns2, rows3, columns3 ;
    int i, j, k, sum;

// ROWS AND COLUMNS OF MATRIX 
    printf("Enter the number of rows for matrix A    : ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for matrix A : ");   
    scanf("%d", &columns1);
    if(rows1<=0 || rows1>SIZE || columns1<=0 || columns1>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }

    printf("Enter the number of rows for matrix B    : ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for matrix B : ");   
    scanf("%d", &columns2);
    if(rows2<=0 || rows2>SIZE || columns2<=0 || columns2>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }

// MULTIPLICATION CONDITION
    if (columns1 != rows2)
    {
        printf("Matrix multiplication not possble for these size");
        return 0 ;
    }
    rows3 = rows1 ;
    columns3 = columns2 ;    

// INPUT 0F MATRIX 
    printf("Enter the elements for matrix A :\n");
    for(i=0 ; i<rows1 ; i++)
    {
        for(j=0 ; j<columns1 ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements for matrix B :\n");
    for(i=0 ; i<rows2 ; i++)
    {
        for(j=0 ; j<columns2 ; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

// MATRIX MULTIPLICATION     
    printf("\nMultiplied matrix C:\n");
    for(i=0 ; i<rows3 ; i++)
    {
        for(j=0 ; j<columns3 ; j++)
        {
            c[i][j] = 0 ;
            sum = 0;

            for(k=0 ; k<columns1 ; k++)
            {
                sum += a[i][k] * b[k][j] ;
            }
            c[i][j] = sum ;
            printf("%d ",sum);
        }
        printf("\n");
    }  

    return 0;
}*/

// 9.1 Matrix Multiplication(small improvements  ie... seperate printing setup)

/*#include<stdio.h>
#define SIZE 5
int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE] ;
    int rows1, columns1, rows2, columns2, rows3, columns3 ;
    int i, j, k, sum;

// ROWS AND COLUMNS OF MATRIX 
    printf("Enter the number of rows for matrix A    : ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for matrix A : ");   
    scanf("%d", &columns1);
    if(rows1<=0 || rows1>SIZE || columns1<=0 || columns1>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }

    printf("Enter the number of rows for matrix B    : ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for matrix B : ");   
    scanf("%d", &columns2);
    if(rows2<=0 || rows2>SIZE || columns2<=0 || columns2>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }

// MULTIPLICATION CONDITION
    if (columns1 != rows2)
    {
        printf("Matrix multiplication not possble for these size");
        return 0 ;
    }
    rows3 = rows1 ;
    columns3 = columns2 ;    

// INPUT 0F MATRIX 
    printf("Enter the elements for matrix A :\n");
    for(i=0 ; i<rows1 ; i++)
    {
        for(j=0 ; j<columns1 ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements for matrix B :\n");
    for(i=0 ; i<rows2 ; i++)
    {
        for(j=0 ; j<columns2 ; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

// MATRIX MULTIPLICATION     
    for(i=0 ; i<rows3 ; i++)
    {
        for(j=0 ; j<columns3 ; j++)
        {
            sum = 0;

            for(k=0 ; k<columns1 ; k++)
            {
                sum += a[i][k] * b[k][j] ;
            }           
            c[i][j] = sum ;
        }
    }  

// PRINTING OUTPUT
    printf("\nMultiplied Matrix:\n");
    for(i=0 ; i<rows3 ; i++)
    {
        for(j=0 ; j<columns3 ; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }    

    return 0;
}*/


// 10. Transpose of a Matrix

/*#include<stdio.h>
#define SIZE 5
int main()
{
    int a[SIZE][SIZE],b[SIZE][SIZE], rows, columns, i, j, rows1, columns1 ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }

// INPUT
    printf("Enter the matrix elements:\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// TRANSPOSE
    rows1 = columns;
    columns1 = rows ;

    for(i=0 ; i<rows1 ; i++)
    {
        for(j=0 ; j<columns1 ; j++)
        {
            b[i][j] = a[j][i] ;
        }
    }

// PRINTING OUTPUT 
    printf("\nTranspose matrix:\n");
    for(i=0 ; i<rows1 ; i++)
    {
        for(j=0 ; j<columns1 ; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }    

    return 0;
}*/


// 11. Identity matrix

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE][SIZE], rows, columns, i, j, flag ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ") ;
    scanf("%d", &columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }

// IDENTITY MATRIX CONDITION
    if(rows != columns)
    {
        printf("It is not an identity matrix");
        return 0;
    }
    
//  INPUT 
    printf("Enter the matrix elemants:\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// CHECKING IDENTITY
    flag = 1 ;

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            if(i==j)
            {
                if(a[i][j] != 1)
                {
                    flag = 0 ;
                    break;
                }
            }
            else
            {
                if(a[i][j] != 0)
                {
                    flag = 0 ;
                    break ;
                }
            }
        }
    }

// PRINTING OUTPUT 
    if(flag == 1)
    {
        printf("It is an identity matrix");
    }
    else
    {
        printf("It is not an identity matrix");
    }    

    return 0 ;
}*/

// 11.1 Identity matrix (shorter version)

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE][SIZE], rows, columns, i, j, flag ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ") ;
    scanf("%d", &columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }

// IDENTITY MATRIX CONDITION
    if(rows != columns)
    {
        printf("It is not an identity matrix");
        return 0;
    }
    
//  INPUT 
    printf("Enter the matrix elemants:\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// CHECKING IDENTITY
    flag = 1 ;

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            if(i == j && a[i][j] != 1)
            {
                flag = 0;
                break;
            }

            if(i != j && a[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

// PRINTING OUTPUT 
    if(flag == 1)
    {
        printf("It is an identity matrix");
    }
    else
    {
        printf("It is not an identity matrix");
    }    

    return 0 ;
}*/


// 12. Symmetric Matrix

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], rows, columns, i, j, flag ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }

    if(rows!=columns)
    {
        printf("Symmetric matrix should be a square matrix");
        return 0;
    }

// INPUT
    printf("Enter the matrix elements:\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// TRANSPOSE 
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            b[i][j] = a[j][i] ;
        }
    }    

// SYMMETRIC MATRIX CONDITION
    printf("Transpose matrix:\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }  

    printf("Original matrix:\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }    

    flag = 1;
    
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            if(a[i][j] != b[i][j])
            {
                flag = 0 ;
                break; 
            }
        }
    }        

    if(flag == 1)
    {
        printf("It is a symmetric matrix");
    }
    else
    {
        printf("It is not a symmetric matrix");
    }

    return 0;
} */


// 13. Check Upper Triangular Matrix

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], rows, columns, i, j, flag ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }
    if(rows!=columns)
    {
        printf("Upper triangular matrix should be a square matrix");
        return 0;
    }    

// INPUT
    printf("Enter the matrix elements:\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// CHECKING 
    flag = 1 ;

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            if(i > j && a[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }

    if(flag == 1)
    {
        printf("It is an upper triangular matrix");
    }
    else
    {
        printf("It is not an upper triangular matrix");
    }

    return 0 ;
}*/    


// 14. Check Lower Triangular Matrix

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], rows, columns, i, j, flag ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }
    if(rows!=columns)
    {
        printf("Lower triangular matrix should be a square matrix");
        return 0;
    }    

// INPUT
    printf("Enter the matrix elements:\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// CHECKING 
    flag = 1 ;

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            if(i < j && a[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }

    if(flag == 1)
    {
        printf("It is lower triangular matrix");
    }
    else
    {
        printf("It is not lower triangular matrix");
    }

    return 0 ;
}*/


// 15. Primary Digonal Sum

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], rows, columns, i, j, sum=0 ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }
    if(rows!=columns)
    {
        printf("Diagonal matrix should be a square matrix");
        return 0;
    }    

// INPUT
    printf("Enter the matrix elements:\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// DIAGONAL SUM 
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            if(i==j)
            {
                sum += a[i][j] ;
            }
        }
    }

    printf("Sum of Diagonal = %d",sum);

    return 0 ;
}*/

// 15.1 Primary Digonal Sum (optimised method)

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], rows, columns, i, j, sum=0 ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }
    if(rows!=columns)
    {
        printf("Diagonal matrix should be a square matrix");
        return 0;
    }    

// INPUT
    printf("Enter the matrix elements:\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// DIAGONAL SUM 
    for(i=0 ; i<rows ; i++)
    {
        sum += a[i][i] ;             
    }

    printf("Sum of Diagonal = %d",sum);

    return 0 ;
}*/


// 16. Secondary Digonal Sum

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], rows, columns, i, j, sum=0 ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }
    if(rows!=columns)
    {
        printf("Diagonal matrix should be a square matrix");
        return 0;
    }    

// INPUT
    printf("Enter the matrix elements:\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// DIAGONAL SUM 
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            if(i+j == rows-1)
            {
                sum += a[i][j] ;
            }
        }
    }

    printf("Sum of Diagonal = %d",sum);

    return 0 ;
}*/

// 16.2 Secondary Digonal Sum (optimised method)

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], rows, columns, i, j, sum=0 ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }
    if(rows!=columns)
    {
        printf("Diagonal matrix should be a square matrix");
        return 0;
    }    

// INPUT
    printf("Enter the matrix elements:\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// DIAGONAL SUM 
    for(i = 0; i < rows; i++)
    {
        sum += a[i][rows - 1 - i];
    }

    printf("Sum of Diagonal = %d",sum);

    return 0 ;
}*/


// 17. Boundary Elements

/*#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], rows, columns, i, j, sum=0 ;

// ROWS AND COLUMNS
    printf("Enter the number of rows    : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &columns);
    if(rows<=0 || rows>SIZE || columns<=0 || columns>SIZE)
    {
        printf("Invalid matrix size");
        return 0;
    }    

// INPUT
    printf("Enter the matrix elements:\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

// BOUNDARY ELEMENT 
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            if(i == 0 || i == rows-1  ||  j == 0 || j == columns-1)
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}*/

