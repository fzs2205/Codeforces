#include<stdio.h>
int main()
{
    int n,a[101],i,j,temp,sum=0,req;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    req=sum/2;
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum>req)
        {
            printf("%d\n",i+1);
            break;
        }
    }

}
