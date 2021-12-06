#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[6]={1,2,3,43,45,90};
    int n=sizeof(a)/sizeof(a[0]);
    int max=a[0];
    system("cls");

    for (int i = 0; i <n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    printf("max element is: %d",max);
    



    return 0;
}