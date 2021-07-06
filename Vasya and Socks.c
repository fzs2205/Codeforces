#include<stdio.h>
int main()
{
    int m,n,days,i;
    scanf("%d %d",&n,&m);
    days=n+(n/m);
    if(days>=m)
    {
        for(i=n+1;i<=days;i++)
        {
            if(i%m==0)
            {
                days=days+1;
            }
        }
    }
    printf("%d\n",days);
    return 0;
}
