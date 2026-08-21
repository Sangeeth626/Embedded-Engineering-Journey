// 1. Print hello world using function

/*#include <stdio.h>

void printHello()
{
    printf("HELLO WORLD\n");
}

int main()
{
    printHello();
    return 0;
}*/


// 2. Print my name using function

/*#include<stdio.h>

void myname();         // function declaration

int main()
{
    myname();      // function call
    return 0;
}
  
void myname()         // function definition
{
    printf("My name is Sangeeth\n");    
}*/


 // 3.Function to print 1 to N

 /*#include<stdio.h>

 void printnumber();      //function declaration

int main()
{
    printnumber();          //function call
    return 0;
}

 void printnumber()
 {
    int i ,N ;

    printf("Enter a number : ");
    scanf("%d",&N);

    for(i=1 ; i<=N ; i++)        //function definition
    {
        printf("%d ",i);
    }
 }*/


 // 4. Print Odd number from 1 to N 

 /*#include<stdio.h>

 void printoddnumber();        //function declaration

 int main()
 {
    printoddnumber();        //function call
    return 0;
 }

 void printoddnumber()               //function definition
 {
    int N , i ;
    printf("Enter a number : ");
    scanf("%d",&N);

    for(i=1 ; i <=N ; i+=1)
    {
        if(i%2 !=0)
        {
            printf("%d ",i);
        }
    }
 }*/


 // 5. Print multiplication table of a given number using function

/*#include <stdio.h>

void multiplicationtable();    //function declaration

int main()
{
    multiplicationtable();      //function call
    return 0;
}

void multiplicationtable()         //function definition
{
    int N , i , mul=1 ;
    printf("Enter a number : ");
    scanf("%d",&N);

    for(i=1 ; i<=10 ; i++)
    {
        mul = N*i ;
    
        printf("%d * %d = %d \n",N,i,mul);
    }

}*/


// 6. Square of a number using function

/*#include<stdio.h>

void sqr();     //function declaration

int main()
{
    sqr();        // functjion call
    return 0 ;
}

void sqr()         //function definition
{
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    printf("%d^2 = %d ",n ,n*n);
}*/


// 7. Area of circle

/*#include<stdio.h>
#define PI 3.14 

void Area_of_circle();

int main()
{
    Area_of_circle();
    return 0;
}

void Area_of_circle()
{
    float r , Area;
    printf("Enter the radious : ");
    scanf("%f",&r);

    Area = PI * r*r ;
    
    printf("Area of the circle = %.2f \n", Area);
}*/


// 8.Area of Rectangle

/*#include<stdio.h>

void Area_of_rectangle();

int main()
{
    Area_of_rectangle();
    return 0;
}

void Area_of_rectangle()
{
    int l , b ;
    printf("Enter the length and breadth : ");
    scanf("%d%d",&l,&b);

    printf("Area of rectangle = %d\n", l*b);
}*/

 
// 9. Sum of first N natural numbers 

/*#include<stdio.h>

void sum();

int main()
{
    sum();
    return 0;
}

void sum()
{
    int N , i , sum =0 ;
    printf("Enter a number : ");
    scanf("%d",&N);

    for(i=1 ; i<=N ; i++)
    {
        sum += i ;
    }
    
    printf("sum = %d",sum);
}*/


// 10. Factorial of a number ;

/*#include<stdio.h>

void factorial();

int main()
{
    factorial();
    return 0;
}

void factorial()
{
    long long int n ,i , fact=1 ;
    printf("Enter a number : ");
    scanf("%lld",&n);

    for(i=1 ; i<=n ; i++ )
    {
        fact = fact*i;
    }
    printf("%d! = %d\n", n,fact);
}*/


// 11. POWER

/*#include<stdio.h>

void power();

int main()
{
    power();
    return 0;
}

void power()
{
    long long int n , i , power=1;
    printf("Enter a power : ");
    scanf("%lld",&n);
    
    for(i=power ; i<=n ; i++)
    {
        power = power*10;
        printf("%lld\n",power);
    }
    
}*/


// 12.  Wheather the numer is prime or not 

