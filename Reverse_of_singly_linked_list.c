// Reverse Singly Linked List 
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head = NULL, *temp = NULL, *newnode = NULL;

void create_linked_list();
void display_list();
void reverse_linked_list();

int main()
{
    create_linked_list();
    display_list();
    reverse_linked_list();
    display_list();
    return 0;
}

void create_linked_list()
{
    int choice = 1;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode == NULL)
            printf("Memory Not allocate.");
        else
        {
            printf("Enter data of Node\n");
            scanf("%d", &newnode->data);
            newnode->link = NULL;
            
            if(head == NULL)
                head = temp = newnode;
            else
            {
                temp->link = newnode;
                temp = temp->link;
            }
            printf("Do You want to add another node in Linked List? if yes, press 1 else 0\n");
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
        printf("\nThe Elements of Linked List are\n");
        while(temp!=NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
    }
}

void reverse_linked_list()
{
    if(head == NULL)
        printf("Linked List is Empty.");
    else
    {
        struct node *prevnode = NULL, *currentnode = NULL, *nextnode = NULL;
        currentnode = nextnode = head;
        while (currentnode != NULL)
        {
            nextnode = currentnode->link;
            currentnode->link = prevnode;
            prevnode = currentnode;
            currentnode = nextnode;
        }
        head = prevnode;
    }
}