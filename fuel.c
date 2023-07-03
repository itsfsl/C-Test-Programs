#include <stdio.h>

int main()
{
    double distance;
    double effi;
    double price;

    printf("Enter Trip Distance: ");
    scanf("%lf", &distance);
    printf("Enter Fuel Efficiency: ");
    scanf("%lf", &effi);
    printf("Enter Fuel Price: ");
    scanf("%lf", &price);

    double reqFuel = distance / effi;
    double cost = reqFuel * price;

    printf("This trip will require %.1lf of fuel, which amounts to a fuel cost of $%.2lf.", reqFuel, cost);
    return 0;
}