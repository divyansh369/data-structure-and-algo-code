#include<stdio.h>
#include<stdlib.h>
#define maxsize 5

int q[maxsize];
int front=-1,rear=-1,item;

int enqueue()
{
    printf("enter the element: ");
    scanf("%d",&item);

    if (rear==maxsize-1)
    {
        printf("queue is full");
    }
    else if(front==-1)
    {
        front=rear=0;
        q[rear]=item;
    }
    else
    {
        rear=rear+1;
        q[rear]=item;
    }
}

int dequeue()
{
    if (front==-1)
    {
        printf("queue is empty");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {   
        front=front+1;
    }
}

int traverse()
{
    if (front==-1)
    {
        printf("queue is empty");
    }
    else
    {
        for (int i = front; i <=rear; i++)
        {
            printf("%d\n",q[i]);
        }
    }
}

int main(){
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue(); 
    traverse();
    return 0;
}