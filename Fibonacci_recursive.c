#include<stdio.h>
int fibo(int n)
{
    if(n==0 || n==1)
        return n;

    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int num;
    printf("Enter A Number\n");
    scanf("%d", &num);

    printf("The Fibonacci of %d is %d", num, fibo(num));
    return 0;
}