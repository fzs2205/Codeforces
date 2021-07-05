#include<stdio.h>
int main()
{
    int n,i,a[102],b[102],j,k;
    a[0]=0;
    b[0]=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        j=a[i];
        //printf("j=%d",j);
        b[j]=i;
        //printf("b[j]=%d",b[j]);
    }
    for(k=1;k<=n;k++)
    {
        printf("%d ",b[k]);
    }
    printf("\n");
}
