#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[6]={0,1,0,2,1};

    int c0=0,c1=0,c2=0;
    for (int i = 0; i < 6; i++)
    {
        if (a[i]==0)
        {
            c0+=1;
        }
        if (a[i]==1)
        {
            c1+=1;
        }
        if (a[i]==2)
        {
            c2+=1;
        }
    }
    int i=0;
    while (c0)
    {
        a[i]=0;
        i++;
        c0-=1;
    }
    while (c1)
    {
        a[i]=1;
        i++;
        c1-=1;
    }
    while (c2)
    {
        a[i]=2;
        i++;
        c2-=1;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d  ",a[i]);    
    }
    
    

    return 0;
}