// 1.1  MULTIPLICATION (FUNCTION WITH ARGUMENT AND RETURN VALUE)

/*#include<stdio.h>

int mul(int n1, int n2);    // function declaration

int main()
{
    int n1, n2 , result;

    printf("Enter two number : ");
    scanf("%d%d",&n1, &n2);

    result = mul(n1,n2);                   // function calling

    printf("%d * %d = %d", n1, n2, result);

    return 0;
}

mul(int n1, int n2)     // function definition
{
    return n1*n2 ;
}*/


// 1.2 MULTIPLICATION (FUNCTION WITH ARGUMENT AND WITHOUT RETURN VALUE)

/*#include<stdio.h>

void multiplication(int n1, int n2);               //function declaration

int main()
{
    int n1, n2 ;

    printf("Enter two numbers : ");
    scanf("%d%d", &n1, &n2);

    multiplication(n1, n2);                     // function calling

    return 0 ;
}
    
void multiplication(int n1, int n2)             // function definition
{
    printf("%d * %d = %d", n1, n2, n1*n2);
}*/


// 1.3 MULTIPLICATION (FUNCTION WITHOUT ARGUMENT AND WITH RETURN VALUE)

/*#include<stdio.h>

int multiplication();                             // function declaration

int main()
{
    int n1, n2, ans ;
                                        // note : this program is incorrect because here we are passing argument so there is chance of garbage value
    ans = multiplication(n1,n2);                // function call
    
    printf("%d * %d = %d", n1, n2, ans);

    return 0;
}

int multiplication()                          // function definition
{
    int n1, n2;

    printf("Enter two numbers : ");
    scanf("%d%d", &n1, &n2);

    return n1*n2 ;
}*/


// 1.4 MULTIPLICATION (FUNCTION WITHOUT ARGUMENT AND WITHOUT RETURN VALUE)

/*#include<stdio.h>

void multiplication();

int main()
{
    multiplication();
    return 0;
}

void multiplication()
{
    int n1, n2, ans;
    printf("Enter two numbers : ");
    scanf("%d%d", &n1, &n2);

    ans = n1*n2;

    printf("%d * %d = %d", n1, n2, ans);
 }*/




// 2. Print Welcome (NO ARGUMENT ,NO RETURN VALUE)

/*#include <stdio.h>

void printWelcome() { // void means NO return value
    printf("====================\n");
    printf(" Welcome to My App  \n");
    printf("====================\n");
    // No return statement needed
}

int main() {
    printWelcome(); // Called without passing any values
    return 0;
}*/


// 3. Get pin code (NO ARGUMENT , WITH RETURN VALUE)

/*#include <stdio.h>

int getPinCode() { // int means it RETURNS an integer
    int pin;
    printf("Create a 4-digit PIN: ");
    scanf("%d", &pin);
    return pin; // Sends data back to main
}

int main() {
    int userPin;
    userPin = getPinCode(); // Receives the value into userPin
    printf("Your secure PIN is saved.\n");
    return 0;
}*/


// 4. Print score (WITH ARGUMENT , NO RETURN VALUE)

/*#include <stdio.h>

void printScore(int score) { // Accepts an argument, returns nothing
    printf("----------------------\n");
    printf("Current Score: %d pts\n", score);
    printf("----------------------\n");
}

int main() {
    int currentLiveScore = 450;
    printScore(currentLiveScore); // Passes data into the function
    return 0;
}*/


// 5. Print score (WITH ARGUMENT , WITH RETURN VALUE)

/*#include <stdio.h>

float celsiusToFahrenheit(float celsius) { // Takes data AND returns data
    return (celsius * 9 / 5) + 32;
}

int main() {
    float roomTempC = 25.0;
    float roomTempF;
    
    roomTempF = celsiusToFahrenheit(roomTempC); // Passes 25.0, gets 77.0 back
    printf("Temperature: %.1f °F\n", roomTempF);
    return 0;
}*/


