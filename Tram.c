#include<stdio.h>
int main()
{
    int a[10000],b[10000],n,i,rem=0,x,temp,arr[10000],k,j,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        x = b[i]-a[i]+rem;
        temp = rem;
        rem = x;
        x = temp;
        arr[i-1] = x;
        //printf("%d",arr[i-1]);
    }
    for(k=0;k<(n-1);k++)
    {
    for(j=k+1;j<n;j++)
    {
        if(arr[k]>=arr[j])
        {
            temp = arr[k];
            arr[k] = arr[j];
            arr[j] = temp;
        }
    }
    }
        printf("%d ",arr[n-1]);

}
