#include<stdio.h>
int main()
{
    long long int num,count=0;
    long long int rem;
    scanf("%I64d",&num);
    while(num!=0)
    {
        rem=num%10;
        if(rem==4)
        {
            count++;
        }
        else if(rem==7)
        {
            count++;
        }
        else
        {
            count=count;
        }
        num=num/10;
        //printf("%lld %lld %lld\n",rem,num,count);
    }
    //printf("%lld",count);
    if(count==4 || count==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
