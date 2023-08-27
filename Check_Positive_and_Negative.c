#include <stdio.h>
int main()
{
    int a;

    printf("Enter A Number\n");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("%d is Positive Number", a);
    }
    if (a < 0)
    {
        printf("%d is Negative Number", a);
    }
    if (a == 0)
    {
        printf("%d is Zero", a);
    }
    return 0;
}