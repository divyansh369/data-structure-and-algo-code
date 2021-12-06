// # Write a program to print the position of the smallest number of n numbers using arrays.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,n,min,a[20],pos;
    system("cls");
    printf("enter the number of element in array\n");
    scanf("%d",&n);

    for (i = 0; i <n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        min=a[0];
        pos=0;
    }
    for (i = 0; i <n; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            pos=i;
        }
    }
    printf("the smallest number is : %d\n",min); 
    printf("position is: %d ",pos);
    
    

    return 0;
}