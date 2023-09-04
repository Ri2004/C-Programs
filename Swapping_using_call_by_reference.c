// Swapping using call by reference
#include<stdio.h>

void swapWithPointer(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

    printf("After Swapping n = %d and n1 = %d\n", *a, *b);
}
int main()
{
    int n, n1;
    printf("Enter 1st Number\n");
    scanf("%d", &n);

    printf("Enter 2nd Number\n");
    scanf("%d", &n1);

    printf("Before Swapping n = %d and n1 = %d\n", n, n1);
    swapWithPointer(&n, &n1);
    return 0;
}