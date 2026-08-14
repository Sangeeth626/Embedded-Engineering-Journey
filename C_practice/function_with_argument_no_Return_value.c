// 1. Square

/*#include<stdio.h>

void square(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    square(n);
    return 0;
}

void square(int n)
{
    printf("%d^2 = %d ",n, n*n);
}*/


// 2. Cube 

/*#include<stdio.h>

void cube(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    cube(n);
    return 0;
}

void cube(int n)
{
    printf("%d^3 = %d", n, n*n*n);
}*/


// 3. Multiplication Table

/*#include<stdio.h>

void multiplication_table(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    multiplication_table(n);
    return 0;
}

void multiplication_table(int n)
{
    int i;
    printf("***MULTIPLICATION TABLE***\n");
    for(i=1 ; i<=10 ; i++)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }

}*/


// 4. Print number from 1 to N

/*#include<stdio.h>

void print_number(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    print_number(n);
    return 0;
}

void print_number(int n)
{
    int i;
    for(i=1 ; i<=n ; i++)
    {
        printf("%d  ",i);
    }
}*/


// 5. Even number

/*#include<stdio.h>

void even_number(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    even_number(n);
    return 0;
}

void even_number(int n)
{
    int i;
    for(i=2 ; i<=n ; i+=2)
    {
       printf("%d  ",i);
    }
}*/


// 6. Odd number

/*#include<stdio.h>

void odd_number(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    odd_number(n);
    return 0;
}

void odd_number(int n)
{
    int i;
    for(i=1 ; i<=n ; i+=2)
    {
        printf("%d  ",i);
    }
}*/


// 7. Sum of N natural number 

/*#include<stdio.h>

void sumN(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    sumN(n);
    return 0;
}

void sumN(int n)
{
    int i, sum=0;
    for(i=1 ; i<=n ; i++)
    {
        sum += i ;
    }
    printf("Sum = %d ",sum);
}*/


// 8. Factoral of a Number

/*#include<stdio.h>

void factorial(int n);

int main ()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    factorial(n);
    return 0;
}

void factorial(int n)
{
    int i, fact=1;
    for(i=1 ; i<=n ; i++)
    {
        fact *= i ;
    }
    printf("%d! = %d", n, fact);
}*/


// 9. Prime Number

/*#include<stdio.h>

void prime_number(int n);

int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    prime_number(n);
    return 0;
}

void prime_number(int n)
{
    int i, flag=1;

    if(n<=1)
    {
        printf("%d is not a prime number",n);
        return;
    }

    for(i=2 ; i*i<n ; i++)                      //note : better to use i*i 
    {
        if(n%i==0)
        {
            flag = 0 ;
            break;
        }
    }

    if(flag==1)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}*/


// 10. Reverse the Number 

/*#include<stdio.h>

void reverse_number(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    reverse_number(n);
    return 0 ;
}

void reverse_number(int n)
{
    int digit, rev=0;
    while(n!=0)
    {
        digit = n%10;
        rev = rev*10 + digit ;
        n = n/10;
    }
    printf("Reversed number = %d",rev);
}*/


// 11. Palindrome Number

/*#include<stdio.h>

void palindrome(int n);

int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    palindrome(n);
    return 0;
}

void palindrome(int n)
{
    int digit, rev=0, temp;

    temp = n;

    while(n!=0)
    {
        digit = n%10;
        rev = rev*10 + digit ;
        n = n/10;
    }
    printf("Reverse number = %d\n", rev);
    if(rev==temp)
    {
        printf("It is a palindrome number");
    }
    else
    {
        printf("It is not a palindrome number");
    }
}*/


// 12. Armstrong Number

/*#include<stdio.h>

void armstrong(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    armstrong(n);
    return 0;
}

void armstrong(int n)
{
    int digit, temp, sum=0, count=0, i, power=1, temp1;

    temp = n;
    temp1 = n;
    
    // 1.Finding Count
    if(n==0)
    {
        count = 1;
    }
    else
    {
        while(n!=0)
        {
//          digit = n%10;
            n = n/10;
            count++;
        }
    }
//    printf("%d\n",count);

    // 2.Find Armstrong sum
    while(temp!=0)
    {
        digit = temp%10;
        for(i=1 ; i<=count ; i++)
        {
            power = power*digit ;
        }
//        printf("%d  ",power);
        sum += power ;
        temp = temp/10;
        power = 1;
    }
    
    // 3.Special case for zero
    if(sum==0)
    {
        printf("It is an armstrong number");
    }
    else if(sum==temp1)
    {
        printf("\nIt is an armstrong number");
    }
    else
    {
        printf("\nIt is not an armstrong number");
    }
}*/


// 13. Strong Number

/*#include<stdio.h>

void strong(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    strong(n);
    return 0;
}

void strong(int n)
{
    int digit, fact=1, sum=0, i, temp;

    temp = n ;

    if(n<=0)
    {
        printf("It is not a strong number");
        return;
    }
    else
    {
        while(n!=0)
        {
            digit = n%10;

            for(i=1 ; i<=digit ; i++)
            {
                fact *= i ;
            }
           
            n = n/10;
            
            sum += fact ;
            fact = 1;
        }  
    }
    if(sum==temp)
    {
        printf("It is a strong number");
    }
    else
    {
        printf("It is not a strong number");
    }
}*/


// 14. Perfect Number

/*#include<stdio.h>

void perfect_number(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    perfect_number(n);
    return 0;
}

void perfect_number(int n)
{
    int i, sum=0;
    if(n<=0)
    {
        printf("%d is not a perfect number",n);
        return ;
    }
    else
    {
        for(i=1 ; i<n ; i++)
        {
            if(n%i==0)
            {
                sum += i ;
            }
        }
        if(sum==n)
        {
            printf("%d is a perfect number", n);
        }
        else
        {
            printf("%d is not a perfect number", n);
        }
    }
}*/


