// Palindrome
#include <stdio.h>

int main()
{
    int a, b, temp, reverse = 0;

    printf("Enter First Number\n");
    scanf("%d",&a);

    temp = a;

    while (temp > 0)
    {
        b = temp % 10;
        reverse = reverse * 10 + b;
        temp = temp / 10;
    }
    if (a == reverse)
    {
        printf("%d is a Palindrome Number",a);
    }
    else
    {
        printf("%d is not a Palindrome Number",a);
    }
}