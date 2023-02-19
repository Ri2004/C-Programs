#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Even numbers from 1 to %d are: \n", a);
    for(int i=2; i<=a; i=i+2)
    {
        printf("%d\n", i);
    }
    return 0;
}