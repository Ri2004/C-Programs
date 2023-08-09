#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, *ptr, i;
    printf("Enter Size:\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    printf("The array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    return 0;
}