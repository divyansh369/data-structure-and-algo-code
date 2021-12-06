#include<stdio.h>
#include<stdlib.h>

void swap(int a[],int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        int j=0;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}

void change(int a[],int n)
{   
    int i=0,j=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<0)
        {
            if (i!=j)
            {
                
            }
            
        }
        
    }
    
}

int main(){
    int a[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n=sizeof(a)/sizeof(a[0]);
    int min=0,start=0;
    int c[n];

    for (int i = 0; i <n; i++)
    {
        /* code */
    }
    

    return 0;
}