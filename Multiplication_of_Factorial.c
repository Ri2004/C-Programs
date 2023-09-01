#include <stdio.h>
int main()
{
    int num, i, j, fact, mul = 1;

    printf("Enter Number\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact *= j;
        }
        mul *= fact;
    }
    printf("Sum of Factorials is : %d\n", mul);
    return 0;
}