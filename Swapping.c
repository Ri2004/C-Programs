#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter First Value\n");
    scanf("%d", &a);

    printf("Enter Second Value\n");
    scanf("%d", &b);

    printf("Before swapping a = %d and b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swapping a = %d and b = %d\n", a, b);
    return 0;
}