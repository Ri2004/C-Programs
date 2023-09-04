// Perimeters and Area 
#include<stdio.h>
int main()
{
    int length, breadth, perimeter, area;
    printf("Enter Length of Rectangle\n");
    scanf("%d", &length);

    printf("Enter Breadth of Rectangle\n");
    scanf("%d", &breadth);

    perimeter = 2 * (length + breadth);
    area = (length * breadth);

    printf("The Perimeter of Rectangle is: %d\n", perimeter);
    printf("The Area of Rectangle is: %d\n", area);

    return 0;
}