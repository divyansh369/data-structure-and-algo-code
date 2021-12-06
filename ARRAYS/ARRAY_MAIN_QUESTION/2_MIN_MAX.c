#include<stdio.h>
#include<stdlib.h>

int main(){
    int max,min;
    int a[6]={4,58,58,12,32,58};
    max=a[0];
    min=a[0];
    for (int i = 0; i < 6; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    for (int i = 0; i <6; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    printf("min: %d, max: %d",min,max);        
    
    
    return 0;
}