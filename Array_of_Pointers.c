#include <stdio.h>

int highestMarks(int **ptr, int *size1, int n)
{
    int max = 0, i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < size1[i]; j++)      //size1 = size, so, size1[0] = size[0] = 6
            if (max < ptr[i][j])           //ptr = p, so, ptr[0] = p[0] = a, ptr[0][0] = p[0][0] = a[0] = 25
                max = ptr[i][j];
    }
    return max;
}
int main()
{
    int *p[3], marks;
    int a[] = {25, 58, 69, 36, 10, 15};
    int b[] = {25, 36, 45, 45};
    int c[] = {36, 45, 85, 96, 20, 14, 36, 42};

    int size[3] = {6, 4, 8};
    p[0] = a;
    p[1] = b;
    p[2] = c;
    marks = highestMarks(p, size, 3);
    printf("%d", marks);
}