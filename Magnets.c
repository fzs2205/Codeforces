#include<stdio.h>
int main()
{
    int n,i,arr[100000],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(n==1)
        {
            count=1;
            printf("%d\n",count);
            return 0;
        }
        if(i>0)
        {
            if(arr[i-1]%10==arr[i]/10)
            {
                count++;
            }
        }
    }
    printf("%d\n",count+1);
}
