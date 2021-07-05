#include<stdio.h>
int main()
{
    int a,n,i,four=0,three=0,two=0,one=0,remone,t2,rem=0,rem2=0,t,taxi;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==4)
        {
            four++;
        }
        else if(a==3)
        {
            three++;
        }
        else if(a==2)
        {
            two++;
        }
        else
        {
           one++;
        }
    }
    //printf("%d %d %d %d\n",four,three,two,one);
    if(one>=three)
    {
        remone=one-three;
    }
    else
    {
        remone=0;
    }
    t2=two/2;
    if(two%2!=0)
    {
        rem2=2;
    }
    //printf("%d\n",t2);
    rem=remone+rem2;
    //printf("%d\n",rem);
    if(rem==0)
    {
        t=0;
    }
    else if(rem<=4)
    {
        t=1;
    }
    else
    {
        t=rem/4;
        if(rem%4!=0)
        {
            t=t+1;
        }
        else
        {
            t=t;
        }
    }
    //printf("%d\n",t);
    taxi=four+three+t2+t;
    printf("%d\n",taxi);
}
