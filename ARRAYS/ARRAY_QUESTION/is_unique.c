#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[6]={1,2,3,2,3,5};
    int n=sizeof(a)/sizeof(a[0]);
    system("cls");

    printf("duplicate number are:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if (a[i]==a[j])
            {
                printf("%d\n",a[i]);
            }
        }
    }
    return 0;
}