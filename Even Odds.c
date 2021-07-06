#include<stdio.h>
int main()
{
    long long int n,k,div,num;
    scanf("%I64d %I64d",&n,&k);
    div=n/2;
    if(n%2==0)
    {
        if(k<=div)
        {
            num=k+(k-1);
        }
        else
        {
            num=(k*2)-n;
        }
    }
    else
    {
        if(k<=(div+1))
        {
            num=k+(k-1);
        }
        else
        {
            num=(k*2)-(n+1);
        }
    }
    printf("%I64d\n",num);
}
