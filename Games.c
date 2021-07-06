#include<stdio.h>
int main()
{
    int n,h[31],g[31],i,count=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&h[i],&g[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==i)
            {
                continue;
            }
            else
            {
                if(h[i]==g[j])
                {
                    count++;
                }
            }
        }
    }
    printf("%d\n",count);
}
