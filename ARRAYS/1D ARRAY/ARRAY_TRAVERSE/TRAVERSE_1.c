// # Write a program to read and display n numbers using an array.

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int i,n,a[20];
    system("cls");
    printf("enter the number of element in array\n");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("the element are:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d",a[i]);
    }
    
    

    return 0;
}