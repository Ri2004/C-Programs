#include<stdio.h>
int main()
{
    int arr[200][200], i, j, n, flag = 1;

    printf("Enter Size of matrix\n");
    scanf("%d", &n);

    printf("Enter Matrix Elements\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Matrix is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", arr[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j && arr[i][j] != 1)
            {
                flag = 0;
                break;
            }
            else if (i != j && arr[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
        printf("identity Matrix");
    else
        printf("Not identity Matrix");

    return 0;
}