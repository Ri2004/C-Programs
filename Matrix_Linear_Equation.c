// Matrix Linear Equation
#include<stdio.h>
int main()
{
    int matrix[100][100], n, i, j, sum_of_rows, sum_of_cols, grand_total = 0;

    printf("Enter Size of Matrix\n");
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

    printf("After Sum of each row and each column the result is\n");
    for (i = 0; i < n; i++)
    {
        sum_of_cols = sum_of_rows = 0;

        for (j = 0; j < n; j++)
        {
            sum_of_rows += matrix[i][j];
            sum_of_cols += matrix[j][i];
            grand_total += matrix[i][j] + matrix[j][i];
        }
        printf("Sum of %dth row is: %d\n", i + 1, sum_of_rows);
        printf("Sum of %dth column is: %d\n", i + 1, sum_of_cols);
    }
    printf("The addition of whole matrix is: %d\n", grand_total);

    return 0;
}