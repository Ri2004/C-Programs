#include<stdio.h>
void multiplication_table(int n);
void multiplication_table(int n)
{
    int b;

    printf("Enter A Number: ");
    scanf("%d",&n);

    printf("Multiplication table of %d is:\n",n);
    for(int i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
int main()
{
    int a,n;
    a = multiplication_table(n);
    printf("%d",a);
    
    return 0;
}