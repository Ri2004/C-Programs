// Insert Node in Linked List after a given Position
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
void insert_node_after_given_position();

int main()
{
    create_linked_list();
    display_list();
    insert_node_after_given_position();
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
            printf("Enter data\n");
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

            printf("Do you Add another node in Linked List? if yes, Press 1 else press 0\n");
            scanf("%d", &choice);
        }
    }
}

void display_list()
{
    temp = head;
    printf("\nAfter Creation of Linked List the elements of Linked List are\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        count++;
        temp = temp->link;
    }
}

void insert_node_after_given_position()
{
    int pos, i = 1;
    printf("\nEnter Position\n");
    scanf("%d", &pos);

    if(pos<=1 || pos>=count)
    {
        printf("Invalid Position.");
    }
    else
    {
        temp = head;
        while(i<pos)
        {
            temp = temp->link;
            i++;
        }

        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter data of newly created node\n");
        scanf("%d", &newnode->data);

        newnode->link = temp->link;
        temp->link = newnode;
    }
}