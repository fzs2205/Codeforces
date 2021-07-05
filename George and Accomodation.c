#include<stdio.h>
int main()
{
    int n,i,p,q,dif,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&p,&q);
        dif=q-p;
        if(dif>=2)
        {
            count++;
        }
        else
        {
            count=count;
        }
    }
    printf("%d",count);
}
