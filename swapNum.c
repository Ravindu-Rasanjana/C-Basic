#include <stdio.h>
#include <stdbool.h>

int main(){
    bool i = true;
    int a,b,temp;
    char k=5;

    while(i){

        printf("Enter Number 1: ");
        scanf("%d", &a);

        printf("Enter Number 2: ");
        scanf("%d", &b);

        temp = a;
        a = b;
        b = temp;

        printf("Number 1 = %d\n", a);
        printf("Number 2 = %d\n", b);


        printf("Do you want to continue? (y/n) ");
        scanf(" %c", &k);

        if (k == 'y' || k == 'Y'){
            i = true;
        } else {
            i = false;
        }

    }
    
    return 0;
}