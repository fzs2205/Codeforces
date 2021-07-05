#include<stdio.h>
int main()
{
    char str[4];
    int n,i,X=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf(" %s",str);
        if(str[1]=='+')
            X++;
        else
            X--;
    }
    printf("%d\n",X);
   return 0;
}
