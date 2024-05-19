#include <stdio.h>
int main () {

//Data Types
/*
int     %d
double  %lf
float   %f
char    %c
*/

int age = 25;
    printf("Age = %d", age);

double number1 = 33.21;
    printf("\nNumber 1 = %lf", number1); // Gives random digits to fill the 6 decimal places
    printf("\nNumber 1 = %.2lf", number1);
double number3 = 4.5e6;
    printf("\nNumber 3 = %lf", number3); //4.5e6 means 4.5*10^6, just like in a calculator

float number2 = 56.2f; // "f" is added to indicate that this is a float, not a double
    printf("\nNumber 2 = %f", number2); // Gives random digits to fill the 6 decimal places
    printf("\nNumber 2 = %.1f", number2);

//Between double and float, double is the most suitable one to store numbers as it can store more details on numbers
 
char charactor = 's'; // '' should be used when entring charactors
    printf("\n%c", charactor); //they are indicated by %c
    printf("\n%d", charactor); // charactors are stored internally as numbers, so if we indicate charactors as numbers they will be shown as numbers
 
 // sizeof Operator is used to find the size of a certain variable in bytes
    printf("\nSize of age: %zu", sizeof(age));
    printf("\nSize of Number 1: %zu", sizeof(number1));
    printf("\nSize of Number 3: %zu", sizeof(number3));
    printf("\nSize of Number 2: %zu", sizeof(number2));
    printf("\nSize of charactor: %zu", sizeof(charactor));
    
    return 0;
}