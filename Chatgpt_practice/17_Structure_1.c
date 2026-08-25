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

    printf("Size of student = %zu\n\n", sizeof(students));

    return 0 ;
}*/


// 3. Pointers to Structure

/*#include<stdio.h>

struct student 
{
    int roll_no ;
    char name[30] ;
    float cgpa ;
};

int main()
{
    struct student student1 = {1,"Aadithya", 8.72};
    struct student *p1 ;
    p1 = &student1 ;
    printf("Roll number = %d\n", p1->roll_no);
    printf("Name        = %s\n", p1->name);
    printf("CGPA        = %.2f\n\n", p1->cgpa);

    struct student student2 = {2, "Abdul Musthan H M", 7.56};
    struct student *p2 ;
    p2 = &student2 ;
    printf("Roll number = %d\n", (*p2).roll_no);
    printf("Name        = %s\n", (*p2).name);
    printf("CGPA        = %.2f\n",(*p2).cgpa);

    return 0 ; 
}*/


// 4. Pointer to Array of Structure

/*#include<stdio.h>

struct student 
{
    int roll_no ;
    char name[30] ;
    float cgpa ;
};

int main()
{
    struct student student[3] = {{1, "Aadithya", 8.72} , {2, "Abdul Musthan H M", 7.56} , {3, "Abhay nath M", 7.32}} ;
    struct student *p = student ;      // note : Here student is an array , so we dont want to use &student because student itself an array which points to first element of array 

    printf("Roll number = %d\n", p->roll_no);
    printf("Name        = %s\n", p->name);
    printf("CGPA        = %.2f\n", p->cgpa);
    printf("Address     = %p\n\n", p);
    p++ ;
    printf("Roll number = %d\n", p->roll_no);
    printf("Name        = %s\n", p->name);
    printf("CGPA        = %.2f\n", p->cgpa);
    printf("Address     = %p\n\n", p);
    p++ ;
    printf("Roll number = %d\n", p->roll_no);
    printf("Name        = %s\n", p->name);
    printf("CGPA        = %.2f\n", p->cgpa);
    printf("Address     = %p\n", p);

    return 0 ;
}*/

// 4.1 Pointer to Array of Structure (short version using loops)

/*#include<stdio.h>

struct student 
{
    int roll_no ;
    char name[30] ;
    float cgpa ;
};

int main()
{
    struct student student[3] = {{1, "Aadithya", 8.72} , {2, "Abdul Musthan H M", 7.56} , {3, "Abhay nath M", 7.32}} ;
    struct student *p = student ;       // struct student *p = student; // student is an array of structures. // In this expression, the array name "student" decays // to a pointer to its first element (&student[0]).

    for(int i=0 ; i<3 ; i++)                // i controls the number of loop iterations.  // p points to the current structure.   // p++ moves p to the next structure.
    {
        printf("Roll number = %d\n", p->roll_no);
        printf("Name        = %s\n", p->name);
        printf("CGPA        = %.2f\n", p->cgpa);
        printf("Address     = %p\n\n", (void *)p);   // note : (void *)p is better , when finding the address
        p++ ;
    }

    return 0 ;
}*/


// 5. Structure + Function (Pass by value)

/*#include<stdio.h>

struct Device 
{
    char name[30] ;
    int id ;
    float temperature;
    float voltage;
    float current;
};

void display(struct Device d1);
void change(struct Device d1);
int main()
{
    struct Device d1 = { "LTC" , 2291 , 54.65 , 12 , 2 };

    printf("Voltage in main() before function call = %.2f\n\n", d1.voltage) ;
    display(d1);

    change(d1);
    printf("Voltage in main() after function call  = %.2f\n", d1.voltage) ;

    return 0 ;
}

void display(struct Device d1)
{
    printf("Device      : %s\n", d1.name);
    printf("ID          : %d\n", d1.id);
    printf("Temperature : %.2f\n", d1.temperature);
    printf("Voltage     : %.2f\n", d1.voltage);
    printf("Current     : %.2f\n", d1.current);
}

void change(struct Device d1)
{
    d1.voltage = 10 ;
    printf("\nVoltage in func() = %.2f\n", d1.voltage);
}*/


// 6. Structure + Function (Pass by value for display and Passing pointer to structure for changing)

