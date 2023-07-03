#include <stdio.h>

enum Day{Sun, Mon, Tues, Wed, Thurs, Fri, Sat};

int main()
{
        enum Day today = Tues;

        if (today == Sun || today == Sat)
        {
            printf("Weekend!!");
        }
        else
        {
            printf("Sad Day :()");
        }
        return 0;        
}