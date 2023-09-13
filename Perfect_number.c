// Print perfect number
#include<stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter a Number\n");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (num == sum)
    {
        printf("%d is Perfect Number.", num);
    }
    else
    {
        printf("%d is Not Perfect Number.", num);
    }
    return 0;
}