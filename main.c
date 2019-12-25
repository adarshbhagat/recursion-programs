#include <stdio.h>
#include <stdlib.h>
void T_O_I(int n,char beg,char aux,char end)
{
    if(n>0)
    {
        T_O_I(n-1,beg,end,aux);
        printf("%c to %c\n",beg,end);
        T_O_I(n-1,aux,beg,end);
    }
}
int main()
{
    int n;
    printf("enter the no. of disk\n");
    scanf("%d",&n);
    T_O_I(n,'a','b','c');
}
