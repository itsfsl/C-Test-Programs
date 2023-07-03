#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void timer(int secs){
    int ms = secs * 1000;
    clock_t startTime = clock();
    while(clock() < startTime + ms);
}

int main(){

    system("color 0B");
    
    int seconds;

    printf("Enter the number of seconds you want to start countdown from: ");
    scanf("%d", &seconds);

    int minutes;
    int hours;
    int remainingMins;
    int remainingSecs;

    while(seconds > 0){
        timer(1);
        seconds--;
        minutes = seconds / 60;
        hours = minutes / 60;
        remainingMins = minutes % 60;
        remainingSecs = seconds % 60;
        system("cls");
        printf("%02d:%02d:%02d\n", hours, remainingMins, remainingSecs);
    }

    /* for(int i = seconds; i >= 1; i--){
        printf("%d\n", i);
        timer();
    } */

    system("cls");
    printf("Time's up!");
    timer(3);

    return 0;
}