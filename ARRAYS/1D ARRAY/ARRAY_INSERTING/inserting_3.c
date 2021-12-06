#include<stdio.h>
#include<stdlib.h>

int display(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    
}

int main(){
    int arr[100]={1,2,4,5,6};
    int num,n=5;
    printf("enter the element to be inserted: ");
    scanf("%d",&num);

    for (int i = n-1; i < n; i--)
    {
        if (arr[i]>num)
        {
            for (int j = n-1; j>=i; j--)
            {
                arr[j+1]=arr[j];
                arr[i]=num;
                break;
            }
            n+=1;
        }
    }

    printf("the array after insertion is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
    // display(arr,n);

    return 0;
}