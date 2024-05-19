#include <stdio.h>
#include <stdbool.h>

int main(){

bool value1 = true; // C is case sensitive, so true != True
bool value2 = false;

printf("%d ", value1); //Booleans are also stored as numbers. So %d is used.
printf(" %d", value2);

    return 0;
}