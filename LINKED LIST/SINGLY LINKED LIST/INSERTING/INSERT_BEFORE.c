#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->info);
        ptr = ptr->next;
    }
}

struct node * insert_before(struct node *head)
{   
    int x;
    struct node * temp=(struct node*)malloc(sizeof(struct node));
    struct node *q=head;

    printf("enter the info: ");
    scanf("%d",&temp->info);

    printf("enter the node before you want to insert: ");
    scanf("%d",&x);

    while (q->next->info!=x)
    {
        q=q->next;
    }
    temp->next=q->next;
    q->next=temp;
    
}

int main(){
    struct node *start;
    struct node *second;
    struct node *third;
    struct node *temp;

    // allocate the memory for nodes in the heap
    start = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    temp = (struct node *)malloc(sizeof(struct node));

    

    //link the first and second nodes
    start->info = 7;
    start->next = second;

    //link the seond and third nodes
    second->info = 11;
    second->next=third;

    //terminate the list at the third node
    third->info = 66;
    third->next = NULL;


    insert_before(start);
    traverse(start);
    return 0;
}
