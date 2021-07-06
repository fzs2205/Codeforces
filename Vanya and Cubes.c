#include<stdio.h>
int main()
{
    int n,i=1,sum=0,height=0,total=0;
    scanf("%d",&n);
    while(total<=n)
    {
       sum=sum+i;
       height++;
       total=total+sum;
       i++;
    }
    printf("%d\n",height-1);
}
