// Matrix Multiplication
#include<stdio.h>
int main()
{
    int matrix1[100][100], matrix2[100][100], i, j, k, row1, col1, row2, col2, resultant_matrix[100][100], sum;

    printf("Enter Row size of 1st Matrix\n");
    scanf("%d", &row1);

    printf("Enter Column size of 1st Matrix\n");
    scanf("%d", &col1);

    printf("Enter Row size of 2nd Matrix\n");
    scanf("%d", &row2);

    printf("Enter Column size of 2nd Matrix\n");
    scanf("%d", &col2);

    if (col1 != row2)
        printf("Matrix Multiplication not possible\n");

    else
    {
        printf("Enter 1st Matrix Elements\n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter 2nd Matrix Elements\n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
        }

        printf("1st Matrix is\n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {
                printf("%d", matrix1[i][j]);
                printf("\t");
            }
            printf("\n");
        }

        printf("2nd Matrix is\n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf("%d", matrix2[i][j]);
                printf("\t");
            }
            printf("\n");
        }


        printf("The Resultant Matrix is\n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                sum = 0;
                for (k = 0; k < col1 && k < row2; k++)
                {
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                resultant_matrix[i][j] = sum;
                printf("%d", resultant_matrix[i][j]);
                printf("\t");
            }
            printf("\n");
        }
    }

    return 0;
}