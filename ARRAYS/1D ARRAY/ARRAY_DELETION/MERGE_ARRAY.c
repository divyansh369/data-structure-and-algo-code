#include<stdio.h>

int main(){
    int index=0,n1=5,n2=5;

    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};

    int m=n1+n2;
    int arr3[m];

    for (int i = 0; i < n1; i++)
    {
        arr3[index]=arr1[i];
        index++;
    }

    for (int i = 0; i < n2; i++)
    {
        arr3[index]=arr2[i];
        index++;
    }
    
    for (int i = 0; i < m; i++)
    {
        printf("%d\n",arr3[i]);
    }
    

    return 0;
}