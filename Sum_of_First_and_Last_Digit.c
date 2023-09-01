#include<stdio.h>
int main()
{
    int a, temp, last_digit, first_digit, sum = 0;

    printf("Enter A Number\n");
    scanf("%d", &a);

    temp = a;

    last_digit = temp % 10;
    while(temp>0)
    {
        first_digit = temp % 10;
        temp = temp / 10;
    }
    sum = first_digit + last_digit;
    printf("The Sum of First digit and Last digit of %d is %d", a, sum);

    return 0;
}