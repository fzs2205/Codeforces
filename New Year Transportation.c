#include<stdio.h>
int ara[300010];
int main()
{
    int n,sum=0,i,t;
    scanf("%d %d",&n,&t);
    for(i=1;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=1;sum<=t;)
    {
        sum=i+ara[i];
        i=sum;
        if(sum==t)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}
