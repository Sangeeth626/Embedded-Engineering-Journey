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

// 1.1 Another way of Initialisation (Designated Initialization)

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

/*#include<stdio.h>

typedef struct 
{
    float heart_rate ;
    float spo2 ;
} Sensor;

typedef struct
{
    float voltage ;
    float current ;
} Power ;

typedef struct 
{
    char name[20] ;
    int id ;
    Sensor sensor ;
    Power power ;
} Device ;

int main()
{
    Device d =
    {
        .name              = "PulseGuard_V2" ,
        .id                = 10894 ,
        .sensor.heart_rate = 75.2 ,
        .sensor.spo2       = 98.4 ,
        .power.voltage     = 3.78 ,
        .power.current     = -0.012
    };
    Device *p = &d ;

    printf("Device name     : %s\n", p->name);
    printf("Device ID       : %d\n", p->id);
    printf("Heart Rate      : %.2f\n", p->sensor.heart_rate);
    printf("SpO2 conc       : %.2f\n", p->sensor.spo2);
    printf("Device Voltage  : %.3f\n", p->power.voltage);
    printf("Device Currrent : %.3f\n", p->power.current);

    return 0 ;
}*/


// 10. Structure + Array Problem

/*#include<stdio.h>

typedef struct 
{
    int id ;
    char name[20] ;
    float temp ;
    float voltage ;
} Sensor ;


int main()
{
    Sensor s[3] =
    {
        {.id = 101 , .name = "LM35", .temp = 32.5 , .voltage = 3.31 } ,
        {.id = 102 , .name = "BMP280", .temp = 28.7, .voltage = 3.28} ,
        {.id = 103 , .name = "DHT11", .temp = 30.2, .voltage = 3.31}
    } ;
    Sensor *p = s ;

    printf("\nPrinting using Array indexing\n\n");
    for(int i = 0 ; i<3 ; i++)
    {
        printf("Sensor ID   : %d\n", s[i].id) ;
        printf("Sensor Name : %s\n", s[i].name) ;
        printf("Temperature : %.2f\n", s[i].temp) ;
        printf("Voltage     : %.2f\n\n", s[i].voltage) ;
    }

    printf("\n\nPrinting using Structure pointer\n\n");
    printf("Sensor ID   : %d\n", p->id) ;
    printf("Sensor Name : %s\n", p->name) ;
    printf("Temperature : %.2f\n", p->temp) ;
    printf("Voltage     : %.2f\n", p->voltage) ;
    printf("Address     : %p\n", p);
    printf("Size of s1  : %zu\n\n", sizeof(*p));
    p++ ;
    printf("Sensor ID   : %d\n", p->id) ;
    printf("Sensor Name : %s\n", p->name) ;
    printf("Temperature : %.2f\n", p->temp) ;
    printf("Voltage     : %.2f\n", p->voltage) ;
    printf("Address     : %p\n", p);
    printf("Size of s2  : %zu\n\n", sizeof(*p));
    p++ ;
    printf("Sensor ID   : %d\n", p->id) ;
    printf("Sensor Name : %s\n", p->name) ;
    printf("Temperature : %.2f\n", p->temp) ;
    printf("Voltage     : %.2f\n", p->voltage) ;
    printf("Address     : %p\n", p);
    printf("Size of s3  : %zu\n\n", sizeof(*p));

    printf("Size of s   : %zu\n", sizeof(s));
    
    return 0 ;
}*/


// 11. Padding and Alignment (int char)

/*#include<stdio.h>

typedef struct
{
    char c ;
    int i  ;
} Test ;

int main()
{
    Test t ;

    printf("Address of t  = %p\n", (void *)&t);
    printf("Address of c  = %p\n", (void *)&t.c);
    printf("Address of i  = %p\n", (void *)&t.i);

    printf("Size of c     = %zu\n", sizeof(t.c));
    printf("Size of i     = %zu\n", sizeof(t.i));
    printf("Size of Test  = %zu\n", sizeof(t));

    return 0 ;
}*/

// 11.1 Padding and Alignment (int char)

/*#include<stdio.h>

typedef struct
{
    int i  ;
    char c ;
} Test ;

int main()
{
    Test t ;

    printf("Address of t  = %p\n", (void *)&t);
    printf("Address of c  = %p\n", (void *)&t.c);
    printf("Address of i  = %p\n", (void *)&t.i);

    printf("Size of c     = %zu\n", sizeof(t.c));
    printf("Size of i     = %zu\n", sizeof(t.i));
    printf("Size of Test  = %zu\n", sizeof(t));

    return 0 ;
}*/

// 11.2 Padding and Alignment (char int char)

/*#include<stdio.h>

typedef struct
{
    char a ;
    int b  ;
    char c ;
} Test ;

int main()
{
    Test t ;

    printf("Address of t       = %p\n", (void *)&t);
    printf("Address of char a  = %p\n", (void *)&t.a);
    printf("Address of int b   = %p\n", (void *)&t.b);
    printf("Address of char c  = %p\n", (void *)&t.c);

    printf("Size of char a    = %zu\n", sizeof(t.a));
    printf("Size of int b     = %zu\n", sizeof(t.b));
    printf("Size of char c    = %zu\n", sizeof(t.c));
    printf("Size of Test      = %zu\n", sizeof(t));

    return 0 ;
}*/

