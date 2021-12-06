#include<stdio.h>
#include<stdlib.h>


struct node
{
    int info;
    struct node *next;
};
struct node *top=NULL;

int push()
{   
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    if (temp==NULL)
    {
        printf("list is empty");
    }
    else
    {
        printf("enter the data: ");
        scanf("%d",&temp->info);
        temp->next=top;
        top=temp;
    }
}

int pop()
{
    struct node *q=top;
    if (top==NULL)
    {
        printf("list is empty");
    }
    else
    {
        top=top->next;
        printf("element deleted is %d",q->info);
        free(q);
    }   
}

int display()
{   
    if (top==NULL)
    {
        printf("list is empty");
    }
    else
    {
        struct node *q=top;
        while (q!=NULL)
        {
            printf("%d",q->info);
            q=q->next;
        }
    }
    
}


int main(){
    push();
    // pop();
    display();
    return 0;
}