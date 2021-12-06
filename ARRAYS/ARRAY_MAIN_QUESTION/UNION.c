#include<stdio.h>
#include<stdlib.h>

void Union(int a[],int b[],int n,int m)
{   
    int j=0,i=0;
    while (i<m && j<n)
    {
        if (a[i]<b[j])
        {
            printf("%d ",a[i++]);
        }
        else if (a[i]>b[j])
        {
            printf("%d ",b[j++]);
        }
        
        else
        {
            printf("%d ",b[j++]);
            i++;
        }
    }
    while (i<m)
    {
        printf("%d ",a[i++]);
    }
    
    while (i<n)
    {
        printf("%d",a[j++]);
    }
    
    
}

int main(){
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
    
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    
    Union(arr1, arr2, n, m);    
    
    return 0;
}