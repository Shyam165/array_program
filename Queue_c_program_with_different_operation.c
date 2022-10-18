#include <stdio.h>
#include <stdlib.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void insert(int x)
{
    if (rear == N - 1)
    {
        printf("queue is overflow\n");
    }
    else if (rear == -1 && front == -1)
    {
        rear = front = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
    printf("item inserted\n\n");
}
void delete ()
{
    int ele;
    if (rear == -1 && front == -1)
    {
        printf("underflow condition\n");
    }
    else if (rear == front)
    {
        ele = queue[front];
        rear = front = -1;
    }
    else
    {
        ele = queue[front];
        front++;
    }
    printf("item removed %d\n\n", ele);
}
void display()
{
    int i;
    if (rear == -1 && front == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}

int main()
{
    int element, choice;
    while (1)
    {
        printf("enter choice(1: insert, 2:display, 3:delete, 0:exit)\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(1);
            break;
        case 1:
            printf("enter the element to insert\n");
            scanf("%d", &element);
            insert(element);
            break;
        case 2:
            printf("queue elements are\n");
            display();
            break;
        case 3:
            delete ();
            break;
        default:
            printf("enter valid choice\n");
            break;
        }
    }

    return 0;
}