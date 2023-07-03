#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    srand(time(0));

    answer = (rand() % MAX) + MIN;

    //printf("%d\n", answer);

    do
    {
        printf("Enter a number between 1-100: ");
        scanf("%d", &guess);
        guesses++;
        if (guesses < 6)
        {
            if (guess < 1 || guess > 100)
            {
                printf("Please make sure to enter a number between 1-100 only.\n");
            }
            else if (guess == answer)
            {
                printf("Congratulations! You got it right!!\n");
            }
            else if (guess > answer)
            {
                printf("Too high! Try again.\n");
            }
            else
            {
                printf("Too low! Try again.\n");
            }
        }
        else
        {
            printf("Sorry you have run out of tries :(\n");
            break;
        }      
        
    } while (guess != answer);

    printf("****************\n");
    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n", guesses);
    printf("****************");
    getch();

    return 0;
}