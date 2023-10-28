// Queue implementation using array

#include<stdio.h>
#define MAX 50
int queue[MAX], front = -1, rear = -1;

void enqueue(int);
void dequeue();
void display();

int main()
{
    int n, i;
    printf("Enter Number of elements you want to insert in queue\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &queue[i]);
        enqueue(queue[i]);
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
    if (rear == MAX - 1)
    {
        printf("Queue is Full\n");
    }
    else
    {
        front = 0;
        rear++;
        queue[rear] = item;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("\nThe Dequeued element is: %d\n", queue[front]);
        queue[front] = 0;
        front++;
    }
}

void display()
{
    int i;
    printf("After insert and delete element in Queue the queue is\n");
    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
}