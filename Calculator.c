#include<stdio.h>
int main()
{
    char ch;
    printf("Choose an operator from the following list:\n + for addition \n - for subtraction \n * for multiplication \n / for division \n");
    scanf("%c", &ch);

    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(ch)
    {
        case '+':
            printf("%d + %d = %d", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%d / %d = %d", num1, num2, num1 / num2);
            break;
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}