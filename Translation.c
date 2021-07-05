#include<stdio.h>
#include<ctype.h>
int main()
{
    char str1[101],str2[101],n,len,flag=1,i;
    scanf("%s %s",str1,str2);
    len=strlen(str1);
    n=len-1;
    for(i=0;i<len;i++)
    {
        if(str2[i]!=str1[n-i])
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

}
