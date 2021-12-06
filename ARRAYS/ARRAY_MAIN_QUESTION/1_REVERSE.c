// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int a[]={1, 2, 3, 4, 5, 6};
//     int n=sizeof(a)/sizeof(a[0]);
//     int c[n],start=0;

//     for (int i = n-1; i >= 0; i--)
//     {
//         c[start]=a[i];
//         start++;
//     }   
    
//     printf("\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("\t%d",c[i]);
//     }

//     return 0;
// }

// METHOD 2

#include<stdio.h>

void reverseArray(int arr[],int start,int end)
{
    int temp;
    if(start>=end)
        return;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverseArray(arr,start+1,end-1);
}

void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
 
  printf("\n");
}

int main()
{
    int a[]={1, 2, 3, 4, 5, 6};
    int n=sizeof(a)/sizeof(a[0]);

    printArray(a,n);
    printf("reverse array is:\n");
    reverseArray(a,0,6);
    printArray(a,n);

    return 0;
}