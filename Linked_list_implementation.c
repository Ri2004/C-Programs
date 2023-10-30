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
        printf("Enter choice between 0 and 1, 0 for not want to create any node and 1 for create another node\n");
        scanf("%d", &n);

        if (n == 0)
            break;
        else
        {
            newnode = (struct node *)malloc(sizeof(struct node));
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