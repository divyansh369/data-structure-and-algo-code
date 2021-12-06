#include<stdio.h>
#include<stdlib.h>

int display(int arr[],int size){
    for (int i = 0; i <size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[100]={1,2,3,4,5};
    int i,n=5,index=3,element=33;
    system("cls");


    display(arr,n);
    for (int i = n-1; i >=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    n+=1;
    display(arr,n);
    return 0;
}