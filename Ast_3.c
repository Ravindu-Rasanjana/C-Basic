#include <stdio.h>

int main() {
   int i,j,k,l;
   l=0;
   for (i=0; i<=8; i+=2){
    l+=1;
    for(j=5; j>=l; j--){
        printf(" ");}
    for(k=0; k<=i; k++){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}