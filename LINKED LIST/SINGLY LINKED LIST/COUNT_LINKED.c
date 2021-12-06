#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node * next;
};

struct node * count(struct node * head)
{
    int count=0;
    struct node * q=head;
    if (head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        while (q!=NULL)
        {
            count++;
            q=q->next;
        }
        printf("%d",count);
    }    
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

    count(start);
    return 0;
}