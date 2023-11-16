// Circular Linked List 
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *tail = NULL, *newnode = NULL, *temp = NULL;

void create_linked_list();
void display_list();

int main()
{
    create_linked_list();
    display_list();
    return 0;
}

void create_linked_list()
{
    int choice = 1;
    while(choice==1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
            printf("Memory Not Allocate.");
        else
        {
            printf("Enter data of Node\n");
            scanf("%d", &newnode->data);
            newnode->next = NULL;

            if(tail==NULL)
            {
                tail = newnode;
                tail->next = tail;
            }
            else
            {
                newnode->next = tail->next;
                tail->next = newnode;
                tail = newnode;
            }
            printf("Do You want to add another node in Linked List? if yes press 1 else press 0\n");
            scanf("%d", &choice);
        }
    }
}

void display_list()
{
    if(tail==NULL)
        printf("Linked List is Empty.");
    else
    {
        temp = tail->next;
        printf("\nThe Elements of Linked List are\n");
        while (temp != tail)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}