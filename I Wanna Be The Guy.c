#include<stdio.h>
int n,t=2,x,A[101],a;
int main()
{
    scanf("%d",&n);
    while(t--)
    {
        scanf("%d",&a);
        while(a--)
        {
            scanf("%d",&x);
            A[x]++;
        }
    }
    for(a=1;a<=n;a++)
    {
        if(A[a]==0)
        {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }
    printf("I become the guy.\n");
    return 0;
}
