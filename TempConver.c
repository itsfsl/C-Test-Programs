#include <stdio.h>
#include <ctype.h>

int main(){
    char unit;
    float temp;

    printf("Is the temperature in (C) or (F)?");
    scanf("%c", &unit);

    unit = toupper(unit);
  
    if (unit == 'F')
    {
        printf("Enter the temperature in F: ");
        scanf("%f", &temp);
        temp = (temp - 32) / 1.8000;
        printf("The temperature in Celsius is: %.1f", temp);
    }
    else if (unit == 'C')
    {
        printf("Enter the temperature in C: ");
        scanf("%f", &temp);        
        temp = temp * 1.8 + 32;
        printf("The temperature in Farenhite is: %.1f", temp);
    }
    else
    {
        printf("That's not an valid input!");
    }
}