// Insert Node at specific position in Linked List
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
void insert_node_at_specific_position();

int main()
{
    create_linked_list();
    display_list();

    printf("\nIn Linked List %d nodes are present\n", count); /*count variable is declared globally already and count variable is used for get the length of linked list, and in display_list() count variable is used for get the length of linked list, and in main() I print this.*/

    insert_node_at_specific_position();
    display_list();
    return 0;
}

void create_linked_list()
{
    int choice = 1;
    while(choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("Memory Not allocate.");
        }
        else
        {
            printf("Enter Data\n");
            scanf("%d", &newnode->data);
            newnode->link = NULL;

            if (head == NULL)
                head = temp = newnode;
            else
            {
                temp->link = newnode;
                temp = newnode;
            }
            printf("Do You add another node in the list? if yes, press 1 else 0\n");
            scanf("%d", &choice);
        }
    }
}

void display_list()
{
    temp = head;
    printf("\nAfter insert data in Linked List the data are\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        count++;
        temp = temp->link;
    }
    
}

void insert_node_at_specific_position()
{
    int pos, i = 1;
    printf("\nEnter the Position in which you insert a node\n");
    scanf("%d", &pos);

    if(pos<=1 || pos>=count)
    {
        printf("Invalid position.\n");
    }
    else
    {
        temp = head;
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode == NULL)
            printf("Memory Not allocate for new node.");
        else
        {
            printf("Enter data of newly created node\n");
            scanf("%d", &newnode->data);
            newnode->link = NULL;

            while (i < pos - 1)
            {
                temp = temp->link;
                i++;
            }
            newnode->link = temp->link;
            temp->link = newnode;
        }
    } 
}