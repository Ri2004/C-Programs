// hollow rectangle
#include<stdio.h>
int main()
{
    int rows, cols, i, j;

    printf("Enter rows:\n");
    scanf("%d", &rows);

    printf("Enter cols:\n");
    scanf("%d", &cols);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            if(i==1 || i==rows || j==1 || j==rows)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
        return 0;
}