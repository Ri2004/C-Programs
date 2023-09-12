// stack implementation using array
#include<stdio.h>
#define MAX 6
int top = -1;
int stack[MAX];

void push(int item)
{
    int i;
    if (top == (MAX - 1))
        printf("Stack Overflow\n");
    
    else
    {
        top += 1;
        stack[top] = item;
        printf("\nAfter push %d in stack the stack is\n", item);

        for (i = 0; i <= top; i++)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int pop()
{
    int t, i;
    if (top == -1)
        printf("Stack is empty\n");
    
    else
    {
        t = stack[top];
        top -= 1;
        printf("\nAfter pop %d from stack the stack is\n", t);

        for (i = 0; i <= top; i++)
        {
            printf("%d\n", stack[i]);
        }
    }
    return t;
}

int main()
{
    int result, i;

    printf("Enter elements in stack\n");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &stack[i]);
        push(stack[i]);
    }

    result = pop();
    printf("\nThe First popped element is: %d\n\n", result);

    result = pop();
    printf("\nThe Second popped element is: %d\n", result);

    return 0;
}