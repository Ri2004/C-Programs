// Matrix Addition
#include<stdio.h>
int main()
{
    int matrix1[100][100], matrix2[100][100], matrix3[100][100], n, i, j, sum = 0;

    printf("Enter order of Matrix\n");
    scanf("%d", &n);

    printf("Enter 1st Matrix Elements\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter 2nd Matrix Elements\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("1st Matrix is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", matrix1[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("2nd Matrix is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", matrix2[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Matrix Addition\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            matrix3[i][j] = sum + matrix1[i][j] + matrix2[i][j];
            
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", matrix3[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}