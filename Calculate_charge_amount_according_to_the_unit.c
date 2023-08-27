#include<stdio.h>
int main()
{
    int unit, charge;
    printf("Enter Unit:\n");
    scanf("%d", &unit);

    if (unit <= 25)
    {
        charge = 50;
        printf("The charge amount for unit %d is %d",unit, charge);
    }
    else if(unit <= 100)
    {
        charge = ((50 + (unit - 25))*3);
        printf("The charge amount for unit %d is %d", unit, charge);
    }
    else if (unit <= 200)
    {
        charge = ((50 + 75*3 + (unit - 100)) * 4);
        printf("The charge amount for unit %d is %d", unit, charge);
    }
    else
    {
        charge = ((50 + 75 * 3 + 100 * 4 + (unit - 200)) * 5);
        printf("The charge amount for unit %d is %d", unit, charge);
    }

    return 0;
}