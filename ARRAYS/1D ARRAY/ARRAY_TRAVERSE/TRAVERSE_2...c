// # Write a program to find the mean of n numbers using arrays.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n,arr[20],sum=0;
    system("cls");
    printf("enter the number of element you want:");
    scanf("%d",&n);

    for (i = 0; i <n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum/n);
    
    

    return 0;
}