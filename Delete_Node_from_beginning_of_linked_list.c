// Delete Node from beginning of Linked List 
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
void delete_node_from_beginning_of_linked_list();

int main()
{
    create_linked_list();
    display_list();
    delete_node_from_beginning_of_linked_list();
    display_list();
    return 0;
}

void create_linked_list()
{
    int choice = 1;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("Memory Not allocate.");
        }
        else
        {
            printf("Enter data of node\n");
            scanf("%d", &newnode->data);
            newnode->link = NULL;

            if (head == NULL)
            {
                head = temp = newnode;
            }
            else
            {
                temp->link = newnode;
                temp = temp->link;
            }

            printf("Do You add another node in Linked List\n");
            scanf("%d", &choice);
        }
    }
}

void display_list()
{
    temp = head;
    printf("\nAfter insert data in Linked List the elements are\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}

void delete_node_from_beginning_of_linked_list()
{
    if (head == NULL)
        printf("No Nodes are there. Linked List is empty.");
    else
    {
        struct node *delete_node = head;
        head = head->link;
        free(delete_node);
        delete_node = NULL;
    }    
}