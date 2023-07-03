#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][100] = {"1. Which country hosted the Commonwealth Games in 2022?",
                            "2. Silver Beach is located in which Indian State?",
                            "3. How many languages are specified in the Constitution of India?",
                            "4. Who built Shalimar Bagh in Kashmir?"};
    char options[][100] = {"A. England", "B. India", "C. Canada", "D. Africa",
                            "A. Gujarat", "B. Rajasthan", "C. Delhi", "D. Tamil Nadu",
                            "A. 21", "B. 24", "C. 22", "D. 25",
                            "A. Akbar", "B. Jahangir", "C. Salim", "D. Mughal"};
    char answers[4] = {'A', 'D', 'C', 'B'};
    
    int score;

    char guess;
    
    int totalQues = sizeof(questions)/sizeof(questions[0]);

    printf("******************************\n");
    printf("Welcome to Kon Banega Crorepati!\n");
    printf("******************************\n");

    for (int i = 0; i < totalQues; i++)
    {
        printf("%s\n", questions[i]);

        for (int j = i * 4; j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("Enter your answer: ");
        scanf(" %c", &guess);
        //scanf("%c");

        guess = toupper(guess);

        //printf("Your answer is: %c\n", guess);

        if (guess == answers[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Incorrect!\n");
        }      
    }

    printf("******************************\n");
    printf("Score: %d out of %d\n", score, totalQues);
    printf("******************************\n");

    return 0;
}