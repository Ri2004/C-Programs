// Delete an element from front of the array

#include<stdio.h>
int main()
{
    int arr[50], n, i, j, num;
    printf("Enter size of array\n");
    scanf("%d", &n);

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

        printf("Elements of the array is\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        num = arr[0];
        for (j = 0; j < n - 1; j++)  // in this line j goes to n-1, n=10, when inserting elements then i     goes to less than n, i.e. n=9, so at deletion if j goes to less than 9 then when j = 9 then arr[9] = arr[10], and after left shifiting I decrement the size - 1, so arr[10] is garbage value.
        {
            arr[j] = arr[j + 1];
        }

        printf("\nAfter delete the %d at front from array\n", num);
        n--;
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[j]);
        }
    }
        
    return 0;
}