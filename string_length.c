// Find length of string
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[200];
    int length;
    printf("Enter any string\n");
    gets(ch);
    length = strlen(ch);
    printf("Length of string is %d\n", length);
    return 0;
}