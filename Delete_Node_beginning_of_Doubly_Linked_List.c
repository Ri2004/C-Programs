#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev, *next;
};
struct node *head = NULL, *newnode = NULL, *temp = NULL;

void create_linked_list();
void display_list();
void del_node_beginning_of_doubly_linked_list();

int main()
{
    create_linked_list();
    display_list();
    del_node_beginning_of_doubly_linked_list();
    display_list();
    return 0;
}

void create_linked_list()
{
    int choice = 1;
    while(choice==1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
            printf("Memory Not allocate.");
        else
        {
            printf("Enter data of node\n");
            scanf("%d", &newnode->data);
            newnode->prev = newnode->next = NULL;

            if(head==NULL)
                head = temp = newnode;
            else
            {
                temp->next = newnode;
                newnode->prev = temp;
                temp = newnode;
            }
            printf("Do you want to insert another node in Linked List? if yes press 1 else press 0\n");
            scanf("%d", &choice);
        }
    }
}

void display_list()
{
    if(head==NULL)
        printf("Linked List is Empty.");
    else
    {
        temp = head;
        printf("\nThe elements of Linked List are\n");
        while(temp!=NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void del_node_beginning_of_doubly_linked_list()
{
    if(head==NULL)
        printf("Linked List is Empty.");
    else
    {
        temp = head;
        head = head->next;
        printf("\nThe Deleted Node element is: %d\n", temp->data);
        free(temp);
        temp = NULL;
    }
}