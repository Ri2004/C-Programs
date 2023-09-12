#include<stdio.h>
int main()
{
    int num, rem, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 10;
        sum += rem + 1;
        num /= 10;
    }
    printf("Increasing 1 to all digits are %d\n", sum);
    return 0;
}