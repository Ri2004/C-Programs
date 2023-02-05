#include <stdio.h>
int main()
{
    int a,b,sum;
    int *p, *q, *r;
    printf("Enter First Number\n");
    scanf("%d",&a);

    printf("Enter Second Number\n");
    scanf("%d",&b);

    sum = a+b;

    p = &a;
    q = &b;
    r = &sum;
    printf("The sum of %d and %d is %d\n",*p,*q,*r);
}