/*#include<stdio.h>

struct Device 
{
    char name[30] ;
    int id ;
    float temperature;
    float voltage;
    float current;
};

void display(struct Device d1);
void change(struct Device *p);
int main()
{
    struct Device d1 = { "LTC" , 2291 , 54.65 , 12 , 2 };
    struct Device *p = &d1 ;

    printf("Voltage in main() before function call = %.2f\n\n", p->voltage) ;
    display(d1);

    change(p);
    printf("Voltage in main() after function call  = %.2f\n", p->voltage) ;

    return 0 ;
}

void display(struct Device d1)
{
    printf("Device      : %s\n", d1.name);
    printf("ID          : %d\n", d1.id);
    printf("Temperature : %.2f\n", d1.temperature);
    printf("Voltage     : %.2f\n", d1.voltage);
    printf("Current     : %.2f\n", d1.current);
}

void change(struct Device *p)
{
    p->voltage = 10 ;
    printf("\nVoltage in func() = %.2f\n", p->voltage);
}*/


// 7. Returning a Structure from a Function and Displaying using pass by value and passing pointer to structure

/*#include<stdio.h>

struct Device 
{
    char name[20];
    int id ;
    float temperature ;
    float voltage ;
    float current ;
};

struct Device device_details1();           // note : For studying return struct
struct Device device_details2();           
void display1(struct Device d1);           // note : Displaying using pass by value
void display2(const struct Device *p);     // note : Displaying by passing pointer to structure  (here const is given to make the displat read only)

int main()
{
    struct Device d1, d2;

    d1 = device_details1() ;
    display1(d1);

    d2 = device_details2() ;
    display2(&d2);

    return 0 ;
}

struct Device device_details1()
{
    struct Device d1 = { "LTC" , 2291 , 24.65 , 12 , 2 };
    return d1;
}

struct Device device_details2()
{
    struct Device d2 = { "Raspberry pi" , 4 , 19.98 , 4 , 5.1 };
    return d2 ;
}

void display1(struct Device d1)
{
    printf("Device Name : %s\n", d1.name);
    printf("Device ID   : %d\n", d1.id);
    printf("Temperature : %.2f\n", d1.temperature);
    printf("Voltage     : %.2f\n", d1.voltage);
    printf("Current     : %.2f\n", d1.current);
}

void display2(const struct Device *p)
{
    printf("Device Name : %s\n", p->name);
    printf("Device ID   : %d\n", p->id);
    printf("Temperature : %.2f\n", p->temperature);
    printf("Voltage     : %.2f\n", p->voltage);
    printf("Current     : %.2f\n", p->current);
}*/


// 8. NESTED STRUCTURE

/*#include <stdio.h>

struct Sensor
{
    float heart_rate ;
    float spo2 ;
};

struct Power
{
    float voltage ;
    float current ;
};

struct Device
{
    char name[20];
    int id ;
    struct Sensor sensor;
    struct Power power ;
};

void display_pbv(struct Device d);     // Pass by value
void display_pts(const struct Device *p);    // Passing pointer to structure (C does not have true pass-by-reference)

int main()
{
    struct Device d ={"PulseGuard-V2" , 10894 , 72.5 , 98.4 , 3.78 , -0.012} ;

    display_pbv(d) ;
    display_pts(&d) ;

    return 0;
}

void display_pbv(struct Device d)
{
    printf("\nDisplay Device Details using Pass by Value\n");
    printf("Device name     : %s\n", d.name);
    printf("Device ID       : %d\n", d.id);
    printf("Heart Rate      : %.2f\n", d.sensor.heart_rate);
    printf("SpO2 conc       : %.2f\n", d.sensor.spo2);
    printf("Device Voltage  : %.2f\n", d.power.voltage);
    printf("Device Currrent : %.2f\n", d.power.current);
}

void display_pts(const struct Device *p)            // note (const struct Device *p) : This tells the compiler and future programmers that this function is only going to read the Device through p.
{
    printf("\nDisplay Device Details using Pass by Referance\n");
    printf("Device name     : %s\n", p->name);
    printf("Device ID       : %d\n", p->id);
    printf("Heart Rate      : %.2f\n", p->sensor.heart_rate);
    printf("SpO2 conc       : %.2f\n", p->sensor.spo2);
    printf("Device Voltage  : %.2f\n", p->power.voltage);
    printf("Device Currrent : %.2f\n", p->power.current);
}*/


// 9. typedef struct


