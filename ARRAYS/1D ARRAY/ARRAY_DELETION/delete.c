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

void deletion(int index,int size,int arr[],int capacity)
{
    if(index<capacity)
    {
        for (int i = index; i < size; i++)
        {
            printf("index:%d\n",i);
            arr[i]=arr[i+1];
        }
    }
}

int main(){
    int arr[100]={1,2,3,4,5};
    int element,size=5,index;
    system("cls");

    printf("which index do you want to delete: ");
    scanf("%d",&index);

    printf("array before deletion: ");
    display(arr,size);

    deletion(index,size,arr,100);
    size-=1;
    
    printf("array after deletion: ");
    display(arr,size);
    

    return 0;
}