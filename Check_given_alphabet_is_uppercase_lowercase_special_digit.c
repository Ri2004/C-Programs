#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    if (ch >= 65 && ch <= 90) {
        printf("The character is uppercase");
    }
    else if (ch >= 97 && ch <= 122) {
        printf("The character is lowercase");
    }
    else if (ch >= 48 && ch <= 57) {
        printf("The character is digit"); 
    }
    else {
        printf("The character is special character");
    }
    return 0;
}