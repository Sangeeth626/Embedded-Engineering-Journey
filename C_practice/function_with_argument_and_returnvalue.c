// 1. Square

/*#include<stdio.h>

int square(int);

int main()
{
    int n , ans;
    printf("Enter a number : ");
    scanf("%d",&n);

    ans = square(n);
    printf("%d^2 = %d", n, ans);

    return 0;
}

int square(int n)
{
    return n*n;
}*/


// 2. Cube

/*#include<stdio.h>

int cube(int);

int main()
{
    int n, ans;
    printf("Enter a number : ");
    scanf("%d",&n);

    ans = cube(n);
    printf("%d^3 = %d", n, ans);

    return 0;
}

int cube(int n)
{
    return n*n*n ;
}*/


// 3. Greatest of two number

/*#include<stdio.h>

int greater(int n1, int n2);

int main()
{
    int n1, n2, ans;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);

    ans = greater(n1,n2);
    
    if(ans == -1)
    {
        printf("Both number are equal");
    }
    else
    {
        printf("%d is greater",ans);
    }
}

int greater(int n1, int n2)
{
    if(n1>n2)
    {
        return n1;
    }
    else if(n2>n1)
    {
        return n2 ;
    }
    else
    {
        return -1 ;
    }
}*/

// 3.1 using ternary operation

/*#include<stdio.h>

int greater(int n1, int n2);

int main()
{
    int n1, n2, ans;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);

    ans = greater(n1,n2);
    
    (ans==-1)? printf("Both are equal") : printf("%d is greater",ans);

    return 0;
}

int greater(int n1, int n2)
{
    return (n1>n2)? n1 : (n2>n1)? n2 : -1 ;
}*/


// 4. Factorial

/*#include<stdio.h>

int factorial(int n);

int main()
{
    int n , ans ;
    printf("Enter a number : ");
    scanf("%d",&n);

    ans = factorial(n);
    (n<0)? printf("Invalid number") : printf("%d! = %d ", n, ans) ;
    return 0;
}

int factorial(int n)
{
    int i, fact=1;

    for(i=1 ; i<=n ; i++)
    {
        fact *= i ;
    }
    return fact;
}*/

// 4.1 clean approch (function does not exicute when input = 0)

/*#include<stdio.h>

int factorial(int n);

int main()
{
    int n , ans ;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n < 0)
    {
        printf("Invalid number");
    }
    else
    {
        ans = factorial(n);
        printf("%d! = %d", n, ans);
    }

    return 0;
}

int factorial(int n)
{
    int i, fact=1;

    for(i=1 ; i<=n ; i++)
    {
        fact *= i ;
    }
    return fact;
}*/


// 5. Reveerse number

/*#include<stdio.h>

int reverse_number(int n);

int main()
{
    int n, ans;

    printf("Enter a number : ");
    scanf("%d",&n);

    ans = reverse_number(n);
    printf("Reverse number = %d",ans);

    return 0;
}

int reverse_number(int n)
{
    int digit, rev=0;

    while(n!=0)
    {
        digit = n%10;
        rev = rev*10 + digit ;
        n = n/10;
    }
    return rev;
}*/


// 6. Prime number

/*#include<stdio.h>

int prime_number(int n);

int main()
{
    int n, ans;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("%d is not a prime number",n);
        return 0;
    }

    ans = prime_number(n);

    (ans==1)? printf("%d is a prime number",n) : printf("%d is not a prime number",n) ;

    return 0;
}

int prime_number(int n)
{
    int i ;

    for(i=2 ; i*i<n ; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}*/


// 7. GCD 

/*#include<stdio.h>

int gcd(int n1, int n2);

int main()
{
    int n1, n2, ans;
    printf("Enter a number : ");
    scanf("%d%d", &n1, &n2);
    
    ans = gcd(n1,n2);
    printf("GCD = %d",ans);

    return 0;
}

int gcd(int n1, int n2)
{
    int i , min, gcd;

    if(n1<n2)
    {
        min = n1 ;
    }
    else
    {
        min = n2 ;
    }

    for(i=1 ; i<=min ; i++)
    {
        if(n1%i==0 && n2%i == 0 )
        {
           gcd = i;
        }
    }
    return gcd;
}*/


//  8. LCM  (Reusing GCD code , creatng new functions)

/*#include<stdio.h>

int lcm(int n1, int n2);

int main()
{
    int n1, n2, ans;
    printf("Enter a number : ");
    scanf("%d%d", &n1, &n2);
    
    ans = lcm(n1,n2);
    printf("LCM = %d",ans);

    return 0;
}

int gcd(int n1, int n2)
{
    int i , min, gcd;

    if(n1<n2)
    {
        min = n1 ;
    }
    else
    {
        min = n2 ;
    }

    for(i=1 ; i<=min ; i++)
    {
        if(n1%i==0 && n2%i == 0 )
        {
           gcd = i;
        }
    }
    return gcd;
}

int lcm(int n1, int n2)
{
    return (n1*n2)/gcd(n1,n2) ;
}*/