#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char rom[15];
    int number = 0;

    printf("Enter Roman Numeral: ");
    scanf("%s", rom);

    for (int i = 0; i < strlen(rom); i++)
        {
            rom[i] = toupper(rom[i]);
        }

    //printf("%s", rom);

    if (strcspn(rom, "0123456789") < strlen(rom))
    {
        printf("Enter a valid Roman Numeral!");
    }
    else
    {
        for (int i = 0; i < strlen(rom); i++)
        {
            //rom[i] = toupper(rom[i]);
            if (rom[i] == 'M' && rom[i-1] != 'C')
            {
                number += 1000;
            }
            else if (rom[i] == 'C' && rom[i+1] == 'M')
            {
                number += 900;
                i++;
            }
            else if (rom[i] == 'D' && rom[i-1] != 'C')
            {
                number += 500;
            }
            else if (rom[i] == 'C' && rom[i+1] == 'D')
            {
                number += 400;
                i++;
            }
            else if (rom[i] == 'C' && rom[i+1] != 'M')
            {
                number += 100;
            }
            else if (rom[i] == 'L' && rom[i-1] != 'X')
            {
                number += 50;
            }
            else if (rom[i] == 'X' && rom[i+1] == 'L')
            {
                number += 40;
                i++;
            }
            else if (rom[i] == 'X' && rom[i+1] == 'C')
            {
                number += 90;
                i++;
            }
            else if (rom[i] == 'X' && rom[i-1] == 'I')
            {
                number += 9;
                i++;
            }
            else if (rom[i] == 'X' && rom[i-1] != 'I')
            {
                number += 10;
            }
            else if (rom[i] == 'V' && rom[i-1] != 'I')
            {
                number += 5;
            }
            else if (rom[i] == 'I' && rom[i+1] == 'V')
            {
                number += 4;
                i++;
            }
            else if (rom[i] == 'I')
            {
                number += 1;
            }
        }   
        
        printf("%d", number);           
    }
    return 0;
}