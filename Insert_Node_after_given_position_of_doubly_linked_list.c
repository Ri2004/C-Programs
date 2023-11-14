// Insert Node specific position of doubly linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev, *next;
};
struct node *head = NULL, *temp = NULL, *newnode = NULL;
int count = 0;

void create_linked_list();
void display_list();
void insert_node_specific_position_of_linked_list();

int main()
{
    create_linked_list();
    display_list();
    insert_node_specific_position_of_linked_list();
    display_list();
    return 0;
}

void create_linked_list()
{
    int choice = 1;
    while (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
            printf("Memory Not allocate.");
        else
        {
            printf("Enter data of node\n");
            scanf("%d", &newnode->data);
            newnode->prev = newnode->next = NULL;

            if (head == NULL)
                head = temp = newnode;
            else
            {
                temp->next = newnode;
                newnode->prev = temp;
                temp = newnode;
            }
            printf("Do you want to add another node in Linked List, press 1 for adding else press 0\n");
            scanf("%d", &choice);
        }
    }
}

void display_list()
{
    if (head == NULL)
        printf("Linked List is Empty.");
    else
    {
        temp = head;
        printf("\nThe elements of Linked List are\n");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            count++;
            temp = temp->next;
        }
    }
}

void insert_node_specific_position_of_linked_list()
{
    int pos, i = 1;

    if (head == NULL)
        printf("Linked List is Empty.");
    else
    {
        printf("\nEnter position in which you want to insert a node\n");
        scanf("%d", &pos);

        if (pos <= 1 || pos >= count)
            printf("Invalid Position.");
        else
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
                printf("Memory not allocate for newly created node.");
            else
            {
                printf("\nEnter data for newly created node.\n");
                scanf("%d", &newnode->data);
                newnode->prev = newnode->next = NULL;

                temp = head;
                while (i < pos)
                {
                    temp = temp->next;
                    i++;
                }
                newnode->prev = temp;
                newnode->next = temp->next;
                temp->next = newnode;
                newnode->next->prev = newnode;
            }
        }
    }
}