#include <stdio.h>
int fibo(int n)
{
    int prev_num, current_num, next_num, i;
    prev_num = 0;
    current_num = 1;
    for (i = 1; i < n; i++)
    {
        next_num = prev_num + current_num;
        prev_num = current_num;
        current_num = next_num;
    }
    return next_num;
}
int main()
{
    int num;
    printf("Enter A Number\n");
    scanf("%d", &num);

    printf("The Fibonacci of %d is %d", num, fibo(num));
    return 0;
}