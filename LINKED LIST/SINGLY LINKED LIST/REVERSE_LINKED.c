#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node * next;
};

void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->info);
        ptr = ptr->next;
    }
}

struct node * reverse(struct node * head)
{
    struct node * c,*p=head,*n;
    c=p->next;
    p->next=NULL;

    while (c!=NULL)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
    return head;
}

int main(){
    struct node *start;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // allocate the memory for nodes in the heap
    start = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    

    //link the first and second nodes
    start->info = 7;
    start->next = second;

    //link the seond and third nodes
    second->info = 11;
    second->next=third;

    //terminate the list at the third node
    third->info = 66;
    third->next = fourth;

    fourth->info = 100;
    fourth->next = NULL;

    // printf("linked list before:\n");
    // traverse(start);


    printf("linked list reverse:\n");
    start=reverse(start);
    traverse(start);
    return 0;
}