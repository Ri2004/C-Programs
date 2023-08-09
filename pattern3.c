// pattern
#include <stdio.h>
int main()
{
    int rows;
    printf("Enter Number of rows:\n");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int space = 1; space <= (rows - i); space++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*   ");
        }
        printf("\n");
    }
    for (int i = (rows - 1); i > 0; i--)
    {
        for (int space = 1; space <= (rows - i); space++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*   ");
        }
        printf("\n");
    }
    return 0;
}