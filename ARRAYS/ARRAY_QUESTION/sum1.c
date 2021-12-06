#include<stdio.h>

int getmissing(int a[],int n)
{
    int total=((n+1)*(n+2))/2;
    for (int i = 0; i < n; i++)
    {
        total-=a[i];
    }
    return total;
}

int main(){
    int n,sum;
    int a[5]={1,2,4,5,6};
    int miss=getmissing(a,5);
    printf("%d",miss);

    return 0;
}