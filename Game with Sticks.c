#include<stdio.h>
int main()
{
    int n,m,temp;
    scanf("%d %d",&n,&m);
    if(n<=m)
    {
        temp=n;
    }
    else
    {
        temp=m;
    }
    if(temp%2==0)
    {
        printf("Malvika\n");
    }
    else
    {
        printf("Akshat\n");
    }
}
