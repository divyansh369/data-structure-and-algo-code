#include<stdio.h>

int main(){
    int arr[2][2]={12,34,43,54};
    
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        for (int j = 0; j < 2; j++)
        {
            printf("\t%d",arr[i][j]);
         }
    }
    

    return 0;
}