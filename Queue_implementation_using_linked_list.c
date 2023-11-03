// Queue Implementation using Linked List 
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL, *rear = NULL, *newnode = NULL, *temp = NULL;

void enqueue();
void dequeue();
void display();

int main()
{
    enqueue();
    display();
    dequeue();
    display();
    return 0;
}

void enqueue()
{
    int choice = 1, n;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode == NULL)
            printf("Memory Not allocate.");
        else
        {
            printf("Enter data of node\n");
            scanf("%d", &n);
            newnode->data = n;
            newnode->next = NULL;

            if(front == NULL && rear == NULL)
                front = rear = newnode;
            else
            {
                rear->next = newnode;
                rear = newnode;
            }
            printf("Do you want to add another node in Queue, press 1 for continue or 0 for exit\n");
            scanf("%d", &choice);
        }
    }
}

void dequeue()
{
    if(front == NULL && rear == NULL)
        printf("Queue is Empty.");
    else
    {
        temp = front;
        printf("\nThe Dequeued element is: %d\n", temp->data);
        front = front->next;
        free(temp);
        temp = NULL;
    }
}

void display()
{
    if (front == NULL && rear == NULL)
        printf("Queue is Empty.");
    else
    {
        temp = front;
        printf("\nThe elements of Queues are\n");
        while(temp!=NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}