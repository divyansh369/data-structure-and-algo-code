#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node*next;
};

void traverse(struct node * head)
{
    struct node * q;
    if (head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        q=head;
        while (q->next!=head)
        {
            printf("%d\n",q->info);
            q=q->next;
        }
        printf("%d\n",q->info);
    }
}

struct node * insert_beg(struct node * head)
{
    struct node * temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d",&temp->info);

    if (head==NULL)
    {
        temp->next=temp;
        head=temp;
    }
    else
    {
        struct node *q=head;
        while (q->next!=head)
        {
            q=q->next;
        }
        q->next=temp;
        temp->next=head;
        head=temp;
    }
    return head;
}

int main(){
    struct node *start=(struct node*)malloc(sizeof(struct node ));
    struct node *second=(struct node*)malloc(sizeof(struct node ));
    struct node *third=(struct node*)malloc(sizeof(struct node ));
    
    start->info=7;
    start->next=second;

    second->info=12;
    second->next=third;

    third->info=32;
    third->next=start;
    printf("list before insertion\n");
    traverse(start);
    
    start=insert_beg(start);
    printf("list after insertion\n");
    traverse(start);
    

    return 0;
}
