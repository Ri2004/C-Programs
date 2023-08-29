#include<stdio.h>
#include<stdbool.h>

bool checkPrimeOrNot(int n)
{
    bool is_prime = true;
    if (n==1 || n==0)
        is_prime = false;

    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n%i == 0)
        {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}
int main()
{
    int n, prime;
    printf("Enter A Number\n");
    scanf("%d", &n);

    prime = checkPrimeOrNot(n);

    if (prime)
    {
        printf("%d is Prime Number.", n);
    }
    else
    {
        printf("%d is Not Prime Number.", n);
    }

    return 0;
}