// 11.3 Padding and Alignment (Test1 : char int char , Test2 : int char char)

/*#include<stdio.h>

typedef struct
{
    char a ;
    int b  ;
    char c ;
} Test1 ;

typedef struct
{
    int b  ;
    char a ;
    char c ;
} Test2 ;

int main()
{
    Test1 t1 ;
    Test2 t2 ;

    printf("Address of t1     = %p\n", (void *)&t1);
    printf("Address of char a = %p\n", (void *)&t1.a);
    printf("Address of int b  = %p\n", (void *)&t1.b);
    printf("Address of char c = %p\n", (void *)&t1.c);
    printf("Size of char a    = %zu\n", sizeof(t1.a));
    printf("Size of int b     = %zu\n", sizeof(t1.b));
    printf("Size of char c    = %zu\n", sizeof(t1.c));
    printf("Size of Test1     = %zu\n\n", sizeof(t1));

    printf("Address of t2     = %p\n", (void *)&t2);
    printf("Address of int b  = %p\n", (void *)&t2.b);
    printf("Address of char a = %p\n", (void *)&t2.a);
    printf("Address of char c = %p\n", (void *)&t2.c);
    printf("Size of int b     = %zu\n", sizeof(t2.b));
    printf("Size of char a    = %zu\n", sizeof(t2.a));
    printf("Size of char c    = %zu\n", sizeof(t2.c));
    printf("Size of Test2     = %zu\n\n", sizeof(t2));

    return 0 ;
}*/


// 12. #pragma pack

/*#include<stdio.h>

typedef struct 
{
    char c ;
    int i  ;
} Normal ;

#pragma pack(1)

typedef struct
{
    char c ;
    int i  ;
} Packed ;

#pragma pack()

int main()
{
    Normal n ;
    Packed p ;

    printf("Normal structure\n");
    printf("Address of c = %p\n", (void *)&n.c);
    printf("Address of i = %p\n", (void *)&n.i);
    printf("Size         = %zu bytes\n\n", sizeof(n));

    printf("Packed structure\n");
    printf("Address of c = %p\n", (void *)&p.c);
    printf("Address of i = %p\n", (void *)&p.i);
    printf("Size         = %zu bytes\n", sizeof(p));

    return 0 ;
}*/


// 13. Structure + Array + Pointer function

/*#include<stdio.h>

typedef struct
{
    int id ;
    char name[20] ;
    float temperature ;
    float voltage ;
} Sensor ;

void display_sensor(const Sensor *p);
void update_temperature(Sensor *p , float new_temp);

int main()
{
    Sensor sensors[3] =
    { {.id = 101 , .name = "LM35" , .temperature = 32.5 , .voltage = 3.31} , 
      {.id = 102 , .name = "BMP280" , .temperature = 28.7 , .voltage = 3.28} ,
      {.id = 103 , .name = "DHT11" , .temperature = 30.2 , .voltage = 3.31}
    } ;
    Sensor *p = sensors ;

    for(int i=0 ; i<3 ; i++)
    {
        display_sensor(p);
        p++ ;
    }

    p = sensors ;
    p++ ;
    update_temperature(p ,35.5) ;

    display_sensor(p) ;

    return 0 ;
}

void display_sensor(const Sensor *p) 
{
    printf("Sensor ID   : %d\n", p->id);
    printf("Sensor Name : %s\n", p->name);
    printf("Temperature : %.2f degree\n",p->temperature);
    printf("Voltage     : %.2f V\n", p->voltage);
    printf("Address     : %p\n", p) ;
    printf("Size of Sensor : %zu bytes\n\n", sizeof(Sensor));
}

void update_temperature(Sensor *p , float new_temp)
{
    p->temperature = new_temp ;
}*/


// 14. Sturcture Array to Function

/*#include<stdio.h>

typedef struct
{
    int id ;
    char name[20] ;
    float temperature ;
    float voltage ;
} Sensor ;

void display_all_sensor(const Sensor *p , int count);

int main()
{
    Sensor sensors[3] = 
    { { .id = 101 , .name = "LM35" , .temperature = 32.5 , .voltage = 3.31} ,
      { .id = 102 , .name = "BMP280" , .temperature = 28.7 , .voltage = 3.28} ,
      { .id = 103 , .name = "DHT11" ,.temperature =30.2 , .voltage = 3.31}
    };
    Sensor *p = sensors ;

    display_all_sensor(p,3);

    return 0 ;
}

void display_all_sensor(const Sensor *p , int count)
{
    for(int i=0 ; i<count ; i++)
    {
        printf("Sensor ID   : %d\n", p->id);
        printf("Sensor name : %s\n", p->name);
        printf("Temperature : %.2f degree\n", p->temperature);
        printf("Voltage     : %.2f V\n", p->voltage);
        printf("Address     : %p\n", p);
        printf("Size of sensor = %zu bytes\n\n", sizeof(Sensor)) ;
        p++ ;
    }
}*/

