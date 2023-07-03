#include <stdio.h>

int main(){

    int arrays[3][3];

    int rows;
    int cols;

    rows = sizeof(arrays)/sizeof(arrays[0]);
    cols = sizeof(arrays[0])/sizeof(arrays[0][0]);

    printf("%d\n", rows);
    printf("%d\n", cols);

    arrays[0][0] = 1;
    arrays[0][1] = 2;
    arrays[0][2] = 3;
    arrays[1][0] = 4;
    arrays[1][1] = 5;
    arrays[1][2] = 6;
    arrays[2][0] = 7;
    arrays[2][1] = 8;
    arrays[2][2] = 9;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d", arrays[i][j]);
        }

        printf("\n");
        
    }
    

}