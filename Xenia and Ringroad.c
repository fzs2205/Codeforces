#include<stdio.h>
int main()
{
    long long int a=1,b=0,i,m,n,t=0,work[100001],time=0;
    scanf("%I64d %I64d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%I64d",&work[i]);
        b=work[i];
        if(a<=b)
        {
            t=b-a;
        }
        else
        {
            t=n-a+b;
        }
        time=time+t;
        a=b;
    }
    printf("%I64d\n",time);

}
