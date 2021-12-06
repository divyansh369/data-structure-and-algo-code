#include<stdio.h>
#include<stdlib.h>
// #include<limits.h>

int max(int a[],int n)
{
    int maxproduct=0,max_i,max_j;
    for (int i = 0; i <n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]*a[j]>maxproduct)
            {
                maxproduct=a[i]*a[j];
                max_i=i,max_j=j;
            }
        }
    }
    printf("(%d,%d)",a[max_i],a[max_j]);   
}

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // printf("%d",max(arr,10));
    // int max1=max(arr,10);
    // printf("%d",max1);
    max(arr,n);
    return 0;
}
