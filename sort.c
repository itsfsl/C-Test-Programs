#include <stdio.h>

void sortArrays(int arrays[], int size){

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arrays[j] > arrays[j+1])
            {
                int temp = arrays[j];
                arrays[j] = arrays[j+1];
                arrays[j+1] = temp;
            }
            
        }
        
    }

/*
    for (int j = 0; j < size - 1; j++)
        {
            if (arrays[j] < arrays[j+1])
            {
                int temp = arrays[j];
                arrays[j] = arrays[j+1];
                arrays[j+1] = temp;
            }
        }
*/

}

void printArrays(int arrays[], int size){

    for (int i = 0; i < size; i++)
    {
        printf("%d", arrays[i]);
    }
    
}

int main(){

    int arrays[] = {6, 7, 4, 5, 2, 1, 3};
    int size = sizeof(arrays)/sizeof(arrays[0]);

    // printf("%d", size);

    sortArrays(arrays, size);
    printArrays(arrays, size);

    return 0;
}