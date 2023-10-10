// Copy one stack elements into another stack
#include <stdio.h>
#define MAX 50
int stack1[MAX], top1 = -1, temp_stack[MAX], temp_top = -1, stack2[MAX], top2 = -1;

void push(int item)
{
    if (top1 == MAX - 1)
    {
        printf("Stack Overflow.\n");
    }
    else
    {
        top1++;
        stack1[top1] = item;
    }
}

int pop()
{
    int var;
    if (top1 == -1)
    {
        printf("Stack underflow.\n");
    }
    else
    {
        var = stack1[top1];
        top1--;
    }
    return var;
}

void display_original_stack()
{
    int i;

    printf("After push elements the stack is\n");
    for (i = 0; i <= top1; i++)
    {
        printf("%d ", stack1[i]);
    }
}

void display_copied_stack()
{
    int i;

    printf("\n\nAfter copy elements from original stack is\n");
    for (i = 0; i <= top2; i++)
    {
        printf("%d ", stack2[i]);
    }
}

int temp_stack_is_full()
{
    return temp_top == MAX - 1;
}

int copied_stack_is_full()
{
    return top2 == MAX - 1;
}

int main()
{
    int n, i, j;

    printf("Enter size of stack\n");
    scanf("%d", &n);

    if (n > MAX)
    {
        printf("Overflow.\n");
    }
    else
    {
        printf("Enter Stack Elements\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &stack1[i]);
            push(stack1[i]);
        }

        display_original_stack();

        if (!temp_stack_is_full())
        {
            for (i = 0; i < n; i++)
            {
                temp_stack[++temp_top] = pop();
            }
        }

        if (!copied_stack_is_full())
        {
            for (j = 0; j < n; j++)
            {
                stack2[++top2] = temp_stack[temp_top--];
            }
        }

        display_copied_stack();
    }
}