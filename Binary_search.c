// Binary Search
#include<stdio.h>

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void bubblesort(int arr[], int n)
{
    int r, i;
    for (r = 1; r < n; r++)
    {
        for (i = 0; i < n - r; i++)
        {
            if(arr[i]>arr[i+1])
                swap(&arr[i], &arr[i + 1]);
        }
    }
}

int binary_search(int arr[], int n, int target)
{
    int l = 0, r = n - 1, mid;
    while(l<=r)
    {
        mid = (l + r) / 2;

        if(target==arr[mid])
            return mid;
        else if (target > arr[mid])
            l = mid + 1;
        else if (target < arr[mid])
            r = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[40], n, i, element, result;
    printf("Enter size of array\n");
    scanf("%d", &n);

    printf("Enter array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nBefore Sorting The array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    bubblesort(arr, n);
    printf("\nAfter Sorting The array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the element which you want to search in array\n");
    scanf("%d", &element);

    result = binary_search(arr, n, element);
    if (result > 0)
        printf("%d is Found in array at %d index", element, result);
    else
        printf("%d is not Found in array at %d index", element, result);
}