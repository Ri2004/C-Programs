// Palindrome String
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char str[200], str_rev[200];
    int i;
    bool flag = false;
    printf("Enter A String\n");
    gets(str);

    int j = (strlen(str) - 1);

    for (i = 0; i < strlen(str); i++)
    {
        str_rev[j] = str[i];
        j -= 1;
    }

    for (i = 0; i < strlen(str); i++)
    {
        if(str[i] != str_rev[i])
            flag = 1;
    }

    if(flag == 0)
        printf("%s is Palindrome String.", str);
    
    else
        printf("%s is not Palindrome String.", str);
    return 0;
}