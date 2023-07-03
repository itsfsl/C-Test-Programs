#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    char unit;
    double dist, efficy, price,reqFuel, totalCost;

    printf("What is the unit that you are going to use? (Metric/Imperial): ");
    scanf("%c", &unit);
    unit = toupper(unit);

    switch (unit)
    {
    case 'I':
    
    printf("Enter trip distance in Kilometers: ");
    scanf("%lf", &dist);
    printf("Enter Fuel Efficiency in KMPL: ");
    scanf("%lf", &efficy);
    printf("Enter price: ");
    scanf("%lf", &price);

    reqFuel = dist / efficy;
    totalCost = reqFuel * price;

    printf("This trip will require %.1lf liters of fuel, which amounts to a fuel cost of $%.2lf.", reqFuel, totalCost);
    
    efficy = 3;
    reqFuel = 0;
    totalCost = 0;

    reqFuel = dist / efficy;
    totalCost = reqFuel * price;

    printf("\nIf 3 kilometres per liter, it will use %.1lf liters of fuel with cost of $%.2lf.", reqFuel, totalCost);

    efficy = 5;
    reqFuel = 0;
    totalCost = 0;

    reqFuel = dist / efficy;
    totalCost = reqFuel * price;

    printf("\nIf 5 kilometres per liter, it will use %.1lf liters of fuel with cost of $%.2lf.", reqFuel, totalCost);

    efficy = 10;
    reqFuel = 0;
    totalCost = 0;

    reqFuel = dist / efficy;
    totalCost = reqFuel * price;

    printf("\nIf 10 kilometres per liter, it will use %.1lf liters of fuel with cost of $%.2lf.", reqFuel, totalCost);

    efficy = 20;
    reqFuel = 0;
    totalCost = 0;

    reqFuel = dist / efficy;
    totalCost = reqFuel * price;

    printf("\nIf 20 kilometres per liter, it will use %.1lf liters of fuel with cost of $%.2lf.", reqFuel, totalCost);

    efficy = 30;
    reqFuel = 0;
    totalCost = 0;

    reqFuel = dist / efficy;
    totalCost = reqFuel * price;

    printf("\nIf 30 kilometres per liter, it will use %.1lf liters of fuel with cost of $%.2lf.", reqFuel, totalCost);

    efficy = 50;
    reqFuel = 0;
    totalCost = 0;

    reqFuel = dist / efficy;
    totalCost = reqFuel * price;

    printf("\nIf 50 kilometres per liter, it will use %.1lf liters of fuel with cost of $%.2lf.", reqFuel, totalCost);

    break;

    case 'M':

    printf("Enter trip distance in Miles: ");
    scanf("%lf", &dist);
    printf("Enter Fuel Efficiency in MPG: ");
    scanf("%lf", &efficy);
    printf("Enter price: ");
    scanf("%lf", &price);

    reqFuel = dist / efficy;
    totalCost = reqFuel * price;

    printf("This trip will require %.1lf gallons of gas, which amounts to a fuel cost of $%.2lf.", reqFuel, totalCost);
    break;
    
    default:
        printf("Please enter either M or K for metric/kilometers");
        break;
    }
    printf("Enter any key to exit!");
    getch();
    
    return 0;
}