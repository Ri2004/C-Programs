// Delete an element from a specific index

#include<stdio.h>
int main()
{
    int arr[50], n, i, j, pos, num;

    printf("Enter Size of array\n");
    scanf("%d", &n);

    printf("Enter the position in which you want to delete the element\n");
    scanf("%d", &pos);

    if (n > 50)
    {
        printf("Overflow Condition.\n");
    }
    else
    {
        printf("Enter Array Elements\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("Elements of the Array are\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        num = arr[pos - 1];
        for (j = pos - 1; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        n--;
        printf("\nAfter delete %d from the array the array is\n", num);

        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[j]);
        }
    }
    return 0;
}