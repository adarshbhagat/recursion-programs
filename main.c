#include <stdio.h>
int fact (int);
int main()
{
    int n,ans;
    printf("enter the no. for finding factorial\n");
    scanf("%d",&n);
    ans=fact(n);
    printf("the value of factorial is %d",ans);
}

int fact (int n)
{
    if(n==1)
    return(1);
    else
       return(n=n*fact(n-1));
}
