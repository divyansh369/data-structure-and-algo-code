#include<stdio.h>
#include<stdlib.h>

int main(){
    char expression[50];
    int x,i=0;
    printf("\nenter expression: ");
    scanf("%s",&expression);

    while (expression[i]!='\0')
    {
        if (expression[i]='(')
        {
            x++;
        }
        else if(expression[i]==')')
        {
            x--;
            if(x<0)
            break;
        }
        i++;
    }
    if (x==0)
    {
        printf("valid expression");
    }
    else
    {
        printf("invalid expression");
    }
    return 0;
}