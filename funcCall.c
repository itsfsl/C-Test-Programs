#include <stdio.h>

void birthday (char name[], int x){
    printf("Happy birthday %s", name);
    printf("\nYou are %d years old now!", x);
}

int main(){
    int x = 23;
    char name[] = "fsl";
    birthday(name, x);
    return 0;
}

