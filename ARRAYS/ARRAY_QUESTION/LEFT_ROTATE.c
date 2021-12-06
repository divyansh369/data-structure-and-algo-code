#include <stdio.h>
#include <stdlib.h>

void display(int a[], int n)
{
    int i, j;
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int length = sizeof(a) / sizeof(a[0]);
    int n = 4;

    printf("Original array: \n");  
    for (int i = 0; i < length; i++) {   
        printf("%d ", a[i]);   
    }    

    for (int i = 0; i < n; i++)
    {
        int j, first;
        first = a[0];
        for (int j = 0; j < length - 1; j++)
        {
            a[j] = a[j + 1];
        }
        a[length-1] = first;
    }

    printf("\nArray after left rotation: \n");  
    for(int i = 0; i < length; i++){  
        printf("%d ", a[i]);  
    }  
    


    return 0;
}