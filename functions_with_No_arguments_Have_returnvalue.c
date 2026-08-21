// 1. Square

/*#include<stdio.h>

int square();

int main()
{
    int sqr, n ;

    sqr = square();

    printf("Square = %d",sqr);
    return 0;
}

int square()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    return n*n;
}*/


// 2. Cube

/*#include<stdio.h>

int cube(void);

int main(void)
{
    int ans;

    ans = cube();
    printf("Cube = %d",ans);
    return 0;
}

int cube(void)
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    return n*n*n;
}*/


// 3. Greater of Two numbers

/*#include<stdio.h>

int greater(void);

int main()
{
    int ans ;
    
    ans = greater();
    printf("%d is greater",ans);
}

int greater(void)
{
    int n1 , n2 ;

    printf("Enter two number : ");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        return n1 ;
    }
    else
    {
        return n2 ;
    }
}*/


// 4 . Odd or even

/*#include<stdio.h>

int odd_even(void);

int main()
{
    int ans;

    ans = odd_even();

    if(ans==1)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
}

int odd_even(void)
{
    int n ;

    printf("Enter a number : ");
    scanf("%d",&n);

    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0 ;
    }
}*/


// 5 . Factoral 

/*#include<stdio.h>

int factorial(void);

int main()
{
    int ans;

    ans = factorial();

    if(ans ==-1)
    {
        printf("Factorial for negative number is not defined");
    }
    else
    {
        printf("Factorial = %d", ans);
    }

}

int factorial(void)
{
    int n, i, fact=1;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n<0)
    {
        return -1;
    }
    else
    {
        for(i=1 ; i<=n ; i++)
        {
            fact*= i;
        }
        return fact ;
    }
}*/


// 6 . Reverse a number

/*#include<stdio.h>

int reverse(void);

int main()
{
    int ans;
    ans = reverse();
    printf("Reverse number = %d",ans);

    return 0;
}

int reverse(void)
{
    int n, digit, rev=0 ;

    printf("Enter a number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }
    return rev ;
}*/


// 7 . Palindrome number 

/*#include<stdio.h>

int palindrome(void);

int main()
{
    int ans;

    ans = palindrome();
    if(ans==1)
    {
        printf("It is a palindrome number ");
    }
    else
    {
        printf("It is not a palindrome number");
    }

    return 0;
}

int palindrome(void)
{
    int n, digit, rev=0, temp;

    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n ;

    while(n!=0)
    {
        digit = n%10;
        rev = rev*10 + digit ;
        n = n/10;
    }
    return (rev==temp);
}*/


// 8 . Prime number

/*#include<stdio.h>

int prime(void);

int main()
{
    int ans;
    ans = prime();
    
    if(ans==0)
    {
        printf("It is not a prime number");
    }
    else
    {
        printf("It is a prime number");
    }

    return 0;
}

int prime(void)
{
    int n, i;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n<=1)
    {
        return 0;
    }

    for(i=2 ; i<n ; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}*/


// 9. Sum of Digit

/*#include<stdio.h>

int sum_of_digits(void);

int main()
{
    int ans;
    ans = sum_of_digits();
    printf("SUM = %d", ans);
    return 0;
}

int sum_of_digits(void)
{
    int n ,digit, sum=0;

    printf("Enter a number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        digit = n%10;
        n = n/10;
        sum += digit;
    }
    return sum;
}*/


// 10. Armstrong number

/*#include<stdio.h>

int armstrong(void);

int main()
{
    int ans ;
    ans = armstrong();

    if(ans==1)
    {
        printf("It is an armstrong number");
    }
    else
    {
        printf("It is not an armstrong number");
    }

    return 0;
}

int armstrong(void)
{
    int n, digit, count=0, temp, i, power=1, sum=0, temp1;

    printf("Enter a number : ");
    scanf("%d",&n);

    if(n == 0)
    {
        return 1;
    }

    temp = n ;
    temp1 = n ;

    while(n!=0)
    {
        count++ ;
        n = n/10;
    }

    while(temp!=0)
    {
        digit = temp%10 ;
        temp = temp/10;

        for(i=1 ; i<=count ; i++)
        {
            power = power*digit ;
        }

        sum += power;   
        power = 1;     
    }
//    printf("%d \n",sum);
    
    return(sum==temp1);
}*/

