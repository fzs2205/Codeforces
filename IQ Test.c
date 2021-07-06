#include<stdio.h>
int main()
{
    int n,i,arr[101],o=0,e=0,even=0,odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            even++;
            e=i+1;
        }
        else
        {
            odd++;
            o=i+1;
        }
    }
    if(even==1)
    {
        printf("%d\n",e);
    }
    else
    {
        printf("%d\n",o);
    }
}
