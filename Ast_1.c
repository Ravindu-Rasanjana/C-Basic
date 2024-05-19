#include <stdio.h>

int main() {
   int i,j,k;
    j = 4;
   for (i=0; i<=j; i++){
    for(k=0; k<=i; k++){
        printf("*");
    }
    printf("\n");
   }

    return 0;
}