// 1. Passing a Structure

#include<stdio.h>

typedef struct
{
    int id ;
    float marks ;
}Student;

void update_structure(Student *s1);

int main()
{
    Student s1 = {1012, 99.5} ;

    printf("before updating id    : %d\n", s1.id);
    printf("before updating marks : %.2f\n", s1.marks);
    
    structure_passing(&s1);

    printf("After updating id    : %d\n", s1.id);
    printf("After updating marks : %.2f\n", s1.marks);

    return 0 ;
}

void update_structure(Student *s1)
{
    s1->id  = 1022 ;
    s1->marks = 67.86 ;
}