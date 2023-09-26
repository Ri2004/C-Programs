// Print English spelling of digit of user given number
#include <stdio.h>
void printSpellingOfDigit(int digit)
{
    switch (digit)
    {
    case 0:
        printf("zero ");
        break;
    case 1:
        printf("one ");
        break;
    case 2:
        printf("two ");
        break;
    case 3:
        printf("three ");
        break;
    case 4:
        printf("four ");
        break;
    case 5:
        printf("five ");
        break;
    case 6:
        printf("six ");
        break;
    case 7:
        printf("seven ");
        break;
    case 8:
        printf("eight ");
        break;
    case 9:
        printf("nine ");
        break;
    }
}
int main()
{
    int num = 0, n, rev, rem, temp;
    printf("Enter a Number\n");
    scanf("%d", &n);

    temp = n;
    while (temp > 0)
    {
        if (temp % 10 == 0)
        {
            rev = temp % 10;
        }
        num = (num * 10) + (temp % 10);
        temp /= 10;
    }
    while (num > 0)
    {
        rem = num % 10;
        printSpellingOfDigit(rem);
        num /= 10;
    }
    if (n % 10 == 0)
    {
        printSpellingOfDigit(rev);
    }
    return 0;
}