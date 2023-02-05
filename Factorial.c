#include <stdio.h>
int main()
{
    int a, fact = 1;
    printf("Enter A Number: ");
    scanf("%d", &a);

    for(int i = 1; i<=a; i++)
    {
        ("%d\n", i);
        fact = fact *i;
    }
    printf("The Factorial is: %d\n", fact);
}