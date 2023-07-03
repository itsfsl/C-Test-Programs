#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int n1, n2, n3;

void delay(int nos)
{
    int ms = 1000 * nos;
    clock_t startTime = clock();
    while (clock() < startTime + ms);
    ;
}

void spin()
{
    int max = 3;
    int min = 1;
    srand(time(0));
    n1 = (rand() % max) + min;
    n2 = (rand() % max) + min;
    n3 = (rand() % max) + min;
    delay(2);
    printf("%d", n1);
    delay(2);
    printf("%d", n2);
    delay(2);
    printf("%d\n", n3);
}

int main()
{
    int wallet = 500;
    int newWallet = wallet;
    int reward = 1000;
    int spinCost = 100;
    int input;
    int profit = 0;

    while (newWallet >= 100)
    {
        printf("\n*******************************\n");
        printf("Welcome to La Loot Lega Casino!\n");
        printf("*******************************\n");
        printf("\nWallet balance: $%d\n", newWallet);
        printf("1. Play or 2. Leave?\n");
        printf("Enter your choice: ");
        scanf("%d", &input);

        if(input == 2)
        {
            profit =  newWallet - wallet;

            if (newWallet > wallet)
            {
                printf("\nYou made a profit of $%d in your last visit.\n", profit);
                printf("Final Balance = $%d\n", newWallet);
                printf("Sorry to see you go!");
                return 0;
            }
            else
            {
                profit = abs(profit);
                printf("\nYou made a loss of $%d in your last visit.\n", profit);
                printf("Final Balance = $%d\n", newWallet);
                printf("Sorry to see you go!");
                return 0;
            }          
        }
        printf("\n...Spinning...\n");
        newWallet-= spinCost;
        spin();
        
        if (n1 == n2 && n2 == n3)
        {
            newWallet+= reward;
            printf("\n*****!!!JACKPOT!!!*****\n");
            printf("\nYou got a $1000!\n");
            printf("New wallet balance: $%d\n", newWallet);
        }
        else
        {
            printf("\nBetter luck next time!\n");
            printf("New wallet balance: $%d\n", newWallet);
        }
    } 

    printf("\nYou lost all your money at the casino :( \nGoodbye.");
    return 0;
}