// Rock Paper Scissor
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumberGenerator(int n)
{
    srand(time(NULL));
    int number = rand() % n;

    return number;
}
int main()
{
    char s[200];
    int num, user_choose, computer_choose, user_score = 0, computer_score = 0;

    printf("Welcome To Rock Paper Scissor Game!\n");

    printf("What is Your Name:\n");
    gets(s);

    printf("Choose 0 for 'Rock', 1 for 'Paper', 2 for 'Scissor'\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Round: %d\n", i);

        printf("%s's Turn", s);

        user_choose = printf("\nChoose a Number between 0 and 2: ");
        scanf("%d", &user_choose);

        if (user_choose > 2)
            break;

        computer_choose = randomNumberGenerator(3);

        //	Round1
        if (user_choose == 0)
        {
            if (computer_choose == 0)
            {
                printf("Both are choose Rock\n");
                user_score = computer_score = 0;
            }
            else if (computer_choose == 1)
            {
                printf("Computer choose Paper\n");
                computer_score += 1;
            }
            else if (computer_choose == 2)
            {
                printf("Computer choose Scissor\n");
                user_score += 1;
            }
        }

        // Round 2
        else if (user_choose == 1)
        {
            if (computer_choose == 0)
            {
                printf("Computer choose Rock\n");
                user_score += 1;
            }
            else if (computer_choose == 1)
            {
                printf("Both are choose Paper\n");
                user_score = computer_score = 0;
            }
            else if (computer_choose == 2)
            {
                printf("Computer choose Scissor\n");
                computer_score += 1;
            }
        }

        // Round 3
        else if (user_choose == 2)
        {
            if (computer_choose == 0)
            {
                printf("Computer choose Rock\n");
                computer_score += 1;
            }
            else if (computer_choose == 1)
            {
                printf("Computer choose Paper\n");
                user_score += 1;
            }
            else if (computer_choose == 2)
            {
                printf("Both are choose Scissor\n");
                user_score = computer_score = 0;
            }
        }
    }

    if (user_choose > 2)
    {
        printf("User give Wrong input number.");
    }
    else if (user_choose == computer_choose)
    {
        printf("Match Tie!");
    }
    else if (user_choose > computer_choose)
    {
        printf("User Win!");
    }
    else
    {
        printf("Computer Win");
    }
}