// 15. Structure containing an array

/*#include<stdio.h>

typedef struct
{
    int id ;
    char name[20] ;
    float temperature ;
    float voltage ;
} Sensor ;

typedef struct
{
    char device_name[20] ;
    int sensor_count ;
    Sensor sensors[3] ;
} SensorSystem ;

int main()
{
    SensorSystem system = 
    {
        "Environment Monitor" , 3 ,
        {
            { 100 , "LM35" , 32.5, 3.31} ,
            { 101 , "BMP280" , 28.7, 3.28} ,
            { 102 , "DHT11" , 30.2, 3.31}
        } 
    } ;
    SensorSystem *p = &system ;

    printf("\nDevice Name   : %s\n", p->device_name) ;
    printf("Sensor count    : %d\n\n", p->sensor_count);
    printf("%-5s %-8s %-15s %-11s %-14s %-5s\n" , "ID", "Name","Temperature","Voltage", "Address","Size");
    printf("-----------------------------------------------------------------------\n") ;
    for(int i=0 ; i<3 ; i++)
    {
        printf("%-5d %-10s  %-12.2f %.2f V     %-15p %-5d \n" , 
            p->sensors[i].id ,
            p->sensors[i].name ,
            p->sensors[i].temperature ,
            p->sensors[i].voltage ,
            (void *)&p->sensors[i] ,
            sizeof(Sensor) ) ;
        }

    printf("\n        Memory Layout  \n");
    printf("-----------------------------\n");

    printf("system address        : %p\n", (void *)&system);
    printf("device_name address   : %p\n", (void *)p->device_name);
    printf("sensor_count address  : %p\n", (void *)&p->sensor_count);

    printf("sensors[0] address    : %p\n", (void *)&p->sensors[0]);
    printf("sensors[1] address    : %p\n", (void *)&p->sensors[1]);
    printf("sensors[2] address    : %p\n", (void *)&p->sensors[2]);

    printf("\nSize of Sensor        : %zu bytes\n", sizeof(Sensor));
    printf("Size of SensorSystem  : %zu bytes\n", sizeof(SensorSystem));

    return 0 ;
}*/


// 16. Structure + Pointer + Nested Array + Function + Returning function

/*#include<stdio.h>

typedef struct
{
    int id ;
    char name[20] ;
    float temperature ;
    float voltage ;
} Sensor ;

typedef struct
{
    char device_name[20];
    int sensor_count;
    Sensor sensors[3] ;
} SensorSystem ;

void display_system(const SensorSystem *p) ;
void update_sensor(SensorSystem *p , int index , float new_temp ) ;
float get_average_temperature(const SensorSystem *p) ;

int main()
{
    SensorSystem system = {"Environment Monitor" , 3 , 
        {
            {100 , "LM35" , 32.5 , 3.31} , 
            {101 , "BMP280" , 28.70 , 3.28} , 
            {102 , "DHT11" , 30.20 , 3.31}
        } 
    } ;
    SensorSystem *p = &system ;
    float average ;


    display_system(p);

    update_sensor(p, 1, 35.5);

    display_system(p) ;

    average = get_average_temperature(p);
    printf("\nAverage temperature : %.2f\n", average) ;

    printf("\n------- MEMORY LAYOUT -------\n");
    printf("System address    : %p\n", (void *)p);
    for(int i=0 ; i< p->sensor_count ; i++)
    {
        printf("Sensor[%d] address : %p\n", i, (void *)&p->sensors[i]);
    }
    printf("Size of Sensor        : %zu bytes\n", sizeof(Sensor));
    printf("Size of Sensor System : %zu bytes\n", sizeof(SensorSystem));

    return 0 ;
}

void display_system(const SensorSystem *p)
{
    printf("\nDevice name  : %s\n", p->device_name);
    printf("Sensor count : %d\n\n", p->sensor_count) ;

    printf("%-5s %-10s %-15s %-12s %-15s %-10s\n", "ID","Name","Temperature","Voltage","Address","Size") ;
    printf("------------------------------------------------------------------------\n") ;
    for(int i=0 ; i< p->sensor_count ; i++)
    {
        printf("%-5d %-10s %-15.2f %-12.2f %-15p %-10zu\n", p->sensors[i].id , p->sensors[i].name , p->sensors[i].temperature , p->sensors[i].voltage , (void *)&p->sensors[i] , sizeof(Sensor)) ;
    }
}

void update_sensor(SensorSystem *p ,int index , float new_temp)
{
    p->sensors[index].temperature = new_temp ;
}

float get_average_temperature(const SensorSystem *p)
{
    float sum = 0 ;

    for(int i=0 ; i< p->sensor_count ; i++)
    {
        sum += p->sensors[i].temperature ;
    }
    return sum / p->sensor_count ;
}*/


