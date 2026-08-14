// 1. Print the numbers from 1 to 10
/*#include <stdio.h>
int main()
{
    int n ;
   // printf("The numbers from 1 to 10 are : \n");
    for(n = 1 ; n <= 10 ; n++)
       printf("%d ",n);   

    return 0;   
}*/

// 1.1. Using while loop

/*#include <stdio.h>
int main()
{
    int n=1 ;
    while(n<=10)
    {
        printf("%d ",n);             //note : better to use printf("%d ",n); instead of printf("%d",n); because it will print the numbers in a single line with space between them.
        n++;

    }

}*/



// 2. Print the numbers from 10 to 1

/*#include<stdio.h>
int main()
{
    int n;
    printf("The numbers from 10 to 1 are : \n");
    for(n=10 ; n>=1 ; n--)
        printf("%d ",n);
     
}*/

// 2.1. Using while loop

/*#include<stdio.h>
int main()
{
    int n=10;
    printf("The numbers from 10 to 1 are \n");
    while(n>=1)
    {
        printf("%d ",n);
        n--;
    }

    return 0 ;
}*/



// 3. Print all even numbers from 1 to 100 

/*#include<stdio.h>
int main()
{
    int n;
    printf("The even numbers from 1 to 100 are \n");        
    for(n=1 ; n<=100 ; n++)
    {
        if(n%2==0)
        {
            printf("%d ",n);
        }

    }
    return 0;
}*/

// 3.1. Better approch 

/*#include<stdio.h>
int main()
{
    int n;
    printf("The even numbers from 1 to 100 are \n");
    for(n=2 ; n<=100 ; n+=2)
    {
        printf("%d ",n);
    }
    return 0;
}*/

// 3.2. while loop

/*#include<stdio.h>
int main()
{
    int n=2;
    printf("The even numbers from 1 to 100 are \n");
    while(n<=100)
    {
        printf("%d ",n);
        n+=2;
    }
    return 0;
}*/


// 4. Print all odd numbers from 1 to 100

/*#include<stdio.h>
int main()
{
    int n;
    printf("The odd numbers from 1 to 100 are \n");        
    for(n=1 ; n<=100 ; n+=2)
    {
        printf("%d ",n);
    }
    return 0;
}*/

//4.1 Using while loop

/*#include<stdio.h>
int main()
{
    int n=1 ;
    printf("The odd numbers from 1 to 100 are \n");
    while(n<=100)
    {
        printf("%d ",n);
        n+=2;
    }
    return 0;
}*/


// 5.Multiplication Table

/*#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter the number of limit :");                      
    scanf("%d",&i);                                      // note : Logic error - limit is limited upto i

    printf("\n**** Multiplication Table ****\n");

    for(i=1 ; i<=n ; i++)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
    return 0;
}*/

// 5.1. Better version

/*#include<stdio.h>
int main()
{
    int n, i, limit ;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter the number of limit :");                      
    scanf("%d",&limit);                                      // note : limit will be provided upto user need

    printf("\n**** Multiplication Table ****\n");

    for(i=1 ; i<=limit ; i++)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
    return 0;
}*/

// 5.2. Using while loop

/*#include<stdio.h>
int main()
{
    int n, i=1, limit;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter the limit : ");
    scanf("%d",&limit);
    
    printf("\n****Multiplication Table****\n\n");

    while(i<=limit)
    {
        printf("%2d * %2d = %2d \n", n, i, n*i);
        i++ ;

    }
    return 0;
}*/



// 6. Find the sum of numbers from 1 to N

/*#include<stdio.h> 
int main()
{
    int N, i, sum=0;
    printf("Enter the number : ");
    scanf("%d",&N);
    for(i=1 ; i<=N ; i++)
    {
        sum=sum+i;
    }
    printf("%d ",sum);
    return 0;
}*/

// 6.1. Using while loop

/*#include<stdio.h>
int main()
{
    int N, i=1, sum=0;
    printf("Enter a number : ");
    scanf("%d",&N);
    while(i<=N)
    {
      sum = sum + i;
      i++;
    }
    printf("%d",sum);

    return 0;
}*/



