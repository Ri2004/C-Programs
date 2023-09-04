// Divide a Number by that number factorial and after factorial add result to the sum 
// Program result  1/1! + 2/2! + 3/3! + 4/4! + 5/5! + ........... n/n!
#include<stdio.h>
int main()
{
    float num=4.0, i, j, fact, sum = 0, div;

    printf("Enter A Number\n");   // at first user enter a number
    scanf("%f", &num);

    for (i = 1.0; i <= num; i++)  // after enter number start a loop which goes to that number that user entered
    {
        fact = 1.0;                 // initialize fact value 1.0
        for (j = 1.0; j <= i; j++)  // start a nested loop which goes to value of i 
        {
            fact = fact * j;        // multiply fact value with j
        }
        div = (i / fact);           // then divide i value with fact value such that i=2, fact=2, divide i/fact(2/2)
        sum += div;                 // after that add division result to the sum and print sum value when loop exit
    }
    printf("Addition of Numbers are: %.2f", sum);
    return 0;
}