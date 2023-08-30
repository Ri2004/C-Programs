#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter A Number\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            sum += i;
    }

    printf("Sum of Even Numbers are: %d", sum);
    return 0;
}