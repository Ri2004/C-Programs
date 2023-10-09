#include<stdio.h>
#define PI 3.14
int main()
{
    int radius;
    float circumference;

    printf("Enter Radius of circle\n");
    scanf("%d", &radius);

    circumference = 2 * PI * radius;

    printf("The Circumference of the Circle is: %.2f", circumference);
    return 0;
}