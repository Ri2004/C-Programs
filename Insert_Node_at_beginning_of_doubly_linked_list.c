// Insert Node at Beginning of Doubly Linked List 
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
};
struct node *head = NULL, *temp = NULL, *newnode = NULL;

void create_linked_list();
void display_list();
void insert_node_at_beginning_of_linked_list();

int main()
{
    create_linked_list();
    display_list();
    insert_node_at_beginning_of_linked_list();
    display_list();
    return 0;
}

void create_linked_list()
{
    int choice = 1;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode == NULL)
            printf("Memory Not allocate.");
        else
        {
            printf("Enter data of Node\n");
            scanf("%d", &newnode->data);
            newnode->prev = newnode->next = NULL;

            if(head == NULL)
                head = temp = newnode;
            else
            {
                newnode->prev = temp;
                temp->next = newnode;
                temp = newnode;
            }
            printf("Do You want to add another node in Linked List? if yes press 1 else 0\n");
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
        printf("\nThe elements of Linked List are\n");
        while(temp!=NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void insert_node_at_beginning_of_linked_list()
{
    if(head == NULL)
        printf("Linked List is Empty.");
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
            printf("Memory Not allocate for creation of node.");
        else
        {
            printf("\nEnter data of Newly Created Node\n");
            scanf("%d", &newnode->data);
            newnode->prev = NULL;
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        } 
    }
}