// 1.
/*#include<stdio.h>
#define MSSG "Hello World\n"
int main()
{
    printf(MSSG);
    return 0 ;
}*/



// 2.
/*#include<stdio.h>
int main()
{
    printf("Indian\b \n");     // space overwrite 'n'
    printf("New\rDelhi\n");    // 'D' overwrite 'N' , 'e' overwrite 'e' , 'l' overwrite 'w'
    return 0 ;
}*/



// 3. 
/*#include<stdio.h>
int main()
{
    int a=11 ;
    printf("a=%d\t", a);
    printf("a=%o\t", a);
    printf("a=%x\t", a);
    printf("a=%d\t", a);
    return 0 ;
}*/



// 4. 
/*#include<stdio.h>
#include<limits.h>
int main()
{
    int a=4000000000;
    unsigned int b=4000000000;
    printf("a=%d\t b=%u\n", a, b);
    printf("a=%d\t b=%u\n", INT_MAX, UINT_MAX);
    return 0 ;
}*/



// 5. 
/*#include<stdio.h>
int main()
{
    char c ;
    printf("Enter a character :");
    scanf("%c", &c);
    printf("%d", c);
    return 0 ;
}*/



// 6. 
/*#include<stdio.h>
int main()
{
    float b=123.1265 ;
    printf("%f\n", b);
    printf("%.2f\n", b);
    printf("%.3f\n", b);
    return 0 ;
}*/



// 7. 
/*#include<stdio.h>
int main()
{
    int a=626, b=2394, c=12345;
    printf("%5d, %5d, %5d\n", a, b, c);
    printf("%3d, %4d, %5d\n", a, b, c);
    return 0 ;
}*/



// 8. 
/*#include<stdio.h>
int main()
{
    int a=98;
    char ch='c';
    printf("%c\n", a);
    printf("%d\n", ch);
    return 0 ;
}*/



// 9. 
/*#include<stdio.h>
int main()
{
    float a1, b1, a2, b2, a3, b3 ;
    a1=2;
    b1=6.8;
    a2=4.2;
    b2=3.57;
    a3=9.82;
    b3=85.653;

    printf("%3.1f, %4.2f\n", a1, b1);
    printf("%5.1f, %6.2f\n", a1, b1);
    printf("%7.1f, %8.2f\n", a1, b1);

    return 0 ;
}*/



// 10. 
#include<stdio.h>
int main()
{
    printf("%10s\n", "India");
    printf("%4s\n", "India");
    printf("%.2s\n", "India");
    printf("%5.2s\n", "India");
    return 0 ;
}