#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>

void delay(int sec){
    int ms = sec * 1000;
    clock_t startTime = clock();
    while(clock() < startTime + ms);
}

int main(){
    char name[][20] = {"SOFEEN RATHORE", "SOFIN", "SOFEEN", "SOFIN RATHORE"};
    char input[20];
    printf("Hello what's your name?\n");
    printf("Enter: ");
    fgets(input, 20, stdin);
    input[strlen(input)-1] = '\0';
    //input[strcspn(input, "\n")] = '\0';
    
    for(int i = 0; i < strlen(input); i++) {
        input[i] = toupper(input[i]); // convert input to uppercase
    }

    int totalName = sizeof(name)/sizeof(name[0]);

    for(int i = 0; i < strlen(input); i++){
        if(!isalpha(input[i]) && input[i] != ' '){
            printf("Sahi se naam dhal bhosdike!");
            delay(2);
            return 0;
        }
    }

    bool isSofin = false;
    
    for(int i = 0; i < totalName; i++){
        if(strcmp(input, name[i]) == 0){
            isSofin = true;
            break;
        }
    }

    if (isSofin){
        printf("You are...");
        delay(1);
        printf("chutiya!");
        delay(2);
    }
    else{
        printf("You are...");
        delay(1);
        printf("my bhai!");
        delay(2);
    }
    return 0;
}