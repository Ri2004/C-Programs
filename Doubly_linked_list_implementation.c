// Doubly Linked List Implementation
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
};
struct node *head = NULL, *temp = NULL, *newnode = NULL;

void create_doubly_linked_list();
void display_list();

int main()
{
    create_doubly_linked_list();
    display_list();
    return 0;
}

void create_doubly_linked_list()
{
    int choice = 1;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode == NULL)
            printf("Memory Not allocate.");
        else
        {
            printf("Enter data of node\n");
            scanf("%d", &newnode->data);
            newnode->next = NULL;
            newnode->prev = NULL;

            if(head == NULL)
                head = temp = newnode;
            else
            {
                newnode->prev = temp;
                temp->next = newnode;
                temp = temp->next;
            }
            printf("Do you want to add another node in Linked List, press 1 for continue or press 0\n");
            scanf("%d", &choice);
        }
    }
}

void display_list()
{
    if(head == NULL)
        printf("Linked List is Empty.");
    else
    {
        temp = head;
        printf("\nThe elements of Doubly Linked List are\n");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}