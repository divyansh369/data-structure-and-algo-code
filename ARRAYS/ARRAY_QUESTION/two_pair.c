#include<stdio.h>

int twopair(int arr[],int n,int target)
{
    for (int i = 0; i < n; i++)
    {   
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                continue;
            }
            if(arr[i]+arr[j]==target)
            {
                // printf("%d %d\n",arr[i],arr[j]);     //gives the number of index
                printf("%d %d\n",i,j);                  //gives the index of the target sum
            }
        }
    }
}

int main(){
    int arr[8]={1,2,3,2,3,4,5,6};
    int target=6;
    int pair=twopair(arr,8,target=6);
    return 0;
}