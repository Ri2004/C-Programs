// Selection Sort  
#include<stdio.h>

void selection_sort(int arr[], int n)
{
    int min,i,j,t;

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        {
            if(arr[min]>arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            t = arr[i];
            arr[i] = arr[min];
            arr[min] = t;
        }
    }
}

int main()
{
    int arr[40], n, i;
    printf("Enter size of Array\n");
    scanf("%d", &n);

    printf("Enter Array Elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Before Sorting The array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    selection_sort(arr, n);

    printf("\nAfter Sorting The array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}