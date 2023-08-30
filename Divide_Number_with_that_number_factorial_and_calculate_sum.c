#include<stdio.h>
int main()
{
    float num=4.0, i, j, fact, sum = 0, div;

    printf("Enter A Number\n");
    scanf("%f", &num);

    for (i = 1.0; i <= num; i++)
    {
        fact = 1.0;
        for (j = 1.0; j <= i; j++)
        {
            fact = fact * j;
        }
        div = (i / fact);
        sum += div;
    }
    printf("Addition of Numbers are: %.2f", sum);
    return 0;
}