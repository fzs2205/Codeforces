#include<stdio.h>
int main()
{
    int n,x[101],y[101],z[101],sumx=0,sumy=0,sumz=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
    }
    for(i=0;i<n;i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumz=sumz+z[i];
    }
    if(sumx==0 && sumy==0 && sumz==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
