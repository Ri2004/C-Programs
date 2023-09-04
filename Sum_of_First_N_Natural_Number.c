#include<stdio.h>

int sumOfNaturalNumber(int n)
{
    return n * (n + 1) / 2;
}
int main()
{
    int num;
    printf("Enter A Number\n");
    scanf("%d", &num);

    printf("The sum of First %d Numbers is: %d", num, sumOfNaturalNumber(num));
    return 0;
}