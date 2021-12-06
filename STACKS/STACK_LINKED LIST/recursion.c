#include<stdio.h>
#include<stdlib.h>

int b(int n)
{
    if (n<=1)
    {
        return 0;
    }
    else
    {
        printf("%d",n-2);
        a(n-2);
        a(n-1);
    }
}

int a(int n)
{
    if(n<=1)
    {
        return 0;
    }
    else{
        b(n-1);
        printf("%d",n);
        b(n-2);
    }
}

int main(){
    b(6);
    return 0;
}