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

struct node *delete_last(struct node * head)
{
    struct node *q;

    if (head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        q=head;
        while (q->next->next!=NULL)
        {
            q=q->next;
        }
        free(q->next);
        q->next=NULL;
    }
    return head;
}

int main(){
    struct node *start;
    struct node *second;
    struct node *third;

    // allocate the memory for nodes in the heap
    start = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    

    //link the first and second nodes
    start->info = 7;
    start->next = second;

    //link the seond and third nodes
    second->info = 11;
    second->next=third;

    //terminate the list at the third node
    third->info = 66;
    third->next = NULL;

    printf("linked list before deletion:\n");
    traverse(start);
    
    printf("linked list after deletion:\n");
    start=delete_last(start);
    traverse(start);
    return 0;
}