// 15. Harshad Number

/*#include<stdio.h>

void harshad_number(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    harshad_number(n);
    return 0;
}

void harshad_number(int n)
{
    int digit, sum=0, temp;

    temp = n ;

    if(n==0)
    {
        printf("%d is a harshad number",temp);
        return;
    }
    else if(n<0)
    {
        printf("%d is not a harshad number",temp);
        return;
    }

    while(n!=0)
    {
        digit = n%10;
        sum += digit ;
        n = n/10 ;
    }
    if((temp%sum)==0)
    {
        printf("%d is a harshad number", temp);
    }
    else
    {
        printf("%d is not a harshad number", temp);
    }
}*/

// 16. Automorphic number

/*#include<stdio.h>

void automorphic_number(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    automorphic_number(n);
    return 0;
}

void automorphic_number(int n)
{
    int digit, n2, count=0, i, power=1, temp;

    n2 = n*n ;
//    printf("%d\n",n2);
    temp = n;

    if(n==0)
    {
        printf("%d is an automorphic number", n);
        return;
    }
    else if(n<0)
    {
        printf("%d is not an automorphic number", n);
        return;
    }

    while(n!=0)
    {
        count++ ;
        n = n/10 ;
    }
//    printf("%d\n",count);

    for(i=1 ; i<=count ; i++)
    {
        power = power * 10 ;
    }
//    printf("%d\n",power);

    digit = temp%power;             // note : It is enough ie... no need for while loop

    if(digit==temp)
    {
        printf("%d is an automorphic number", temp);
    }
    else
    {
        printf("%d is not an automorphic number", temp);
    }
}*/


// 17. Duck number

/*#include<stdio.h>

void duck_number(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    duck_number(n);
    return 0;
}

void duck_number(int n)
{
    int digit, temp, flag=1;

    temp = n;
    
    if(n<=0)
    {
        printf("%d is not a duck number", n);
        return;
    }

    while(n!=0)
    {
        digit = n%10;
        n = n/10;

        if(digit==0)
        {
            flag = 0;
        }
    }

    if(flag==0)
    {
        printf("%d is a duck number", temp);
    }
    else
    {
        printf("%d is not a duck number",temp);
    }
}*/


// 18. Neon number

/*#include<stdio.h>

void neon_number(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    neon_number(n);
    return 0;
}

void neon_number(int n)
{
    int digit, sum=0, n2;
    
    n2 = n*n;

    if(n<0)
    {
        printf("%d is not a neon number", n);
        return ;
    }

    while(n2!=0)
    {
        digit = n2%10;
        n2 = n2/10;
        sum += digit;
    }
    if(sum==n)
    {
        printf("%d is a neon number", n);
    }
    else
    {
        printf("%d is not a neon number", n);
    }
}*/


// 19. GCD(HCF)

/*#include<stdio.h>

void gcd(int n1, int n2);

int main()
{
    int n1, n2;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1, &n2);

    gcd(n1, n2);
    return 0;
}

void gcd(int n1, int n2)
{
    int i, min, gcd=1;

    if(n1<n2)
    {
        min = n1;
    }
    else
    {
        min = n2 ;
    }
//    printf("min = %d\n",min);

    for(i=1 ; i<=min ; i++)
    {
        if((n1%i)==0 && (n2%i)==0)
        {
            gcd = i;
        }
    }
    printf("GCD = %d",gcd);
}*/


// 20. LCM

/*#include<stdio.h>

void lcm(int n1, int n2);

int main()
{
    int n1, n2;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1, &n2);

    lcm(n1, n2);
    return 0;
}

void lcm(int n1, int n2)
{
    int i, min, gcd=1;

    if(n1 == 0 || n2 == 0)
    {
        printf("LCM = 0");
        return;
    }

    if(n1<n2)
    {
        min = n1;
    }
    else
    {
        min = n2 ;
    }
//    printf("min = %d\n",min);

    for(i=1 ; i<=min ; i++)
    {
        if((n1%i)==0 && (n2%i)==0)
        {
            gcd = i;
        }
    }
//    printf("GCD = %d",gcd);
    printf("LCM = %d", (n1*n2)/gcd);
}*/


// 21. Fibonacci series

/*#include<stdio.h>

void fibonacci_series(int n);

int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    fibonacci_series(n);
    return 0;
}

void fibonacci_series(int n)
{
    int i, first=0, second=1, next=0;

    if(n <= 0)
    {
        printf("Invalid input");
        return;
    }

    for(i=1 ; i<=n ; i++)
    {
        next = first + second ;

        printf("%d  ",first);

        first = second;
        second = next ;

    }
}*/


// 22. Prime number upto N

/*#include<stdio.h>

void Nprime_number(int N);

int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d",&N);

    Nprime_number(N);
    return 0;
}

void Nprime_number(int N)
{
    int i, j, flag=0;

    for(i=2 ; i<=N ; i++)
    {
        for(j=2 ; j<i ; j++)
        {
            if(i%j == 0)
            {
                flag = 1;
                break ;
            }
        }
        if(flag==0)
        {
            printf("%d ", i);
        }
        
        flag = 0;
    }
}*/



// 23. First N prime number

/*#include<stdio.h>

void Nprime_number(int N);

int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d",&N);

    Nprime_number(N);
    return 0;
}

void Nprime_number(int N)
{
    int num=2, count=0, i, flag = 0;

    while(count<N)
    {
        flag = 0;
        
        for(i=2 ; i<num ; i++)
        {
            if(num%i == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d  ",num);
            count ++ ;
        }
        num++ ;      
    }
}*/











