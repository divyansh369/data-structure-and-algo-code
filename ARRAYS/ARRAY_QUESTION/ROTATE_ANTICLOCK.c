#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);

    printf("the original matrix : ");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("\t %d",a[i][j]);
        }
    }

    printf("\nanticlockwise matrix is: ");
    for (int i = 2; i >=0; i--)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("\t %d",a[j][i]);
        }
    }

    return 0;
}