#include<stdio.h>
int main()
{
    int n,k,arr[50],i,j,count=0;
    scanf("%d  %d",&n,&k);
    for(i=0;i<=(n-1);i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<=(n-1);j++)
    {
        if(arr[j]>=arr[k-1])
        {
            if(arr[j]==0)
            {
                count = count + 0;
            }
            else
            {
                count = count + 1;
            }
        }

        else
            break;
    }
    printf("%d\n",count);
    return 0;
}
