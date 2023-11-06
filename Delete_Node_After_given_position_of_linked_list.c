// Delete Node after given position in Linked List 
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
void delete_node_after_given_position();

int main()
{
    create_linked_list();
    display_list();
    delete_node_after_given_position();
    display_list();
    return 0;
}

void create_linked_list()
{
    int choice = 1;
    while(choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Memory Not allocate.");
        }
        else
        {
            printf("Enter data of Node\n");
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
            printf("Do You add another node in Linked List? if yes press 1, else 0\n");
            scanf("%d", &choice);
        }
    }
}

void display_list()
{
    if(head == NULL)
    {
        printf("No Nodes are present in Linked List.");
    }
    else
    {
        temp = head;
        printf("\nAfter insert data in Linked List the elements are\n");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            count++;
            temp = temp->link;
        }
    }
}

void delete_node_after_given_position()
{
    struct node *delnode = NULL, *prevnode = NULL;
    int pos, i = 1;
    printf("\nEnter Position from which you want to delete a node\n");
    scanf("%d", &pos);

    if(head == NULL)
        printf("\nNo Nodes are there. Linked List is empty.\n");
    else
    {
        if(pos<=1 || pos>=count)
            printf("Invalid Position");
        else
        {
            prevnode = head;
            while (i < pos)
            {
                prevnode = prevnode->link;
                i++;
            }
            delnode = prevnode->link;
            prevnode->link = delnode->link;
            free(delnode);
            delnode = NULL;
        }
    }
}