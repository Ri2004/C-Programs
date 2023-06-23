// Count Alphabet and special symbol inside the string
#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int i, len, ch = 0, splc = 0;
    printf("Enter any string\n");
    gets(s);
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
        {
            ch++;
        }
        else
        {
            splc++;
        }
    }
    printf("Total Alphabet = %d\n", ch);
    printf("Total Special symbol = %d\n", splc);
    return 0;
}