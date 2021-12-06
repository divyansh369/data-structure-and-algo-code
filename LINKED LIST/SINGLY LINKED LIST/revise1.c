#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node*create(struct node * head)
{
    int num;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the temp data: ");
    scanf("%d",&temp->info);
    temp->next=NULL;
    head=temp;

    while (num!=0)
    {
        struct node*temp1=(struct node*)malloc(sizeof(struct node));
        printf("enter the temp1 info: ");
        scanf("%d",&temp1->info);

        temp->next=temp1;
        temp=temp1;

        printf("do you want to create more: ");
        scanf("%d",&num);
    }
    temp->next=NULL;
    return head;
}

struct node * traverse(struct node * head)
{
    struct node*q;
    if (head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        // do
        // {
        //     printf("%d",q->info);
        //     q=q->next;
        // } while (q->next!=NULL);
        while (q!=NULL)
        {
            printf("%d",q->info);
            q=q->next;
        }
        
    }
    return head;
}

int main(){
    struct node * start=(struct node*)malloc(sizeof(struct node));
    start=create(start);
    create(start);
    start=traverse(start);
    traverse(start);
    return 0;
}