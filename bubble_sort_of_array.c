#include<stdio.h>

void swapcase(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;

    for (i = 1; i <= n - 1; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swapcase(&arr[j], &arr[j+1]);
            }
        }
    }
}
int main()
{
    int arr[50], n, i;
    printf("Enter Size of Array\n");
    scanf("%d", &n);

    printf("Enter Array Elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        
    }

    printf("Elements of Array are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, n);

    printf("\nAfter Bubble Sort the array is\n");
    for (i = 0; i < n; i++)
    {        
        printf("%d ", arr[i]);
    }

    return 0;
}