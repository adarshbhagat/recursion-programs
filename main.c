#include <stdio.h>
#include <stdlib.h>
void fibo (int,int);
int n;
int main()
{
    int x,y;
    x=0;
    y=1;
    printf("enter the maximum value of fibonacci series\n");
    scanf("%d",&n);
    fibo(x,y);
}
void fibo (int x,int y)
{
    printf("%d",x);
    printf("\t%d\t",y);
    int temp1,temp2;
    if(x<n)
    {
        temp1=x+y;
        temp2=temp1+y;
        if(temp1>n)
        {
            return;
        }
        if(temp2>n)
        {
            printf("%d",temp1);
            return;
        }
        fibo(temp1,temp2);
    }
}
