#include<stdio.h>
int main()
{
    int s,n,i,j,temp1=0,temp2=0;
    scanf("%d %d",&s,&n);
    int x[n],y[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                temp1=x[i];
                x[i]=x[j];
                x[j]=temp1;
                temp2=y[i];
                y[i]=y[j];
                y[j]=temp2;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(s<=x[i])
        {
            printf("NO\n");
            return 0;
        }
        else
        {
            s=s+y[i];
        }
    }
    printf("YES\n");
    return 0;
}
