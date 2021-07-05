#include<stdio.h>
int main()
{
    int a[100001],n,i,count=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        if(a[i+1]>=a[i])
        {
            count++;
        }
        else
        {
            max=(max<=count)? count:max;
            count=0;
        }
        max=(max<=count)? count:max;
    }
    printf("%d\n",max+1);
}
