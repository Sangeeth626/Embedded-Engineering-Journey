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
#include<stdio.h>
#include<limits.h>
int main()
{
    int a=4000000000;
    unsigned int b=4000000000;
    printf("a=%d\t b=%u\n", a, b);
    printf("a=%d\t b=%u\n", INT_MAX, UINT_MAX);
    return 0 ;
}