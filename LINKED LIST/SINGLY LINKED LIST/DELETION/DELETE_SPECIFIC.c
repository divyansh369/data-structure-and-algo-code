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

struct node * delete_specific(struct node * head)
{
    struct node * temp;
    struct node * q=head;
    int x;
    printf("enter the node you want to delete: ");
    scanf("%d",&x);

    while (q->next!=NULL)
    {
        if (q->next->info==x)
        {
            temp=q->next;
            q->next=temp->next;
            free(temp);
        }
        q=q->next;
    }
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

    printf("linked list \n");
    traverse(start);
    
    start=delete_specific(start);
    traverse(start);
    return 0;
}