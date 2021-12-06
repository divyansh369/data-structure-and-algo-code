#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int n)
{
    // code for traversal 
    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[],int size,int element,int capacity,int index)
{
    // code for inserting
    
    if (size>=capacity)     // what if size is more than the capacity i.e. 
    {
        return -1;
    }
    for (int i = size-1; i >=index ; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 0;
    
}

int main(){
    int arr[100]={7, 8, 12, 27, 88};
    int size=5,element=45,index=3;
    system("cls");

    printf("array before insertion: \n");
    display(arr,size);

    indInsertion(arr,size,element,100,index);
    size+=1;
    printf("array after insertion: \n");
    display(arr,size);


    return 0;
}