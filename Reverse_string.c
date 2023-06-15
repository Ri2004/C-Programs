// Reverse a string
#include<stdio.h>
#include<string.h>
int main()
{
    int i,length,s;
    char str[200];
    printf("Enter any string\n");
    gets(str);
    length = strlen(str);
    printf("Reverse string is\n");
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}