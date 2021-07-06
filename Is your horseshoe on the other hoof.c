#include<stdio.h>
int main()
{
    int arr[4],i,j,k,count;
    for(i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    count=0;
    for(j=0;j<3;j++)
    {
        for(k=j+1;k<4;k++)
        {
            if(arr[j]==arr[k])
            {
                count=count+1;
                break;
            }
        }
    }
    printf("%d\n",count);
}
