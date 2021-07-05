#include<stdio.h>
int main()
{
    int n,m,pp[1001],j,k,temp,x,i,ans,arr[100]={};
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&pp[i]);
    }
    for(j=0;j<(m-1);j++)
    {
        for(k=j+1;k<m;k++)
        {
            if(pp[j]>pp[k])
            {
                temp = pp[j];
                pp[j] = pp[k];
                pp[k] = temp;
            }
        }
    }
    for(i=0;i<=(m-n);i++)
    {
        arr[i]=(pp[i+(n-1)]-pp[i]);
    }
    for(i=0;i<=((m-n)-1);i++)
    {
        for(j=i+1;j<=(m-n);j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }
    printf("%d\n",arr[0]);
}
