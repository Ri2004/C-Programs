// Stack Implementation using Linked List 
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL, *newnode = NULL;

void push();
void pop();
void display_nodes_of_stack();

int main()
{
    push();
    display_nodes_of_stack();
    pop();
    display_nodes_of_stack();
    return 0;
}

void push()
{
    int choice = 1;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
            printf("Memory Not allocate.");
        else
        {
            printf("Enter data of node\n");
            scanf("%d", &newnode->data);
            newnode->next = NULL;

            if(top==NULL)
                top = newnode;
            else
            {
                newnode->next = top;
                top = newnode;
            }
            printf("Do You want to push another node in Stack? if yes press 1 else 0\n");
            scanf("%d", &choice);
        }  
    }
}

void pop()
{
    struct node *delnode = NULL;
    if(top==NULL)
        printf("No Nodes in stack. Stack is empty.");
    else
    {
        delnode = top;
        top = top->next;
        printf("\nThe data of Popped Node from stack is:%d\n",delnode->data);
        free(delnode);
        delnode = NULL;
    }
}

void display_nodes_of_stack()
{
    struct node *temp = NULL;
    if(top == NULL)
        printf("\nStack is Empty.\n");
    else
    {
        temp = top;
        printf("\nThe data of Nodes present in stack are\n");
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}