#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
};

void traverse(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *Insert_First(struct Node *start,int data)
{
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
    if (start==NULL)
    {
        temp->next=NULL;
        start=temp;
    }
    else
    {
        temp->data=data;
        temp->next=start;
    }
    return temp;

}

int main(){
    
    struct Node *start;
    struct Node *second;
    struct Node *third;

    start = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    start->data = 7;
    start->next =NULL;

    // link the seond and third Nodes
    second->data = 11;
    second->next=third;

    //terminate the list at the third Node
    third->data = 66;
    third->next = NULL;
    traverse(start);
    int head=Insert_First(start, 56);
    printf("after inserting at the beginning:\n");
    traverse(head);

    return 0;
}