#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverse(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertatfirst(struct Node *head,int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    if (head==NULL)
    {
        temp->next=NULL;
        head=temp;
    }
    else
    {
        temp->data=data;
        temp->next=head;
    }
    return temp;

}

int main()
{
    int data;
    struct Node *start;
    struct Node *second;
    struct Node *third;

    start = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    
    printf("enter the data:\n");
    scanf("%d",&data);
    
    

    start->data = 11;
    start->next = second;

    second->data = 22;
    second->next = third;

    third->data = 33;
    third->next = NULL;

    traverse(start);
    printf("linked list after insertion in the beginning:\n");
    start = insertatfirst(start,data);
    traverse(start);
    return 0;
}