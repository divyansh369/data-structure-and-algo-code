#include <stdio.h>
#include <stdlib.h> // to use malloc we use the stdlib for malloc function

struct node
{
    int data;          // contains the information
    struct node *next; // contains the address of the pointer
};

void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *start;
    struct node *second;
    struct node *third;

    // allocate the memory for nodes in the heap
    start = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    //link the first and second nodes
    start->data = 7;
    start->next = second;

    //link the seond and third nodes
    second->data = 11;
    second->next=third;

    //terminate the list at the third node
    third->data = 66;
    third->next = NULL;

    traverse(start);

    return 0;
}