#include<stdio.h>
#include<stdlib.h>
# define N 5

int t1=-1;
int t2=N;
int s1[N];

int push_forward()
{
    if (t1==N-1)
    {
        printf("overflow\n");
    }
    else
    {
        int val;
        printf("enteer the data forward: ");
        scanf("%d",&val);
        t1=t1+1;
        s1[t1]=val;
    }
}

int push_back()
{
    if (t2==N-1)
    {
        printf("underflow\n");
    }
    else
    {
        int val1;
        printf("enter the data backward: ");
        scanf("%d",&val1);
        t2=t2-1;
        s1[t2]=val1;
    }
}

int display()
{
    for (int i = t1; i>=0 ; i--)
    {
        printf("%d",s1[i]);
    }
    for (int j = t2; j>=0; j--)
    {
        printf("%d",s1[j]);
    }
    
}

int main(){
    push_forward();
    push_back();
    push_forward();
    push_back();
    push_forward();
    push_back();
    display();
    return 0;
}