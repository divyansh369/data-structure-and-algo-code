#include<stdio.h>

int find_num(int a[],int n,int target)
{
    for (int i = 0; i <n; i++)
    {
        if (a[i]==target)
        {
            return i;
        }
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int target;
    int find=find_num(arr,6,target=5);    
    printf("%d",find);
    return 0;
}