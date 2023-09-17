// Add an element at given position in array
// for insert an element in array we must create an array which is not full i.e. number of elements must be less than the size of array

#include <stdio.h>
int main()
{
    int arr[50], n, i, num, j, pos;
    printf("Enter size of array\n");
    scanf("%d", &n);

    printf("Enter the position at which you insert an element\n");
    scanf("%d", &pos);

    if (n > 50)
    {
        printf("Overflow Condition.\n");
    }
    else
    {
        printf("Enter array elements\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("The array is\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        printf("\nEnter the value which you want to insert in array\n");
        scanf("%d", &num);

        for (j = n; j > pos - 1; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[j] = num;
        n++;

        printf("After add %d element in array\n", num);
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[j]);
        }
    }

    return 0;
}