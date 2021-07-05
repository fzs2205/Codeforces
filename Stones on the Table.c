#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,count=0,j;
    char str[50];
    scanf("%d",&n);
    scanf("%s",str);
    for(j=0;j<(n-1);j++)
    {
        if(str[j]==str[j+1])
        {
            count = count+1;
        }
        else
        {
            count = count;
        }
    }
    printf("%d\n",count);
}
