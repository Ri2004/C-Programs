#include<stdio.h>
int main()
{
    FILE *ptr;

    // For Reading File
    char s[34];
    ptr = fopen("myfile.txt", "r");
    fscanf(ptr, "%s", s);
    printf("The String I read is: %s", s);
    fclose(ptr);


    // For Writing and Appending File
    char string[200];
    printf("\n");
    gets(string);
    ptr = fopen("myfile1.txt", "w");
    fprintf(ptr,"The String I want to write in file is: %s", string);
    fclose(ptr);
    return 0;
}