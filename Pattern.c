// star pattern
#include<stdio.h>
int main()
{
    int rows, i, j;
    printf("Enter rows:\n");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}