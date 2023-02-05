// Function with return type with parameter
/*
    We define a function anywhere in the program after declaring the function, but we call it only after the main function. If we not declare the function before main function & If we call the function before defining it, then the compiler will give an error. If we call the function after defining it, then the program will run successfully. 
*/

#include<stdio.h>
int sum(int y, int z); // Function Declaration
int sum(int y, int z) // Function Definition
{
    int x;
    
    printf("Enter the Number: ");
    scanf("%d",&y);

    printf("Enter the Number: ");
    scanf("%d",&z);

    x = y+z;
   return x;
}
int main()
{
    int x,y,z;

    x = sum(y, z); // Function Call
    printf("The Sum is: %d\n",x);
    return 0;

    /* 
        We can also write the following code:


    int x = sum(y, z); // Function Call
    printf("The Sum is: %d  ",x);
    return 0;

    or

    printf("Enter the Number: ");
    scanf("%d",&y);

    printf("Enter the Number: ");
    scanf("%d",&z);
    */
}