/*#include<stdio.h>

void primenumber();

int main()
{
    primenumber();
    return 0 ;
}

void primenumber()
{
    int n , i=2 , flag=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    if(n<=1)
    {
        printf("It is not a prime nmber");
        return ;                                  // note : Don't want to put 0
    }
    
    while(i<n)
    {
        if(n%i == 0)
        {
            flag=0;
            break;
        }
        i++;                               //note : Don't forget to add i++
    }
    
    if(flag==1)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
    
}*/


// 13. Reverse the number 

/*#include<stdio.h>

void reverse_number();

int main()
{
    reverse_number();
    return 0 ;
}

void reverse_number()
{
    int n , digit , rev=012345  ;
    printf("Enter a number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        digit = n%10;
        n=n/10;
        rev = rev*10 + digit ;
    }
    printf("Revresed number : %d",rev);
}*/


// 14. Palindrome number

/*#include<stdio.h>

void palindrome();

int main()
{
    palindrome();
    return 0;
}

void palindrome()
{
    int n, rev=0, digit, temp;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;

    while(n!=0)
    {
        digit = n%10;
        rev = rev*10 + digit ;
        n=n/10;
    }
    printf("Reversed number : %d\n",rev);

    if(rev==temp)
    {
        printf("It is a palindrome number");
    }
    else
    {
        printf("It is not a palindrome number");
    }

}*/


// 15. Armstrong number

/*#include<stdio.h>

void armstrong();

int main()
{
    armstrong();
    return 0;
}

void armstrong()
{
    int n , digit , temp , sum=0 , digit3 ;
    printf("Enter a number ");
    scanf("%d",&n);
    temp = n;

    while(n!=0)
    {
        digit = n%10;
        n = n/10;
        digit3 = digit*digit*digit;
        sum = sum + digit3;
    }

    if(sum==temp)
    {
        printf("It is an armstrong number");
    }
    else
    {
        printf("It is not an armstrong number");
    }
}*/

// 15.1 Armstrong number for all numbers

/*#include<stdio.h>

void armstrong();

int main()
{
    armstrong();
    return 0;
}

void armstrong()
{
    int n, digit, temp, sum=0 , count=0, i, temp2, digit1 ;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    temp2 = n;

    while(n!=0)
    {
        digit = n%10;
        n=n/10;
        count++ ;
//        printf("%d ",count);
    }
    
        while(temp!=0)
    {
        digit = temp%10;
        temp=temp/10;
        digit1=digit;

        for(i=1 ; i<count ; i++)
        {
            digit = digit * digit1 ;
            printf("%d  ",digit);
        }

        sum = sum + digit ;
    }

    printf("\nSUM = %d\n",sum);

    if(sum==temp2)
    {
        printf("It is an armstrong number ");
    }
    else
    {
        printf("It is not an armstrong number");
    }
}*/

// 15.2 Armstrong Number using Functions CHATGPT version (No Arguments, No Return Value)

/*#include <stdio.h>

void armstrong();

int main()
{
    armstrong();
    return 0;
}

void armstrong()
{
    int n, temp, temp2;
    int digit, count = 0;
    int sum = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;
    temp2 = n;

    // Count the number of digits
    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n != 0)
        {
            count++;
            n = n / 10;
        }
    }

    // Find the Armstrong sum
    while (temp != 0)
    {
        digit = temp % 10;

        int power = 1;
        for (int i = 1; i <= count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    // Special case for 0
    if (temp2 == 0)
    {
        sum = 0;
    }

    printf("Sum = %d\n", sum);

    if (sum == temp2)
    {
        printf("It is an Armstrong number.\n");
    }
    else
    {
        printf("It is not an Armstrong number.\n");
    }
}*/


// 16. Strong number 

/*#include<stdio.h>

void strongnumber();

int main()
{
    strongnumber();
    return 0;
}

void strongnumber()
{
    int n, digit, i, fact =1 , sum=0, temp;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n ;

    if(n == 0)
    {
        sum = 1;
        printf("SUM = %d\n",sum) ;
        printf("It is a strong number");
        return;                                 // note : just write return; no need for return 0
    }

    while(n!=0)
    {
        digit = n%10;
        n = n/10;

        for(i=1 ; i<=digit ; i++)
        {
            fact = fact*i ;
        }
        printf("%d\n",fact);
        
        sum = sum + fact ;
        fact = 1;

    }
    printf("SUM = %d\n",sum);

    if(sum==temp)
    {
        printf("It is a strong number");
    }
    else
    {
        printf("It is not a strong number");
    }
}*/


