// # Write a program to find the second largest of n numbers using an array

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n,large,second,a[20];
    system("cls");
    printf("enter the number you want: ");
    scanf("%d",&n);

    printf("enter the element: ");
    for (i = 0; i < n; i++)
    {   
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);        
        large=a[0];
    }

    for (i = 0; i <n; i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    second=a[1];
    for (i = 0; i <n; i++)
    {
        if (a[i]!=large)
        {
            if (a[i]>second)
            {
                second=a[i];
            }
            
        }
        
    }
    printf("the element are: ");
    for (i = 0; i < n; i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\nthe largest number is %d",large);
    printf("\nthe second largest number is %d",second);
    
    
    
    
    


    return 0;
}