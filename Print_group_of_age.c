#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age:\n");
    scanf("%d", &age);

    if(age >= 80)
    {
        printf("You're Most Senior.");
    }
    else if (age >= 60)
    {
        printf("You're Senior.");
    }
    else if (age >= 40)
    {
        printf("You're Middle.");
    }
    else if (age >= 30)
    {
        printf("You're Young.");
    }
    else
    {
        printf("You're Junior.");
    }
    return 0;
}