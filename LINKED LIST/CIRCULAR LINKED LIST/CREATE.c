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

    traverse(start);

    return 0;
}
