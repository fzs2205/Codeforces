#include<stdio.h>
int main()
{
    int n,i,length;
    char str[100];
    char word;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",str);
        length=strlen(str);
        if(length<=10)
        {
            printf("%s\n",str);
        }
        else
        {
            printf("%c%d%c\n",str[0],length-2,str[length-1]);
        }
    }
    return 0;
}
