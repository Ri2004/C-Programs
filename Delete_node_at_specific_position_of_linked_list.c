// Delete Node from specific position of Linked List 
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head = NULL, *temp = NULL, *newnode = NULL;
int count = 0;

void create_linked_list();
void display_list();
void delete_node_at_specific_position_of_linked_list();

int main()
{
    create_linked_list();
    display_list();
    delete_node_at_specific_position_of_linked_list();
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
                head = temp = newnode;
            else
            {
                temp->link = newnode;
                temp = temp->link;
            }
            printf("Do you add another node in Linked List? if yes press 1 else 0\n");
            scanf("%d", &choice);
        }
    }
}

void display_list()
{
    temp = head;
    printf("\nAfter insert data the elements of Linked List are\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        count++;
        temp = temp->link;
    }
}

void delete_node_at_specific_position_of_linked_list()
{
    struct node *delnode = NULL, *nextnode = NULL;
    int pos, i = 1;
    printf("\nEnter Position from which you want to delete node\n");
    scanf("%d", &pos);

    if(pos<=1 || pos>=count)
        printf("Invalid Position.");
    else
    {
        nextnode = head;
        while (i < pos - 1)
        {
            nextnode = nextnode->link;
            i++;
        }
        delnode = nextnode->link;
        nextnode->link = delnode->link;
        free(delnode);
        delnode = NULL;
    }
}