// 1. Struct Student (with members as Roll no , Name and Mark )

/*#include<stdio.h>
#include<string.h>

struct student
{
    int roll_no ;
    char name[30] ;
    float cgpa ;
};

int main()
{
    struct student student1 ;

    student1.roll_no = 1 ;
    strcpy(student1.name, "Aadithya") ;
    student1.cgpa    = 8.74 ;

    printf("Roll no : %d\n", student1.roll_no);
    printf("Name    : %s\n", student1.name);
    printf("CGPA    : %.2f\n", student1.cgpa);
    printf("Size of Student1 = %zu\n\n", sizeof(student1));

    struct student student2; 

    student2.roll_no = 2 ;
    strcpy(student2.name , "Abdul Musthan");
    student2.cgpa    = 7.56 ;

    printf("Roll no : %d\n",student2.roll_no);
    printf("Name    : %s\n", student2.name) ;
    printf("CGPA    : %.2f\n", student2.cgpa);
    printf("Size of student2 = %zu\n\n", sizeof(student2)) ;

    return 0 ;
}*/

// 1.1 Direct Initialisation

/*#include<stdio.h>

struct student 
{
    int roll_no ;
    char name[30] ;
    float cgpa  ;
};

int main()
{
    struct student student3 = {3, "Abhay Nath M" , 7.32} ;
    struct student student4 = {4, "Abhin MV", 5.89} ;
    struct student student5 = {5, "Abhinanda M", 9.49} ;

    printf("Roll no : %d\n", student3.roll_no);
    printf("Name    : %s\n", student3.name);
    printf("CGPA    : %.2f\n", student3.cgpa);
    printf("Size of student3 = %zu\n\n", sizeof(student3));

    printf("Roll no : %d\n", student4.roll_no);
    printf("Name    : %s\n", student4.name);
    printf("CGPA    : %.2f\n", student4.cgpa);
    printf("Size of student4 = %zu\n\n", sizeof(student4));

    printf("Roll no : %d\n", student5.roll_no);
    printf("Name    : %s\n", student5.name);
    printf("CGPA    : %.2f\n", student5.cgpa);
    printf("Size of student5 = %zu\n\n", sizeof(student5));

    return 0 ;
}*/

// 1.1 Another way of Initialisation

/*#include<stdio.h>

struct student 
{
    int roll_no ;
    char name[30] ;
    float cgpa  ;
};

int main()
{
    struct student student6 = 
    {
        .roll_no = 6 ,
        .name    = "Abinash K V" ,
        .cgpa    = 8.13 
    };

    struct student student7 = 
    {
        .roll_no = 7 ,
        .name    = "Adith Ramesh" ,
        .cgpa    = 7.41
    };

    printf("Roll no : %d\n", student6.roll_no);
    printf("Name    : %s\n", student6.name);
    printf("CGPA    : %.2f\n", student6.cgpa);
    printf("Size of student6 = %zu\n\n", sizeof(student6));

    printf("Roll no : %d\n", student7.roll_no);
    printf("Name    : %s\n", student7.name);
    printf("CGPA    : %.2f\n", student7.cgpa);
    printf("Size of student7 = %zu\n\n", sizeof(student7));


    return 0 ;
}*/



// 2. Array of Structure 

/*#include<stdio.h>

struct student        
{
    int roll_no ;
    char name[30]   ;
    float cgpa  ;
};

int main()
{
    struct student students[3] =
    {
        {1, "Aadithya" , 8.72} ,
        {2, "Abdul Musthan H M", 7.56} ,
        {3, "Abhay nath M", 7.32} ,
    };

    for(int i=0 ; i<3 ; i++)
    {
        printf("Roll no : %d\n", students[i].roll_no);
        printf("Name    : %s\n", students[i].name);
        printf("CGPA    : %.2f\n", students[i].cgpa);
        printf("Address : %p\n", (void *)&students[i]);
        printf("Size of student = %zu\n\n", sizeof(students[i]));
    }

    return 0 ;
}*/


// 3. Pointers to Structure


