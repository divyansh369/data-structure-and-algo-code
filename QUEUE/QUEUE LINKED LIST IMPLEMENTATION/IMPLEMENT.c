#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;


int enqueue()
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d",&temp->info);

    if (temp==NULL)
    {
        printf("queue is full");
    }
    else if(front==NULL)
    {
        temp->next=NULL;
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}

int dequeue()
{
    struct node *temp;
    if (front==NULL)
    {
        printf("queue is empty");
    }
    else if(front ==rear)
    {
        temp=front;
        front=rear=NULL;
        free(temp);
    }
    else
    {
        temp=front;
        front=front->next;
        free(temp);
    }
}

int traverse()
{
    struct node *q=front;
    if (front==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        while (q!=rear)
        {
            printf("%d\n",q->info);
            q=q->next;
        }
        printf("%d\n",q->info);
        
    }
    
}

int main(){
    enqueue(); 
    enqueue(); 
    enqueue(); 
    dequeue(); 
    traverse();
    return 0;
}