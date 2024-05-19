#include <stdio.h>

int main() {
    double number;
    char charactor;

    printf("Enter inputs: ");
    scanf("%lf %c", &number, &charactor); 
    
    printf("Number = %lf", number);
    printf("\nCharactor = %c", charactor);

    return 0;
