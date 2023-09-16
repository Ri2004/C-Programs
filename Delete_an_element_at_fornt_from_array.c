// Delete an element from front of the array

#include<stdio.h>
int main()
{
    int arr[50], n, i, j, num;
    printf("Enter size of array\n");
    scanf("%d", &n);

    printf("Enter array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements of the array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    num = arr[0];
    for (j = 0; j < n; j++)
    {
        arr[j] = arr[j + 1];
    }

    printf("\nAfter delete the %d at front from array\n", num);
    n--;
    for (j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}