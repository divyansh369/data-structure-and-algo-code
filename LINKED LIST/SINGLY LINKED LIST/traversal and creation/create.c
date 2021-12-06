#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node*next;
};

void traverse(struct node *ptr)
{
    while (ptr!=NULL)
    {
        printf("Element: %d\n",ptr->info);
        ptr=ptr->next;
    }
    
}

struct node * create(struct node*head)
{
    int num;
    struct node * temp=(struct node*)malloc(sizeof(struct node));

    printf("enter the temp info: ");
    scanf("%d",&temp->info);
    temp->next=NULL;
    head=temp;

    while (num!=-1)
    {
        struct node * temp1=(struct node*)malloc(sizeof(struct node));
        printf("enter the temp1 data: ");
        scanf("%d",&temp1->info);

        temp->next=temp1;
        temp=temp1;

        printf("do you want to create more list: ");
        scanf("%d",&num);
    }
    temp->next=NULL;    
    
    return head;
}

int main(){
    struct node *start=(struct node*)malloc(sizeof(struct node ));
    struct node *second=(struct node*)malloc(sizeof(struct node ));
    struct node *third=(struct node*)malloc(sizeof(struct node ));

    start=create(start);
    create(start);    
    traverse(start);

    return 0;
}
