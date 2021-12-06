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

struct node * insert_last(struct node * head)
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
    }
    return head;
}

struct node* insert_specific(struct node * head)
{
    int x;
    struct node * temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d",&temp->info);
    printf("after which element do you want to insert: ");
    scanf("%d",&x);

    if (head==NULL)
    {
        temp->next=temp;
        head=temp;
    }
    else
    {
        struct node * q=head;
        while (q->info!=x)
        {
            q=q->next;
        }
        temp->next=q->next;
        q->next=temp;
        
    }
    return head;
}

struct node * delete_beg(struct node * head)
{
    struct node * temp=head;
    if (head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        struct node * q=head;
        while (q->next!=head)
        {
            q=q->next;
        }
        head=head->next;
        q->next=head;
        free(temp);
    }
    return head;
}

struct node * delete_end(struct node * head)
{
    if (head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        struct node * q=head;
        while (q->next->next!=head)
        {
            q=q->next;
        }
        // struct node * temp=q->next;
        // q->next=head;
        // free(temp);
        free(q->next);
        q->next=head;
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
    
    start=insert_last(start);
    printf("list after insertion\n");
    traverse(start);

    start=delete_end(start);
    printf("delete the end node\n");
    traverse(start);
    

    return 0;
}
