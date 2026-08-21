/*//1. Simple Calculator using Switch Case

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,x ;
    printf("==== Calculator ==== \n\n");
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Modulus\n 6.Power\n 7.Maximum of two numbers\n 8.Minimum of two numbers\n\n");
    printf("Enter your choice :\n");
    scanf("%d",&x);
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    switch(x)
    {
        case 1 : 
                printf(" Output : %d + %d = %d ", a, b, a+b);
                break;

        case 2 : 
                printf(" Output : %d - %d = %d ", a, b, a-b);
                break;

        case 3 : 
                printf("Output : %d * %d = %d ", a, b ,a*b);
                break;

        case 4 : 
                if(b!=0)
                    printf("Output : %d / %d = %.2f" , a, b, (float)a/b);         // note : %.2f  and (float)a/b 
                else
                    printf("Division by zero is not allowed");
                break;
        
        case 5 : 
                if(b!=0)
                    printf("Output : %d %% %d = %d ", a,b , a%b);                     // note : %% is used to print % in printf
                else 
                    printf("Modulus by zero is not allowed");
                break;
        
        case 6 :
               printf("Output : %d^%d = %d", a,b , (int)pow(a,b));                   // note : (int)pow(a,b) is used to convert the result of pow(a,b) to integer as pow() returns double
               break;
               
        case 7 :
                if(a>b)
                    printf("%d is greater",a);
                else if(b>a)
                    printf("%d is greater",b);
                else
                    printf("Both number are equal", a,b);    
                break;
                
        case 8 :
                if (a<b)
                    printf("%d is smaller",a);
                else if(b<a)
                    printf("%d is smaller",b);
                else
                    printf("Both number are equal", a,b);    
                break;    
        
        
        default : printf("Invalid choice");
    }

    return 0;
}*/



//2. Day of the week using Switch Case

/*#include<stdio.h>
int main()
{
    int d;
    printf("Enter the day : ");
    scanf("%d",&d);

    switch(d)                                 // note : d is enough to store the day of the week as it can only take values from 1 to 7
    {
    case 1 : 
        printf("It's Monday");
        break;

    case 2 : 
        printf("It's Tuesday");
        break;

    case 3 : 
        printf("It's Wednesday");
        break;

    case 4 : 
        printf("It's Thursday");
        break;
             
    case 5 : 
        printf("It's Friday");
        break;
             
    case 6 : 
        printf("Its Saturday");
        break;         
             
    case 7 : 
        printf("It's Sunday");
        break;

    default : 
        printf("Invalid day");         
    
    }
    return 0;

}*/




/*// 3.Month name using switch

#include<stdio.h>
int main()
{
    int m , y ;
    printf("Enter the month (1-12) :  ");
    scanf("%d",&m);

    switch(m)
    {
        case 1 :
            printf("It's January\n");
            break;

        case 2 :
            printf("It's February\n");
            break;
            
        case 3 :
            printf("It's March\n");
            break;
            
        case 4 :
            printf("It's April\n");
            break;
            
        case 5 :
            printf("It's May\n");
            break;
            
        case 6 :
            printf("It's June\n");
            break;
            
        case 7 :
            printf("It's July\n");
            break;
            
        case 8 :
            printf("It's August\n");
            break;
            
        case 9 :
            printf("It's September\n");
            break;
            
        case 10 :
            printf("It's October\n");
            break;
            
        case 11 :
            printf("It's November\n");
            break;
            
        case 12 :
            printf("It's December\n");
            break;  
            
        default :
            printf("Invalid month\n");    
            return 0;                                                 // note : Will be better to write return 0 after invalid
    }


    
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m ==10 || m == 12)             //note : m seperatly with ||
    {
        printf("It has 31 days");
    }
        
    else if(m == 4 || m == 6 || m == 9 || m == 11) 
    {
        printf("It has 30 days");
    }
        
    else 
    {
        if(m==2)
        {   
            printf("Enter the year  : ");
            scanf("%d",&y);
            if((y%400==0) || (y%4==0 && y%100!=0) )                              // note : Leap year condition
              printf("It is a leap year. Febuary has 29 days");
            else
              printf("It is not a leap year. Febraury has only 28 days");
        }
    }
           
    return 0;

}*/



/*//4. Grade using switch case       //note : better to use if else for range of marks

#include<stdio.h>
int main()
{
    int m ;
    printf("Enter your mark : ");
    scanf("%d",&m);

    switch(m)
    {
        case 90 ... 100 :
                printf("S grade");
                break;

        case 80 ... 89  :
                printf("A grade");
                break;

        case 70 ... 79 :
                printf("B grade");
                break;

        case 60 ... 69 :
                printf("C grade");
                break;

        case 50 ... 59 :
                printf("D grade");
                break;

        case 40 ... 49 :
                printf("E grade");
                break;
                
        case 0 ... 39 :
                printf("F grade");
                break;      

         default :
                printf("Enter number between 0 to 100 ");       


    }
}*/



// TERNARY OPERATOR

// 1. Find the maximum of two numbers using ternary operator

/*#include <stdio.h>
int main()
{
    int a,b ;                                 //note : Nested ternary operation
    printf("Enter two numbers");              //       Also consider equal cases
    scanf("%d%d",&a, &b);
    (a>b) ? printf("%d is greater",a) : (b>a) ? printf("%d is greater",b) : printf("Both are equal") ;

}*/


// 2. Even or odd

/*#include<stdio.h> 
int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    (n%2 == 0) ? printf("It is an even number") 
               : printf("It is an odd number");

    return 0;
}*/


// 3. Eligible for vote

/*#include <stdio.h>
int main()
{
    int a ;
    printf("Enter your age : ");
    scanf("%d",&a);
    
    (a>=18) ? printf("You are eligible for vote") 
            : printf("You are not eligible for vote") ;

    return 0;
}*/


// 5. Find positive, negative or zero

/*#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    (n>0) ? printf("It is a positive number") 
          : (n<0) ? printf("It is a negative number")
                  : printf("It is zero") ;

    return 0;      
   
}*/


// 6. Absolute value of a number

/*#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    (n>0) ? printf("Absolute value is %d" ,n)
          : (n<0) ? printf("Absolute value is %d",-n)
                  : printf("Absolute value is %d",n) ;

    return 0;              
}*/


// 7. Greatest of three number

/*#include<stdio.h>
int main()
{
    int n1 ,n2 ,n3 ;
    printf("Enter any three numbers : ");
    scanf("%d%d%d",&n1 ,&n2 ,&n3);

    (n1>n2 && n1>n3) ? printf("%d is greater",n1) 
                     : (n2>n1 && n2>n3) ? printf("%d is greater",n2)
                                        :(n3>n1 && n3>n2) ? printf("%d is greater",n3)
                                                          : (n1==n2 && n1>n3) ? printf("First and Second number are greater and equal")
                                                                              : (n2==n3 && n2>n1) ? printf("Second and Third number are greater and equal")
                                                                                                  : (n3==n1 && n3>n2) ? printf("First and third number are greater and equal") 
                                                                                                                      : printf("All three numbers are equal") ;
    
    return 0;                                                                      
}*/

