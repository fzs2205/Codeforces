#include<stdio.h>
#include<string.h>
char str[200];
int ara[200];
int main()
{
    int n,i;
    scanf("%d",&n);
    scanf("%s",&str);
    for(i=0;i<n;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=tolower(str[i]);
        }
        ara[str[i]]++;
    }
    for(i=97;i<=122;i++)
    {
        if(ara[i]==0)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
