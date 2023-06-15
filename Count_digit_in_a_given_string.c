// Count digit inside the string
#include<stdio.h>
#include<string.h>
int main()
{
    char s[200],ch;
    int i,digit=0,len;
    printf("Enter any string\n");
    gets(s);
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i]>=48 && s[i]<=57)
        {
            digit++;
        }
        else
        {
            ch++;
        }
    }
    printf("Total digit = %d\n",digit);
    return 0;
}