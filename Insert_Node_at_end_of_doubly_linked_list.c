// Insert Node end of Doubly Linked List 
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
void insert_node_end_of_doubly_linked_list();

int main()
{
    create_linked_list();
    display_list();
    insert_node_end_of_doubly_linked_list();
    display_list();
    return 0;
}

void create_linked_list()
{
    int choice = 1;
    while(choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode == NULL)
            printf("Memory Not allocate.");
        else
        {
            printf("Enter data of node\n");
            scanf("%d", &newnode->data);
            newnode->next = newnode->prev = NULL;

            if (head == NULL)
                head = temp = newnode;
            else
            {
                temp->next = newnode;
                newnode->prev = temp;
                temp = newnode;
            }
            printf("Do you want to add another node in Linked List, if yes press 1 else press 0\n");
            scanf("%d", &choice);
        }
    }
}

void display_list()
{
    if(head == NULL)
        printf("Linked List is empty.");
    else
    {
        temp = head;
        printf("\nAfter insert and delete node in Linked List the elements are\n");
        while(temp!=NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void insert_node_end_of_doubly_linked_list()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
        printf("Memory Not allocate for new node.");
    else
    {
        printf("\nEnter data for new node\n");
        scanf("%d", &newnode->data);

        newnode->prev = newnode->next = NULL;
        if(head == NULL)
            head = newnode;
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->prev = temp;
        }
    }
}