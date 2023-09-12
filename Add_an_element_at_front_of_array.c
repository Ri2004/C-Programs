// Add an element at front in array
// for insert an element in array we must create an array which is not full i.e. number of elements must be less than the size of array


#include <stdio.h>
int main()
{
    int arr[50], n, i, num, j, pos = 4;
    printf("Enter size of array\n");
    scanf("%d", &n);

    printf("Enter array elements\n");
    for (i = 0; i < (n - 5); i++)  
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is\n");
    for (i = 0; i < (n - 5); i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; arr[i] != 0; i++);

    printf("\nEnter the value which you want to insert in array\n");
    scanf("%d", &num);

    for (j = i; j > 0; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[j] = num;
    printf("After add %d element in array\n", num);
    for (j = 0; arr[j] != 0; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}