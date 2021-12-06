#include<stdio.h>
#include<stdlib.h>
#define maxsize 5

int item,cq[maxsize],front=-1,rear=-1;
int enqueue()
{
    printf("enter the data: ");
    scanf("%d",&item);

    if (front==(rear+1)%maxsize)
    {
        printf("queue is full");
    }
    else if(front==-1)
    {
        front=rear=0;
        cq[rear]=item;
    }
    else
    {
        rear=(rear+1)%maxsize;
        cq[rear]=item;
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
        front=(front+1)%maxsize;
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
        for (int i = front; i; i++)
        {
            /* code */
        }
        
    }
    
}

int main(){

    return 0;
}