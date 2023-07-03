#include <stdio.h>

int findMax(int x, int y){
    return (x > y) ? x : y;
}

int main (){
    int max = findMax(20, 10);
    printf("%d", max);
}