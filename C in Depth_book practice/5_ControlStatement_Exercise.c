// 1. 
/*#include<stdio.h>
int main()
{
    int a=9 ;
    if(a=5)
    {
        printf("a is five\t");
    }
    else
    {
        printf("a is not five\t");
    }
    printf("Value of a is %d\n", a);
    return 0 ;
}*/



// 2.
/*#include<stdio.h>
int main()
{
    int a=0 ;
    if(a=0)          // note : Here 0 is treated as false
    {
        printf("a is zero\t");
    }
    else
    {
        printf("a is not zero\t");
    }
    printf("Value is a is %d\n", a);
    return 0 ;    
}*/



// 3. 
/*#include<stdio.h>
int main()
{
    int i=10 ;
    i==50 ;
    if (i==50)
    {
        printf("i is fifty\n");
    }
    else
    {
        printf("i is not fifty\n");
    }
    return 0;
}*/



// 4. 
/*#include<stdio.h>
int main()
{
    int a=20, b=3 ;
    if(a<10)
    {
        a=a-5 ;
        b=b+5 ;
    }
    printf("%d   %d", a, b);
    return 0 ;
}*/



// 5. 
/*#include<stdio.h>
int main()
{
    int a=9, b=0, c=0 ;
    if(!a<10 && !b || c)
    {
        printf("C in depth");
    }
    else
    {
        printf("See in Depth");
    }
    return 0 ;
}*/



// 6. 
/*#include<stdio.h>
int main()
{
    int i=1, j=9 ;
    if(i>=5 && j<5)
    {
        i=j+2;
    }
    printf("%d\n", i);
    return 0 ;
}*/



// 7. 
/*#include<stdio.h>
int main()
{
    int a=0, b=0 ;
    if(!a)
    {
        b=!a;
        if(b)
        {
            a=!b;
        }
    }
    printf("%d  %d", a, b);
    return 0 ;
}*/



// 8. 
/*#include<stdio.h>
int main()
{
    int a=2, x=10 ;
    if(a==2)
    {
        if(a==8)
        {
            printf("a is 2 and x is 8");
        }
    }
    else
    {
        printf("a is not 2");
    }
    return 0 ;
}*/



// 9. 
// que) 
/*#include<stdio.h>
int main()
{
    int x=3, a=10, b=5;
    x+= a<b ? (-x) : 100 ;
    printf("%d", x);
    return 0 ;
}*/

//ans)
/*#include<stdio.h>
int main()
{
    int x=3, a=10, b=5 ;
    if(a < b)
    {
        x += -x ;
    }
    else
    {
        x += 100 ;
    }
    printf("%d", x);
    return 0 ;
}*/



// 10. 
/*#include<stdio.h>
int main()
{
    int i=0, j=1, k=1, l=5, m=3, z;
    if(i==0)
    {
        if(j==k)
        {
            if(l<m)
            {
                z=100 ;
            }
        }
    }
}*/



// 11. 
/*#include<stdio.h>
int main()
{
    int x=0, y=1 ;
    if(x==0)
    {
        y++;
    }
    else if(x>0)
    {
        y-- ;
    }
    else if(x<0)
    {
        y+=2 ; 
    }
    printf("%d", y);
    return 0 ;
}*/



// 12.
/*#include<stdio.h>
int main()
{
    char grade ;
    int marks ;
    printf("Enter the Grade : ");
    scanf("%c", &grade);
    printf("Enter the mark : ");
    scanf("%d", &marks);

    if(grade == 'A')
    {
        if(marks > 95)
        {
            printf("Excellent\n");
        }
    }
    else
    {
        printf("Work hard and get A grade\n");
    }
    return 0 ;
}*/



// 13. 
/*#include<stdio.h>
int main()
{
    int a=10 , b=20, c=30 ;
    if(a==10)
    {
        if(b==20)
        {
            if(c==30)
            {
                printf("a is 10\nb is 20\nc is 30\n");
            }
        }
        else
        {
            printf("a is 10\nb is not 20");
        }
    }
    else
    {
        printf("a is not 10");
    }

    return 0 ;
}*/



// 14, 
/*#include<stdio.h>
int main()
{
    int k=10;
    switch(k)
    {
        case '5'  :
        case '10' : 
                k++ ;
                continue;
        case '15' : 
        case '20' : 
                k-- ;
    }
    return 0 ;
}*/



// 15. 
/*#include<stdio.h>
int main()
{
    int var=2, x=1, y=2 ;
    switch(var)
    {
        case x : x++ ; break ;
        case y : y++ ; break ;
    }
    printf("%d, %d", x, y);
    return 0 ;
}*/



// 16. 
/*#include<stdio.h>
int main()
{
    int i, total=0 ;
    for(i=1 ; i<=10 ; i++)
    {
        switch(i)
        {
            case 1 :
            case 4 :
            case 5 :
            case 7 : total += i ; break ;
            default : continue;
        }
        printf("%d  ", i);
    }
    printf("\nTotal = %d\n", total) ;
    return 0 ;
}*/



// 17. 
/*#include<stdio.h>
int main()
{
    int x=2 , y=20 ;
    switch(x)
    {
        y=30 ;
        case 1 : y++ ; break ; 
        case 2 : y-- ; break ;
        default : y+=2 ;
    }
    printf("y is %d\n", y);
    return 0 ;
}*/



// 18 i)
//Que) Convert this into switch type
/*#include<stdio.h>
int main()
{
    int x=6, y=1;
    if(x==1)
    {
        y=x+1 ;
    }
    else if(x==2)
    {
        y=0;
        x=0;
    }
    else if(x==3 || x==4 || x==5)
    {
        y++;
    }
    else if(x==6)
    {
        y+=4;
    }
    else
    {
        y-- ; 
    }

    printf("y is %d", y);
    return 0 ; 
}*/

//ans)
/*#include<stdio.h>
int main()
{
    int x=4, y=1 ;
    switch (x)
    {
        case 1 : y=x+1 ; break ;
        case 2 : y=0 ; x=0 ; break ;
        case 3 :
        case 4 : 
        case 5 : y++ ; break ;
        case 6 : y+=4 ; break ;
        default : y-- ; break ;
    }
    printf("y is %d\n", y);
    return 0 ;
}*/


// 18. ii)
// Que : Convert this into switch type 
/*#include<stdio.h>
int main()
{
    int x=3, y=1 ;
    if(x==1)
    {
        y=x+2 ;
    }
    else if (x==2 || x==3 || x==4)
    {
        y++ ;
    }
    else if(x==5)
    {
        y-- ;
    }
    else if(x==6)
    {
        y=0 ;
    }

    printf("y is %d", y);
    return 0 ;
}*/

//Ans)
/*#include<stdio.h>
int main()
{
    int x=1 , y=1 ;
    switch(x)
    {
        case 1 : y=x+1 ; break;
        case 2 : 
        case 3 :
        case 4 : y++ ; break ;
        case 5 : y-- ; break ;
        case 6 : y=0 ; break ;
    }
    printf("y is %d", y);
    return 0 ;
}*/



// 23. 
// i)
/*#include<stdio.h>
int main()
{
    for(int i=10 ; i<=70 ; i+=10)
    {
        printf("%d ", i);
    }
    return 0;
}*/



// ii)
/*#include<stdio.h>
int main()
{
    for(int i=-70 ; i<=-10 ; i+=10)
    {
        printf("%d ", i);
    }
    return 0;
}*/


// iii)
#include<stdio.h>
int main()
{
    for(int i=1 ; i<=1111 ; i+=10)
    {
        printf("%d ", i);
    }
    return 0;
}