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

    while(n!=0)
    {
        printf("Enter choice if you want to create a node\n");
        scanf("%d", &n);

        if (n == 0)
        {
            temp->link = NULL;
            break;
        }
            
        else
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data\n");
            scanf("%d", &newnode->data);

            if (head == NULL)
            {
                head = temp = newnode;
            }
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