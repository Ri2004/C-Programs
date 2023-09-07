#include <stdio.h>
int main()
{
    int length = 0, i;
    char s[200];

    printf("Enter A String\n");
    gets(s);

    for (i = 0; s[i] != '\0'; i++)
    {
        length++;
    }

    for (i = 0; i < length; i++)
    {
        if (s[i] >= 90 && s[i] <= 122)
        {
            s[i] = s[i] - 32;
        }
    }
    printf("After convert into lowercase the string is %s\n", s);
    return 0;
}