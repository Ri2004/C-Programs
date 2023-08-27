#include<stdio.h>
int main()
{
    int p, t, r, si;

    printf("Enter Principal Amount:\n");
    scanf("%d", &p);

    printf("Enter Rate of Interest:\n");
    scanf("%d", &r);

    printf("Enter Time:\n");
    scanf("%d", &t);

    si = (p * r * t) / 100;
    printf("The Simple Interest is: %d", si);
    return 0;
}