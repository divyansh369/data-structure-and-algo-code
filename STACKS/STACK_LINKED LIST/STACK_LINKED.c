#include<stdio.h>
#include<stdlib.h>


struct node
{
    int info;
    struct node * next;
};
struct node * top=NULL;

void push()
{
    struct node * temp=(struct node*)malloc(sizeof(struct node));
    if (temp==NULL)
    {
        printf("memory is full");
    }
    else
    {
        printf("enter the value: ");
        scanf("%d",&temp->info);
        temp->next=top;
        top=temp;
    }
}

void pop()
{

    if (top==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        struct node* q=top;
        top=top->next;
        printf("value deleted is %d\n",q->info);
        free(q);
    }
}

void traverse()
{
    if (top==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        struct node* q=top;
        while (q!=NULL)
        {
            printf("element is : %d\n",q->info);    
            q=q->next;
        }
    }
}

// void peek()
// {

// }

int main(){
    push();
    traverse();
    return 0;
}