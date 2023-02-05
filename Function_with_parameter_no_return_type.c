// Function with parameter and no return type
/*
    We define a function anywhere in the program after declaring the function, but we call it only after the main function. If we not declare the function before main function & If we call the function before defining it, then the compiler will give an error. If we call the function after defining it, then the program will run successfully. 
*/

#include<stdio.h>
void takenumber(int y, int z); // Function Declaration
void takenumber(int y, int z) // Function Definition
{
    int x;
    
    printf("Enter the Number: ");
    scanf("%d",&y);

    printf("Enter the Number: ");
    scanf("%d",&z);

    x = y + z;
    printf("%d\n",x);
}

int main()
{
    int y,z;
    takenumber(y,z); // Function Call
    return 0;
}
