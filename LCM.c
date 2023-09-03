// LCM
#include<stdio.h>
int main()
{
    int num, num1, i, quote1, quote2, lcm;

    printf("Enter 1st Number\n");
    scanf("%d", &num);

    printf("Enter 2nd Number\n");
    scanf("%d", &num1);

    for (i = 1; i <= num && i <= num1; i++)
    {
        quote1 = num / i;
        quote2 = num1 / i;

        if (num % i == 0 && num1 % i == 0)
            lcm = (i * quote1 * quote2);
    }
    printf("The LCM of %d and %d is %d", num, num1, lcm);
    return 0;
}