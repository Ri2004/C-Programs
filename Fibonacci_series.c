#include <stdio.h>
void fibo(int n)
{
    int prev_num, current_num, next_num;
    prev_num = 0;
    current_num = 1;
    printf("%d %d, ",prev_num, current_num);

    next_num = prev_num + current_num;

    while (current_num<n)
    {
        printf("%d ", next_num);
        prev_num = current_num;
        current_num = next_num;
        next_num = prev_num + current_num;
    }
    
}
int main()
{
    int num;
    printf("Enter A Number\n");
    scanf("%d", &num);

    fibo(num);
    return 0;
}