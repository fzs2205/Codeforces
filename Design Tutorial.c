#include<stdio.h>
int main()
{
    int n,even=8,odd=9,x;
    scanf("%d",&n);
    if(n%2==0)
    {
        x=n-even;
        printf("%d %d\n",even,x);
    }
    else
    {
        x=n-odd;
        printf("%d %d\n",odd,x);
    }
}
