#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number\n");
    scanf("%d", &num);

    if (num & 1 == 1)
    {
        printf("%d is Odd Number.", num);
    }
    else
    {
        printf("%d is Even Number.", num);
    }
    return 0;
}