#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *prev,*next;
};
struct node *start=NULL;
struct node *last=NULL;

void create()
{
    char ch;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    struct node *temp1;
    printf("enter temp data:");
    scanf("%d",&temp->info);
    temp->prev=temp->next=NULL;
    start=last=temp;
    do
    {
        struct node *temp1=(struct node *)malloc(sizeof(struct node));
        printf("enter temp1 data:");
        scanf("%d",&temp1->info);
        last->next=temp1;
        temp1->prev=last;
        last=temp;
        printf("do you want to continue:");
        scanf("%c",&ch);
        scanf("%c",&ch);
    } while (ch=='y');
    last->next=NULL;
}

void traverse_forward()
{
    struct node *q=start;
    if(start==NULL)
    {
        printf("emptly list");
    }
    else
    {
        while (q!=NULL)
        {
            printf("%d\n",q->info);
            q=q->next;
        }
    }
}

void traverse_backward()
{
    struct node *q=last;
    if(last==NULL)
    {
        printf("empty list");
    }
    else
    {
        while (q!=NULL)
        {
            printf("%d",q->info);
            q=q->next;
        }
    }
}

void insert_beg()
{
    create();
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the element to insert:");
    scanf("%d",&temp->info);

    if (start==NULL)
    {
        temp->prev=temp->next=NULL;
        start=last=temp;
    }
    else{
        temp->prev=NULL;
        temp->next=start;
        start->prev=temp;
        start=temp;
    }
}



int main(){
    insert_beg();
    traverse_forward();
    traverse_backward();
    return 0;
}