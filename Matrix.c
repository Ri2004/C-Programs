// Matrix
#include<stdio.h>
int main()
{
    int matrix[100][100], n, i, j;

    printf("Enter Size Of Matrix\n");
    scanf("%d", &n);

    printf("Enter Matrix Elements\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The Matrix is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", matrix[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}