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

struct node *delete_first(struct node * head)
{
    struct node *temp;

    if (head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
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
    start=delete_first(start);
    traverse(start);
    return 0;
}