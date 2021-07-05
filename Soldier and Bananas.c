#include<stdio.h>
int main()
{
    int i,k,n,w,sum=0,cp,bor;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        cp=k*i;
        sum=sum+cp;
    }
    if(sum>=n)
    {
    bor=sum-n;
    }
    else
    {
        bor=0;
    }
    printf("%d\n",bor);
}
