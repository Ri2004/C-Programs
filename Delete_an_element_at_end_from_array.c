// Delete an element at end from array

#include<stdio.h>
int main()
{
    int arr[50], n, i, j, num;
    printf("Enter Size of Array\n");
    scanf("%d", &n);

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

        num = arr[n - 1];
        arr[n - 1] = 0;
        n--;

        printf("\nAfter delete %d from the array the array is\n", num);
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[j]);
        }
    }
    return 0;
}