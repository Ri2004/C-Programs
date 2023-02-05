#include<stdio.h>
int main()
{
    int a,i=1,fact=1;
    printf("Enter a number: ");
    scanf("%d",&a);

    while(i<=a)
    {
        ("%d\n",i);
        fact = fact *i;
        i++;
    }
    printf("The Factorial is: %d\n",fact);
    return 0;
}