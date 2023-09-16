// Add an element at front in array
// for insert an element in array we must create an array which is not full i.e. number of elements must be less than the size of array


#include <stdio.h>
int main()
{
    int arr[50], n, i, num, j, pos = 4;
    printf("Enter size of array\n");
    scanf("%d", &n);

    if(n>50)
    {
        printf("Overflow condition\n");
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

        for (j = n; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[j] = num;
        n++;

        printf("After add %d element in array\n", num);
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}