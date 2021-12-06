#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main(){
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    printf("%d\n",n);    
    int element,index=2;

    for (int i = index; i <n-1; i++)
    {
        a[i]=a[i+1];
    }

    n-=1;
    display(a,n);

    return 0;
}