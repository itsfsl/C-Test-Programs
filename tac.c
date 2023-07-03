#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

char const PLAYER = 'O';
char const COMPUTER = 'X';

char mainBoard[3][3];

void printBoard();
void resetBoard();
void playerMove();
void computerMove();
int checkFreeSpace();
char checkWinner();
void printWinner(char);

int main()
{
    char winner = ' ';
    char response;

    do
    {
        char winner = ' ';
        char response = ' ';

        resetBoard();

        while (winner == ' ' && checkFreeSpace() != 0)
        {
        printBoard();

        playerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpace() == 0)
        {
            break;
        }

        computerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpace() == 0)
        {
            break;
        }
        }

        printBoard();
        printWinner(winner);

        printf("Would you like to play again? (Y/N): ");
        scanf(" %c", &response);
        response = toupper(response);
    } while (response != 'N');
    
    printf("Thanks for playing!");
    
    return 0;   
}

void playerMove()
{
    int row;
    int col;

    do
    {
    printf("Enter Row: ");
    scanf("%d", &row);
    row--;
    printf("Enter Column: ");
    scanf("%d", &col);
    col--;

    if (mainBoard[row][col] != ' ')
    {
        printf("Invalid Move!\n");
    }
    else
    {
        mainBoard[row][col] = PLAYER;
        break;
    }
    } while (mainBoard[row][col] != ' ');
}

void computerMove()
{
    srand(time(0));
    int row;
    int col;

    if (checkFreeSpace() > 0)
    {
        do
        {
            row = rand() % 3;
            col = rand() % 3;
        } while (mainBoard[row][col] != ' ');

        mainBoard[row][col] = COMPUTER;
    }
    else
    {
        printWinner(' ');
    }
}

int checkFreeSpace()
{
    int freeSpace = 9;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mainBoard[i][j] != ' ')
            {
                freeSpace--;
            }
        }
    }
    // printf("freespace: %d", freeSpace);
    return freeSpace;
}

char checkWinner()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mainBoard[i][0] == mainBoard[i][1] && mainBoard[i][0] == mainBoard[i][2])
            {
                return mainBoard[i][2];
            }
            else if (mainBoard[0][j] == mainBoard[1][j] && mainBoard[0][j] == mainBoard[2][j])
            {
                return mainBoard[0][j];
            }
            else if (mainBoard[0][0] == mainBoard[1][1] && mainBoard[0][0] == mainBoard[2][2])
            {
                return mainBoard[0][0];
            }
            else if (mainBoard[0][2] == mainBoard[1][1] && mainBoard[0][2] == mainBoard[2][0])
            {
                return mainBoard[0][2];
            }
            return ' ';
        }
    } 
}

void printWinner(char winner)
{
    if (winner == PLAYER)
    {
        printf("You win!\n");
    }
    else if (winner == COMPUTER)
    {
        printf("You lose!\n");
    }
    else
    {
        printf("It's a draw!\n");
    }
}

void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mainBoard[i][j] = ' ';
        }
    }
}

void printBoard()
{
    printf(" %c | %c | %c ", mainBoard[0][0], mainBoard[0][1], mainBoard[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", mainBoard[1][0], mainBoard[1][1], mainBoard[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", mainBoard[2][0], mainBoard[2][1], mainBoard[2][2]);
    printf("\n");
}