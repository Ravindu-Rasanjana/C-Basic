#include <stdio.h>

int main() {
    double number;
    char charactor;

    printf("Enter double input: ");
    scanf("%lf", &number); 
   
    printf("Enter charactor input: ");
    scanf("\n%c", &charactor); 
    
    printf("Number = %lf", number);
    printf("\nCharactor = %c", charactor);

    return 0;
}