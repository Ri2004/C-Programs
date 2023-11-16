// Insert Node End of Circular Linked List 
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*tail, *newnode, *temp;

void create_Circular_Linked_List();
void display_list();
void insert_node_end_of_circular_linked_list();

int main()
{
    create_Circular_Linked_List();
    display_list();
    insert_node_end_of_circular_linked_list();
    display_list();
    return 0;
}

void create_Circular_Linked_List()
{
    int choice = 1;
    while (choice==1)
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
                tail->next = newnode;
            }
            else
            {
                newnode->next = tail->next;
                tail->next = newnode;
                tail = newnode;
            }
        }
        printf("Do You want to add another node in Linked List? if yes press 1 else press 0\n");
        scanf("%d", &choice);
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

void insert_node_end_of_circular_linked_list()
{
    if(tail==NULL)
        printf("Linked List is Empty.");
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
            printf("Memory Not Allocate for Newly Created Node\n");
        else
        {
            printf("\nEnter data of Newly created node\n");
            scanf("%d", &newnode->data);
            newnode->next = tail->next;
            tail->next = newnode;
            tail = newnode;
        }
    }
}