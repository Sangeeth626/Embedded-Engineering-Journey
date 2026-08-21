// 1.which number is greater a or b

/*#include <stdio.h>
int main()
{
    int a=10, b=50;
    if(a > b)
        printf("a is greater than b\n");

    else
        printf("b is greater\n");
    return 0;
}*/




// 2. check wheather a number is even or odd

/*#include <stdio.h>
int main ()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2 == 0)
        printf("%d is even number\n", n);
    else
        printf("%d is odd number\n", n);
    return 0;
}*/




// 3.Three number which is greater 

/*#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b && a >= c)
        printf("a is the greatest\n");
    else if(b >= a && b >= c)
        printf("b is the greatest\n");
    else
        printf("c is the greatest\n");
    return 0;
}*/




// 4. Grading system

/*#include <stdio.h>
int main ()
{
    int n;
    printf("Enter your mark\n");
    scanf("%d",&n);
    if(n<=100 && n>=90)
       printf("You have A+ grade");
    else if (n<90 && n>=80)
       printf("You have A grade ");
    else if(n<80 && n>=70)
       printf("You have B+ grade");
    else if(n<70 && n>=60)
       printf("You have B grade");
    else if(n<60 && n>=50)
       printf("You have C+ grade");
    else if(n<50 && n>=40)
       printf("You have C grade");
    else if(n<40 && n>=30)
       printf("You have D grade");
    else if(n<30 && n>=0)      
       printf("You are Failed");
    else
       printf("Please Enter a vaid number");   
 
    return 0;   
}*/




// 5. Leap year or not

//1st Method

/*#include <stdio.h>
int main ()
{
    int n;
    printf("Enter a Year :");
    scanf("%d",&n);
    if(n%4==0)
    {
        if(n%100==0)
        {
            if(n%400==0)
               printf("It is a Leap year");
            else
               printf("It is not a Leap Year");   
        } 
        else       
         printf("It is a Leap Year");
    }
    else
      printf("It is a not leap Year");
     return 0;  
}*/

//2nd Method

/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Year : ");
    scanf("%d",&n);

    if((n%400==0) || (n%4==0 && n%100!=0))
    {
      printf("It is Leap Year");
    }  
    else
    {
       printf("It is not a Leap Year");
    }
    return 0;   
} */  


// 6. Smallest of Three numbers

/*#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d%d%d" , &a,&b,&c);                 //note : no comma between %d%d%d
    
    if(a<=b && a<=c)
    {
        printf("%d is smallest",a);
    }
    else if(b<=c && b<=a)
    {
        printf("%d is smallest",b);
    }
    else                                      //note : no () in else
    {
        printf("%d is smallest",c);
    }
    return 0;
}*/



// 7.Eligibele for driving license or not

/*#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("You are Eligible for vote");
    }
    else
    {
        printf("You are not Eligible for Vote");

    }
    return 0;
}*/



// 8. Triangle is valid or not

/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the side value of tringle : ");
    scanf("%d%d%d" , &a,&b,&c);

    if(a>0 && b>0 && c>0 && a+b>c && b+c>a && c+a>b)
    {
        printf("Triangele is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
    
    return 0;
}*/



// 9. Check whether a character is vowel or not 

/*#include <stdio.h>
int main()
{
    char x ;                                                  // note : no need to declare a,e,i,o,u
    printf("Enter the alphabet : ");
    scanf("%c",&x);

    if(x=='a' || x=='e' ||  x=='i' || x=='o' ||  x=='u')          //note : use comparison operation(==), not assignment operation (=)
    {                                                             //      'a' 'e' 'i' 'o' 'u'
        printf("This alphabet is vowel");                         //   || operation , not &&a
    
    }
    else  
    {
        printf("This alphabet is not vowel");
     }
      
    return 0;
}*/



// 10. ATM MACHINE

/*#include <stdio.h>
int main()
{
    int pin ,choice , bal=10000 , dep , wit ;
    int choice2 , choice3 , opin , npin ;

    printf("Enter your PIN : ");
    scanf("%d",&pin);

    if(pin==1234)
    {
      printf("Welcome to canara bank\n");
      printf("Press 1 to check balance\n");
      printf("Press 2 to deposit\n");
      printf("Press 3 to withdraw\n");
      printf("Press 4 to exit\n");
      printf("Press 5 to change tha PIN \n");
      //printf("Press 6 for Mini statement \n");
      
      scanf("%d",&choice);

      if(choice == 1 )
      {
        printf("Your balance = %d",bal);
      }
      else if(choice == 2)
      {
        printf("How much amount do you want to deposit : ");
        scanf("%d",&dep);
        if(dep<=0)
        {
            printf("The depositing amount should be greater than 0 \n");
        }
        else
        {
            printf("You have successfully deposited %d \n",dep);
        }
        
        printf("Do you want to check your current balance\n");
        printf("If yes press 5\n");
        printf("If no press 6\n");
        scanf("%d",&choice2);
        if(choice2 == 5)
        {
           // bal = bal + dep ;
            printf("Your current balance is %d" ,bal);
        }
        else
        {
            printf("Thank you for using canara bank ");
        }
     }

      else if(choice == 3)
      {
        printf("How much amount do you want to withdraw : ");
        scanf("%d",&wit);
        if(wit<=0)
        {
            printf("Withdraw amount should be greater than 0\n");
        }
        else if(wit>bal)
        {
            printf("insufficient balance \n");
        }
        else
        {
            printf("You are withdrawing %d \n",wit);
        }
         printf("Do you want to check your current balance \n");
         printf("If yes press 7 \n");
         printf("If no press 8 \n");
         scanf("%d",&choice3);
         if(choice3 == 7)
         {
            bal = bal - wit ;
            printf("Your current balance is %d \n ", bal);
            printf("Thank you for using canara bank \n");
         }
         else
         printf("Thank you for using canara bank");
      }

      else if(choice == 5)
      {
        printf("Enter your old PIN : ");
        scanf("%d",&opin);
        if(opin == pin)
        {
            printf("Enter the new PIN : ");
            scanf("%d",&npin);
            pin = npin;
            printf("Pin updated successfully");

         }
         else 
         {
            printf("you entered wrong PIN");
         }
      }

      //else if(choice == 6)
      //{
      //  printf("Previous balance = %d \n",bal);
      //  printf("Deposit = %d \n",dep);
      //printf("Withdrawal = %d \n",wit);
       // printf("Currrent balance = %d \n",bal);

      }


      else if(choice == 4)
      {
        printf("Thank you for using canara bank");
      }

      else
      {
        printf("Invalid choice please try again");
      }

      
    }
    else
    {
        printf("You entered wrong PIN");
    }

    return 0;
}

*/

