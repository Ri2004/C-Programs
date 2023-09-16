// Add an element at end in array
// for insert an element in array we must create an array which is not full i.e. number of elements must be less than the size of array

#include<stdio.h>
int main()
{
    int arr[50], n, i, num;
    printf("Enter Size of array\n");
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

        printf("Elements of array is\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", arr[i]);
        }

        printf("Enter element which you want to insert at end\n");
        scanf("%d", &num);

        arr[n] = num;
        n++;

        printf("After inserting %d in Array the array is\n", num);

        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[j]);
        }
    }
    
    return 0;
}