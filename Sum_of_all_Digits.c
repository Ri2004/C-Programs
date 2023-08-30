#include<stdio.h>
int main()
{
    int n, rem, sum = 0;
    printf("Enter A Positive Number\n");
    scanf("%d", &n);

    while(n>0)
    {
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    printf("Sum Of All Digits is: %d\n", sum);
    return 0;
}