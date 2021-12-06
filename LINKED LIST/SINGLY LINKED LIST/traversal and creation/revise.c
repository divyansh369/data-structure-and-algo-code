#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node*next;
};

int main(){
    int ch;
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    struct node *start;

    printf("enter node data: ");
    scanf("%d",&temp->info);

    temp->next=NULL;
    start=temp;

    do
    {
        struct node * temp1 = (struct node *)malloc(sizeof(struct node));
        printf("enter next node data: ");
        scanf("%d",&temp1->info);

        temp->next=temp1;
        temp=temp1;

        printf("do you want to insert more: ");
        scanf("%d",&ch);

    } while (ch==1);
    temp->next=NULL;
    

    return 0;
}