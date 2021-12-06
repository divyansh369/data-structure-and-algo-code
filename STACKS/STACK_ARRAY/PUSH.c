#include<stdio.h>
#include<stdlib.h>
# define N 3

int top=-1;
int stack[N];


* isfull()
{
    if (top==N-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

* push()
{
    int x;
    if (!isfull())
    {
        printf("enter data: ");
        scanf("%d",&x);
        top=top+1;
        stack[top]=x;
    }
    else
    {
        printf("overflow");
    }
}

* pop()
{
    if (top==-1)
    {
        printf("underflow");
    }
    else
    {
        int item=stack[top];
        top--;
        printf("element deleted is %d\n",item);
    }
    
}

* peek()
{
    if (top==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("%d",stack[top]);
    }
} 

* display()
{
    for (int i = top; i>=0; i--)
    {
        printf("%d",stack[i]);
    }
}

int main(){
    int ch;
    while (1)
    {   
        printf("\n\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        printf("enter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("wrong choice!!!");
        }
    }
    
    return 0;
}