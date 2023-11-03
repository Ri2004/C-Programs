// Linked List implementation in C
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;

int main()
{
    struct node *newnode, *temp = NULL;
    int n = 1;

    while(n)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("Memory Not allocate.");
        }
        else
        {
            printf("Enter the data\n");
            scanf("%d", &newnode->data);
            newnode->link = NULL;
            if (head == NULL)
                head = temp = newnode;
            else
            {
                temp->link = newnode;
                temp = temp->link;
            }
            printf("Do You want to create another node, if yes press 1, else 0\n");
            scanf("%d", &n);
        }
    }

    temp = head;
    printf("\nAfter creation of Linked List the data of Linked List are\n");
    while(temp!=0)
    {
        printf("%d\n", temp->data);
        temp = temp->link;
    }
    return 0;
}