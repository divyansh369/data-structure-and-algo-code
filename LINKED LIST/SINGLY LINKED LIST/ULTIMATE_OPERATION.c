#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node * next;
};


struct node * insert_beg(struct node * head)
{
    struct node * temp=(struct node*)malloc(sizeof(struct node*));
    int data;
    printf("enter the data: ");
    scanf("%d",&data);

    if (head==NULL)
    {
        head->next=NULL;
        head=temp;
    }
    else
    {
        
    }
    

}

int main(){
    
    return 0;
}