//7. Factorial of a number

/*#include<stdio.h>
int main()
{
    int N, i, f=1 ;
    printf("Enter a number : ");
    scanf("%d",&N);

    for(i=N-1 ; i>=0 ; i--)                  // note : my method
    {
        f = f*(N-i);
    }
    printf("%d",f);

    return 0;
}*/

// 7.1. Chatgpt method

/*#include<stdio.h>
int main()
{
    int N, i ;
    long int f=1 ;

    printf("Enter a number : ");
    scanf("%d",&N);

    for(i=1 ; i<=N ; i++)
    {
        f = f*i ;
    }
    printf("%ld",f);

    return 0;
 }*/

// 7.2. Using while loop

/*#include<stdio.h>
int main()
{
    int N ,i=1 ;
    long long int f=1 ;

    printf("Enter a number : ");
    scanf("%d",&N);

    while(i<=N)
    {
        f = f*i ;
        i++ ;
    }
    printf("%lld",f);

    return 0;
}*/



// 8. Count the number of digits in a number

/*#include<stdio.h>
int main()
{
    int n , count=0 ;
    
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n==0)
    {
        count = 1;
    }

    while(n != 0)
    {
        n = n/10;
        count++;
    }
    printf("%d",count);

    return 0 ;
}*/



// 9. Reverse a number

/*#include<stdio.h>
int main()
{
    int n , rev=0 , digit ;
    printf("Enter a number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        digit = n%10 ;
        rev = rev*10 + digit ;
        n = n/10;
    }
    printf("The reverse of the number is %d", rev);

    return  0;
}*/



// 10. Palindrome number

/*#include<stdio.h>
int main()
{
    int n , rev=0 , digit , m ;
    printf("Enter a number : ");
    scanf("%d",&n);
    m=n;

    while(n!=0)
    {
        digit = n%10 ;
        rev = rev*10 + digit ;
        n = n/10;
    }
    printf("The reverse of the number is %d\n",rev);
    
    if (rev == m)
    {
        printf("The given number is palindrome number");
    }
    else
    {
        printf("It is not a palindrome number ");
    }

    return  0;
}*/


// 11. Find the sum of digit of number

/*#include <stdio.h>
int main()
{
    int n , digit , sum=0 ;
    printf("Enter a number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        digit = n%10;
        sum = sum + digit ;
        n = n/10;
    }
    printf("Sum of digit = %d ",sum);

    return 0;
}*/


// 12 . Product of digit of number

/*#include <stdio.h>
int main()
{
    int n , digit , mul=1 ;
    printf("Enter a number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        digit = n%10;
        mul = mul * digit ;
        n = n/10;
    }
    printf("Product of number = %d ",mul);

    return 0;
}*/


// 13 . Largest number in digit of number

/*#include<stdio.h>
int main()
{
    int n , digit , max = digit ;
    printf("Enter a number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        digit = n%10;

        if(digit > max)
        {
            max = digit;
        }

        n =  n/10;
    }
    printf("%d is greatest", max);
   
    return 0;
}*/


// 14 . Smallest number in digit of number

/*#include<stdio.h>
int main()
{
    int n , digit , min = 9 ;
    printf("Enter a number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        digit = n%10;

        if(digit < min)
        {
            min = digit;
        }

        n =  n/10;
    }
    printf("%d is smallest", min);
   
    return 0;
}*/


// 15 . ARMSTRONG NUMBER 

/*#include<stdio.h>
int main()
{
    int n , digit ,cos = 0 ,m ;
    printf("Enter a number : ");
    scanf("%d",&n);
    m=n;

    while(n!=0)
    {
        digit = n%10;
        
        cos = cos + (digit*digit*digit);

        n = n/10;
    }
    printf("cos = %d \n",cos);

    if(cos == m)
    {
        printf("It is an armstrong number");
    }
    else
    {
        printf("It is not an armstrong number");
    }

    return 0;
}*/


// 16. Check whether a number is prime or not           

