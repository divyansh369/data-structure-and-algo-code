#include<stdio.h>
#include<stdlib.h>      // to use malloc we use the stdlib for malloc function

struct Node
{
    int data;               // contains the information
    struct Node * next;     // contains the address of the pointer
};


int main(){
    // initialize Node
    struct Node * head;
    struct Node * second;
    struct Node * third;

    // allocate the memory for Nodes in the heap
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));

    /* Three blocks have been allocated dynamically.
     We have pointers to these three blocks as head,
     second and third    
       head           second           third
        |                |               |
        |                |               |
    +---+-----+     +----+----+     +----+----+
    | #  | #  |     | #  | #  |     |  # |  # |
    +---+-----+     +----+----+     +----+----+
    */

    //link the first and second Nodes 
    head->data=7;
    head -> next=second;

    /* data has been assigned to the data part of the first
     block (block pointed by the head). And next
     pointer of first block points to second. 
     So they both are linked.
 
       head          second         third
        |              |              |
        |              |              |
    +---+---+     +----+----+     +-----+----+
    | 1  | o----->| #  | #  |     |  #  | #  |
    +---+---+     +----+----+     +-----+----+   
    */

    //link the seond and third Nodes 
    second->data=11;
    second-> next=third;

    /* data has been assigned to the data part of the second
     block (block pointed by second). And next
     pointer of the second block points to the third
     block. So all three blocks are linked.
   
       head         second         third
        |             |             |
        |             |             |
    +---+---+     +---+---+     +----+----+
    | 1  | o----->| 2 | o-----> |  # |  # |
    +---+---+     +---+---+     +----+---- 
    */
    
    //terminate the list at the third Node 
    head->data=66;
    head -> next=NULL;

     /* data has been assigned to data part of third
    block (block pointed by third). And next pointer
    of the third block is made NULL to indicate
    that the linked list is terminated here.
 
     We have the linked list ready. 
 
           head   
             |
             |
        +---+---+     +---+---+       +----+------+
        | 1  | o----->|  2  | o-----> |  3 | NULL |
        +---+---+     +---+---+       +----+------+      
    */

    return 0;
}