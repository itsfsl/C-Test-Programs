#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Press a key!\n");

    while(1)
    {
        if(kbhit())
        {
            char ch = getch();
            if (ch == 32)
            {
                printf("Space was pressed");
                break;
            }
            else
            {
                printf("%d was pressed\n", ch);
            }
        }
    }
    return 0;
}