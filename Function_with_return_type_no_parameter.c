// Function with return type and no parameter
/*
    We define a function anywhere in the program after declaring the function, but we call it only after the main function. If we not declare the function before main function & If we call the function before defining it, then the compiler will give an error. If we call the function after defining it, then the program will run successfully. 
*/
#include<stdio.h>
int takenumber(); // Function Declaration
int takenumber() // Function Definition
{
    int x,y,z;
    
    printf("Enter the Number: ");
    scanf("%d",&y);

    printf("Enter the Number: ");
    scanf("%d",&z);

    x = y + z;
    return x;
}
int main()
{
    int c;
    c = takenumber(); // Function Call
    printf("The Sum is: %d",c);
    return 0;
}