#include<stdio.h>

void display(int arr[],int n)
{   
    printf("the array is:");
    for (int i = 0; i <n; i++)
    {
        printf("\t%d ",arr[i]);
    }
    
}

int find_small(int arr[],int n)
{       
    printf("\nthe smallest number is: ");
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int arr[6]={100,32,43,54,35,76},min1;
    display(arr,6);
    min1=find_small(arr,6);
    printf("%d",min1);
    return 0;
}

