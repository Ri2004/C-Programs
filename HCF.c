#include <stdio.h>
int main()
{
    int a,b,hcf;
    printf("Enter A Number\n");
    scanf("%d",&a);

    printf("Enter A Number\n");
    scanf("%d",&b);

    for (int i = 1; i<=a && i<=b; i++) 
    {

        if(a%i==0 && b%i==0)
        {
            hcf = i;
        }
    }
    printf("The HCF of a and b is: %d\n",hcf);
}