// # Write a program to find whether the array of integers contains a duplicate number.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n,flag,j,a[20];
    system("cls");
    printf("enter the number you want: ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {   
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);        
    }

    for (i = 0; i < n; i++)
    {
        for (j = i+1; j< n; j++)
        {
            if (a[i]==a[j] && i!=j)
            {
                flag=1;
                printf("\nduplicate no. found at index %d , %d",i,j);
            }
            
        }
        
    }
    if (flag==0)
    {
        printf("duplicate not found");
    }

    return 0;
}

