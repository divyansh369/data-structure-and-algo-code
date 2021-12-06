#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}


int main(){
    int a[100]={1,2,3,6,45};
    // int n=sizeof(a)/sizeof(a[0]);
    int index=3,element=54,n=5;
    system("cls");

    for (int i = n-1; i >=index; i--)
    {
        a[i+1]=a[i]; 
    }

    a[index]=element;
    n+=1;
    display(a,n);

    return 0;
}