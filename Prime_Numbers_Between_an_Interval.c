// Prime Numbers between an interval
#include<stdio.h>
#include<stdbool.h>

bool check_prime(int n)
{
    int i;
    bool is_prime = true;
    if (n == 0 || n == 1)
        is_prime = false;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}
int main()
{
    int lower, upper, i, j, prime;
    printf("Enter Lower Limit\n");
    scanf("%d", &lower);

    printf("Enter Upper Limit\n");
    scanf("%d", &upper);

    for (i = lower; i <= upper; i++)
    {
        prime = check_prime(i);

        if (prime)
        {
            printf("%d is Prime Number\n", i);
        }
    }
        return 0;
}