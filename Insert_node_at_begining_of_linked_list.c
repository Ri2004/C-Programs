// Insesrt Node at Beginning of Linked List 
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
void insert_node_at_begining();

int main()
{
    create_linked_list();
    display_list();
    insert_node_at_begining();
    display_list();
    return 0;
}

void create_linked_list()
{
    int choice = 1;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d", &newnode->data);
        newnode->link = NULL;

        if(head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->link = newnode;
            temp = temp->link;
        }
        printf("Do You want to create another node, if yes press 1 else 0\n");
        scanf("%d", &choice);
    }
}

void display_list()
{
    temp = head;
    printf("After insert data in Linked List the data are\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}

void insert_node_at_begining()
{
    if(head == NULL)
    {
        printf("Linked List is Empty. No node is there");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter data\n");
        scanf("%d", &newnode->data);
        newnode->link = head;
        head = newnode;
    }
}