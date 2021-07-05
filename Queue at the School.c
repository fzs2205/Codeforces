#include<stdio.h>
int main()
{
    int n,t,i,j,temp,len;
    char str[51];
    scanf("%d %d",&n,&t);
    scanf("%s",str);
    len=strlen(str);
    for(j=1;j<=t;j++)
    {
        for(i=0;i<(len-1);i++)
        {
            if(str[i]=='B' && str[i+1]=='G')
            {
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
                i=i+1;
            }
            else
            {
                continue;
            }
        }
    }
    printf("%s",str);
}