// 17. Perfect number

/*#include<stdio.h>

void perfectnumber();

int main()
{
    perfectnumber();
    return 0 ;
}

void perfectnumber()
{
    int n, i, f, sum=1, temp;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;

    for(i=2 ; i<n ; i++)
    {
        if(n%i == 0)
        {
            f = i ;
            printf("%d  ",f);
        }

        sum = sum + f ;
        f = 0;        
    }
    
    if(sum==temp)
    {
        printf("\n%d is a perfect number",temp);
    }
    else
    {
        printf("\n%d is not a perfect number",temp);
    }
}*/

// 17.1 Perfect number better version

/*#include<stdio.h>

void perfectnumber();

int main()
{
    perfectnumber();
    return 0 ;
}

void perfectnumber()
{
    int n, i, f, sum=1, temp;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;

    if(n<=1)
    {
        printf("%d is not a perfect number");
        printf("\nFactors : 1");
        return;
    }

    for(i=2 ; i<n ; i++)
    {
        if(n%i == 0)
        {
            printf("Factors : %d\n",i);
            sum+=i ;
        }

    }
    
    if(sum==temp)
    {
        printf("%d is a perfect number",temp);
    }
    else
    {
        printf("%d is not a perfect number",temp);
    }
}*/


//18. Automorphic number

/*#include<stdio.h>

void automorphic();

int main()
{
    automorphic();
    return 0;
}

void automorphic()
{
    int n, digit, n2, count=0, c, i, power=1, temp;
    printf("Enter a number : ");
    scanf("%d",&n);
    n2 = n*n;
    temp=n2;
    printf("Square = %d\n",n2);

    while(n2!=0)
    {
        digit = n2%10;
        n2=n2/10;
        count++;
    }
//    printf("%d\n",digit);

    for(i=1 ; i<count ; i++)           //note : finding power
    {
        power = power*10;
    }
//    printf("%d\n",power);
        
    digit = temp%power;
 //   printf("%d\n",digit);

    if(digit==n)
    {
        printf("%d is an automorphic number",n);
    }
    else
    {
        printf("%d is not an automrphic number",n);
    }
}*/

//18.1 Automorphic number Chatgpt simple version

/*#include <stdio.h>

void automorphic();

int main()
{
    automorphic();
    return 0;
}

void automorphic()
{
    int n, n2, temp, count = 0, power = 1, i;

    printf("Enter a number : ");
    scanf("%d", &n);

    n2 = n * n;
    temp = n;

    while(temp != 0)            //note : for just counting
    {
        count++;
        temp = temp / 10;
    }

    for(i = 1; i <= count; i++)        //note : for power
    {
        power = power * 10;
    }

    if((n2 % power) == n)
    {
        printf("%d is an Automorphic Number\n", n);
    }
    else
    {
        printf("%d is not an Automorphic Number\n", n);
    }
}*/


// 19. Harshad number

/*#include<stdio.h>

void harshad();

int main()
{
    harshad();
    return 0;
}

void harshad()
{
    int n, digit, sum=0, temp;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;

    if(temp == 0)
    {
        printf("0 is not a Harshad number\n");
        return;
    }

    while(n!=0)
    {
        digit = n%10;
        n = n/10;
        sum+=digit;
    }
//    printf("%d\n",sum);
    
    if((temp%sum)==0)
    {
        printf("%d is harshad number",temp);
    }
    else
    {
        printf("%d is not harshad number",temp);
    }
}*/


// 20. Duck number

/*#include<stdio.h>

void duck();

int main()
{
    duck();
    return 0;
}

void duck()
{
    int n, digit, temp, flag=0;
    printf("Enter a number :");
    scanf("%d",&n);
    temp = n;

    while(n!=0)
    {
        digit = n%10;
        n = n/10;
        if(digit==0)
        {
            flag=1;
            return;
        }
    }

    if(flag==1)
    {
        printf("%d is a duck number",temp);
    }
    else
    {
        printf("%d is not a duck number",temp);
    }
}*/