// infix to postfix using stack
#include <stdio.h>
#include <string.h>
#define MAX 50

char infix_exp[MAX], postfix_exp[MAX], stack[MAX];
int top = -1;

int isempty()
{
    return top == -1;
}

int isfull()
{
    return top == MAX - 1;
}

int precedence(char op)
{
    if (op == '^')
    {
        return 3;
    }

    else if (op == '*' || op == '/')
    {
        return 2;
    }

    else if (op == '+' || op == '-')
    {
        return 1;
    }

    else
    {
        return -1;
    }
}

void infixToPostfix(char infix[])
{
    int i, j, k;

    for (i = 0, j = 0; i < strlen(infix); i++)
    {
        if (!isfull() && infix[i] == '(')
        {
            stack[++top] = infix[i];
        }

        else if (infix[i] >= 'a' && infix[i] <= 'z' || infix[i] >= 'A' && infix[i] <= 'Z')
        {
            postfix_exp[j++] = infix[i];
        }

        else if (infix[i] == ')')
        {
            while (!isempty() && stack[top] != '(')
            {
                postfix_exp[j++] = stack[top--];
            }
            top--;
        }

        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^')
        {
            while (!isempty() && precedence(stack[top]) >= precedence(infix[i]))
            {
                postfix_exp[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        }
    }
    while (top > -1)
    {
        postfix_exp[j++] = stack[top--];
    }

    puts(postfix_exp);
}

int main()
{
    printf("Enter an Infix Expression.\n");
    gets(infix_exp);

    infixToPostfix(infix_exp);
}