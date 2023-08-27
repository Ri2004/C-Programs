#include<stdio.h>
int main()
{
    int marks[3], i, sum=0;
    float avg;

    printf("Enter Marks\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    avg = (sum / 3);

    if(avg > 80)
    {
        printf("You got A grade.");
    }
    else if(avg > 60)
    {
        printf("You got B grade.");
    }
    else if(avg > 40)
    {
        printf("You Pass the exam.");
    }
    else
    {
        printf("You're Fail.");
    }
    return 0;
}