#include<stdio.h>
int main()
{
    int w;
    scanf("%d",&w);
    if(w==2)
    {
        printf("No\n");
    }
    else if(w%2==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
