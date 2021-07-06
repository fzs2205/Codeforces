#include<stdio.h>
int main()
{
    int n,m,a,b,div=0,totalcost=0,x=0;
    double y;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    y=b/m;
    if(a>y)
    {
        div=n/m;
        n=n%m;
        if(b>n*a)
        {
            x=n*a;
        }
        else
        {
            x=b;
        }
        totalcost=div*b+x;
    }
    else
    {
        totalcost=n*a;
    }
    printf("%d\n",totalcost);
}
