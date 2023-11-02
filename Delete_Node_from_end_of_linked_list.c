// Delete Node from end of Linked List 
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
void delete_node_from_end_of_linked_list();

int main()
{
    create_linked_list();
    display_list();
    delete_node_from_end_of_linked_list();
    display_list();
    return 0;
}

void create_linked_list()
{
    int choice = 1;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data of node\n");
        scanf("%d", &newnode->data);
        newnode->link = NULL;

        if(head == NULL)
            head = temp = newnode;
        else
        {
            temp->link = newnode;
            temp = temp->link;
        }
        printf("Do you add another node in Linked List, if yes press 1 else 0\n");
        scanf("%d", &choice);
    }
}

void display_list()
{
    temp = head;
    printf("\nAfter Insert data in Linked List the elements of Linked List are\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}

void delete_node_from_end_of_linked_list()
{
    struct node *end = NULL, *prevnode = NULL;

    if(head == NULL)
        printf("No Nodes are there. Linked List is empty.");
    else
    {
        end = head;
        while (end->link != NULL)
        {
            prevnode = end;
            end = end->link;
        }
    }
    prevnode->link = NULL;
    free(end);
    end = NULL;
}