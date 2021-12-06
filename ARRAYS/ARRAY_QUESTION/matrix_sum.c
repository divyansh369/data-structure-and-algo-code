#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={10,11,12,13,14,15,16,17,18};
    int sum[3][3];
    int n=sizeof(a)/sizeof(a[0]);

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j <n; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("\t%d",sum[i][j]);    
        }
    }

    return 0;
}