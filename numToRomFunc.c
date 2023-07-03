#include <stdio.h>

char toRom(int x)
{
    char r;
    switch (x)
    {
    case 1:
        r = 'I';
        break;
    case 5:
        r = 'V';
        break;
    case 10:
        r = 'X';
        break;
    case 50:
        r = 'L';
        break;
    case 100:
        r = 'C';
        break;
    case 500:
        r = 'D';
        break;
    case 1000:
        r = 'M';
        break;    
    default:
        r = ' ';
        break;
    }
    return r;
}

int main()
{
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%c", toRom(num));
}