/*#include<stdio.h>                     
int main()
{
    int N ,i ,flag ;                        // note: my method but mention about number 2 and less than 2
    printf("Enter a number : ");
    scanf("%d",&N);

    for(i=2 ; i<N ; i++)
    {
        if(N%i == 0)
        {
            flag = 0 ;
        }
        else
        {
            flag = 1;
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

    return 0;
}*/

// 16.1 Proper method

/*#include<stdio.h>                     
int main()
{
    int N ,i ,flag = 1 ;                     
    printf("Enter a number : ");
    scanf("%d",&N);

    if(N<=1)
    {
        printf("It is not a prime number");
        return 0;                                    // note : in if condition use return 0; because if the number is less than or equal to 1 then it is not a prime number and we don't need to check further so we can return from the function.
    }

    for(i=2 ; i<N ; i++)
    {
        if(N%i == 0)
        {
            flag = 0 ;
            break;
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

    return 0;
}*/


// 17. Print all prime numbers between 1 to 100

/*#include<stdio.h>
int main()
{
    int i , j ,flag;

    for(i=2 ; i<=100 ; i++ )
    {
        flag = 1;
        
        for(j=2 ; j<i ; j++)             // note : for(j = 2; j * j <= i; j++) for better performance because we only need to check up to the square root of i for factors.
        {
            if(i%j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}*/


// 18. Fibonacci series

/*#include<stdio.h>
int main()
{
    int N , i ,f=0 ,s=1 , n ;
    printf("Enter a number : ");
    scanf("%d",&N);

    for(i=0 ; i<N ; i++)
    {
        printf("%d  ",f);
        n = f + s ;
        f=s;
        s=n;
    }
    
    return 0;
}*/


// 19. Find the GCD of two numbers

// note : Program to find smallest number and store it in another varible 
/*#include<stdio.h>
int main()
{
    int n1 , n2 , s ;
    printf("Enter two number : ");
    scanf("%d %d",&n1,&n2);

    if(n2>n1)
    {
        s = n1 ;                         //note : s=n1  not n1=s(it is wrong)
    }
    else
    {
        s = n2 ;
    }
    
    printf("%d", s);

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int n1 , n2 , s, l , i ,gcd ;
    printf("Enter a number : ");
    scanf("%d%d",&n1,&n2);

    if(n1<n2)
    {
        s = n1 ;
    }
    else 
    {
        s = n2 ;
    }
    
    if(n1>n2)
    {
        l = n1 ;
    }
    else 
    {
        l = n2 ;
    }
    
   for(i=1 ; i <= s ; i++)
    {
        if(s%i == 0)
        {
            if(l%i == 0)
            {
                printf("%d  ",i);
                gcd = i;
            }
        }
    }
    printf("\nGCD = %d",gcd);
    
    return 0;
}*/

// 19.1 smaller version  ie... not using l varible so only one if inside loop

/*#include <stdio.h>
int main()
{
    int n1 , n2 , s , i ,gcd ;
    printf("Enter a number : ");
    scanf("%d%d",&n1,&n2);

    if(n1<n2)
    {
        s = n1 ;
    }
    else 
    {
        s = n2 ;
    }
    
    for(i=1 ; i <= s ; i++)
    {
        if(n1%i == 0 && n2%i == 0)
        {
            printf("%d",i);
            gcd = i;
        }
    }
    printf("\nGCD = %d",gcd);
    
    return 0;
}*/


// 20. LCM of two numbers

/*#include<stdio.h>
int main()
{
    int n1 , n2 , s , i , gcd ;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);

    if(n1<n2)
    {
        s = n1;
    }
    else
    {
        s = n2;
    }

    for(i=1 ; i<=s ; i++)
    {
        if(n1%i == 0 && n2%i == 0)
        {
            gcd = i;
        }
    }
    printf("GCD = %d",gcd);
    printf("\nLCM = %d ",(n1*n2)/gcd);

    return 0;
}*/


// 21.Check whether a number is a Perfect Number.

