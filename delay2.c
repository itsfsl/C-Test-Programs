#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Let's wait 5 secs!\n");
    for (int i = 5; i > 0; i--)
    {
        printf("%d\n", i);
        sleep(1);
    }
    printf("Bye!");
    return 0;
}