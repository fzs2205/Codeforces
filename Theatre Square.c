#include<stdio.h>
int main()
{
    long long int n,m,a,x,y,z;
    scanf("%I64d %I64d %I64d",&n,&m,&a);
        x=n/a;
        if(n%a!=0)
        {
            x=x+1;
        }
        y=m/a;
        if(m%a!=0)
        {
            y=y+1;
        }
        z=x*y;
        printf("%I64d\n",z);
        return 0;
}
