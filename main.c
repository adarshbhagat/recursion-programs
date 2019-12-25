#include <stdio.h>
#include <stdlib.h>
void GCD(int x,int i)
{
    if(x%i==0)
        printf("GCD :-%d\n",i);
    else
        GCD(x,i-1);
}
int main()
{
    GCD(33,32);
}
