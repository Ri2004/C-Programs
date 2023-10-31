#include<stdio.h>
int main()
{
    int length, breadth, height, volume;

    printf("Enter Length, Breadth and Height of Cuboid\n");
    scanf("%d %d %d", &length, &breadth, &height);

    volume = length * breadth * height;
    printf("The volume of Cuboid is: %d\n", volume);
    return 0;
}