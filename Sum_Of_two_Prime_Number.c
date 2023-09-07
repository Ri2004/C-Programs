#include<stdio.h>
int check_prime(int n)
{
    int is_prime = 1;

    if (n == 0 || n == 1)
        is_prime = 0;

    for (int i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            is_prime = 0;
            break;
        }
    }
    return is_prime;
}
int main()
{
    int n, flag = 0, i;

    printf("Enter A Positive Number\n");
    scanf("%d", &n);

    for (i = 1; i <= (n / 2); i++)
    {
        if (check_prime(i))
        {
            if (check_prime(n - i))
            {
                flag = 1;
                printf("%d = %d + %d\n", n, i, (n - i));
            }
        }
    }

    if (!flag)
    {
        printf("%d is not represented as sum of two prime numbers.", n);
    }
    return 0;
}