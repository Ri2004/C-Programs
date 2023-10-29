// Circular Queue implementation using array
#include<stdio.h>
#define MAX 5
int circular_queue[MAX], front = -1, rear = -1;

void enqueue(int);
void dequeue();
void display();

int main()
{
    int n, i;
    printf("Enter Number of Elements you want to insert in queue\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &circular_queue[i]);
        enqueue(circular_queue[i]);
    }
    display();
    dequeue();
    display();
    dequeue();
    display();
    return 0;
}

void enqueue(int item)
{
    if((rear+1)%MAX == front)
    {
        printf("Queue is Full\n");
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        circular_queue[rear] = item;
    }
    else
    {
        rear = (rear + 1) % MAX;
        circular_queue[rear] = item;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else if (front == rear)
    {
        printf("\nThe Dequeued element is: %d\n", circular_queue[front]);
        circular_queue[front] = 0;
        front = rear = -1;
    }
    else
    {
        printf("\nThe Dequeued element is: %d\n", circular_queue[front]);
        circular_queue[front] = 0;
        front = (front + 1) % MAX;
    }

}

void display()
{
    int i;
    printf("\nAfter enqueue and dequeue in queue the queue is\n");
    for (i = front; i <= rear; i=(i+1%MAX))
    {
        printf("\n%d ", circular_queue[i]);
    }
}