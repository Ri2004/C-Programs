// Print armstrong number between an interval
#include<stdio.h>
#include<math.h>

int check_armstrong(int n)
{
    int temp, length = 0, rem, sum = 0, armstrong = 1;
    temp = n;
    for (; temp > 0;)
    {
        length++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + (pow(rem, length));
        temp = temp / 10;
    }
    if (n != sum)
        armstrong = 0;

    return armstrong;
}
int main()
{
    int num1, num2, armstrong, i;
    printf("Enter Lower limit\n");
    scanf("%d", &num1);

    printf("Enter upper limit\n");
    scanf("%d", &num2);

    for (i = num1; i <= num2; i++)
    {
        if (check_armstrong(i))
        {
            printf("%d is Armstrong Number\n", i);
        }
        else
        {
            printf("%d is Not Armstrong Number\n", i);
        } 
    }
    return 0;
}