/*#include<stdio.h>
int main()
{
    int N, i , sum=0 ;
    printf("Enter a number : ");
    scanf("%d",&N);

    for(i=1 ; i<N ; i++)
    {
        if(N%i == 0)
        {
            printf("%d  ",i);
            sum += i ;
        }

    }
    printf("\nSUM = %d\n",sum);
    
    if(sum==N)
    {
        printf("It is a perfect number");
    }
    else
    {
        printf("It is not a perfect number");
    }

    return 0;
}*/


// 22. Print all Perfect Numbers from 1 to N

/*#include<stdio.h>
int main()
{
    int N , i , j , flag=1;
    printf("Enter a number : ");
    scanf("%d",&N);

    for(i=2 ; i<=N ; i++)
    {
        if(N%i==0)
        {
            flag=1;
            
            for(j=2 ; j<i ; j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag == 1)
            {
                printf("%d  ",i);
            }  
        }
        
    }

    return 0;
}*/


// 23. wheather a number is Strong Number or not

/*#include <stdio.h>
int main()
{
    int n , digit , i, f=1 ,sum=0 , temp;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    
    while(n!=0)
    {
        digit = n%10;
        n=n/10;
        for(i=1 ; i<=digit ; i++)
        {
            f=f*i;
        }
        printf("%d  ",f);
        
        sum+=f;
        
        f=1;
    }
    printf("\nSUM = %d\n",sum);
    
    if(sum == temp)
    {
        printf("It is a strong number");
    }
    else
    {
        printf("It is not a strong number");
    }
    
    return 0;
}*/


// 24. Automorphic Number (my method)

/*#include<stdio.h>
#include<math.h>
int main()
{
    int n , digit , temp , n2 ,digit2 , c=0 , j;
    printf("Enter a  number : ");
    scanf("%d",&n);
    temp = n;
    n2=n*n;
    printf("%d^2 = %d\n",n,n2);
    
    while(n!=0)
    {
        digit2 = n/10;
        n=n/10;
        c = c+1;
    }
//    printf("%d\n",c);
    j = pow(10,c);
//    printf("%d\n",j);
    
    while(n2!=0)
    {
        digit = n2%j;
        n2=n2/j;
        break;
        printf("%d  ",digit);
    }    
    
    if(digit == temp)
    {
        printf("\nIt is an automorphic number ; ");
    }
    else
    {
        printf("\nIt is not an automorhic number");
    }
    
    return 0;
}*/

// 24.1. Automorphic Number (short method)

/*#include<stdio.h>
int main()
{
    int n , digit ,n2 ,temp , c=0 , j=1, i;
    printf("Enter a  number : ");
    scanf("%d",&n);
    temp = n;
    n2=n*n;
    printf("%d^2 = %d\n",n,n2);
    
    while(n!=0)
    {
        n=n/10;
        c = c+1;
    }
//    printf("%d\n",c);
    for(i=j ; i<=c ;i++)       //note : for calculating 10^c we can use for loop instead of pow() function because pow() function is used for floating point numbers and it may cause precision issues for large integers.
    {
        j = j*10;
    }
//    printf("%d\n",j);
    
    digit = n2%j;
    
    if(digit == temp)
    {
        printf("It is an automorphic number ; ");
    }
    else
    {
        printf("It is not an automorhic number");
    }
    
    return 0;
}*/


// 25. Harshad number

/*#include<stdio.h>
int main()
{
    int n, digit, sum=0, temp ;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    
    while(n!=0)
    {
        digit = n%10;
        n = n/10;
        sum+=digit ;
    }
    if(temp%sum == 0)
    {
        printf("It is a harshad number");
    }
    else
    {
        printf("It is not a harshad number");
    }
    
    return 0;
}*/


// 26. Print all Harshad numbers from 1 to N
/*#include<stdio.h>
int main()
{

} */


// 28. Neon number

/*#include<stdio.h>
int main()
{
    int n , digit , temp , n2 , sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    n2 = n*n;
    
    while(n2!=0)
    {
        digit = n2%10;
        n2 = n2/10;
        sum+=digit;
    }
    if(sum==temp)
    {
        printf(" %d is a neon number" ,temp);
    }
    else 
    {
        printf("%d is not a neon number",temp);
    }
    return 0;
}*/


// 29 . Spy number
