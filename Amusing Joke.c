#include<stdio.h>
#include<string.h>
int main()
{
    char str1[202],str2[101],str3[101];
    int i,j,temp,len1,len3,k;
    int len=0;
    scanf("%s %s %s",str1,str2,str3);
    len3=strlen(str3);
    str3[len3]='\0';
    strcat(str1,str2);
    len1=strlen(str1);
    //printf("%d\n",len1);
    if(len3==len1)
    {
    for(j=0;j<(len1-1);j++)
    {
        for(k=j+1;k<len1;k++)
        {
            if(str1[j]>str1[k])
            {
                temp = str1[j];
                str1[j] = str1[k];
                str1[k] = temp;
            }
        }
    }
    for(j=0;j<(len3-1);j++)
    {
        for(k=j+1;k<len3;k++)
        {
            if(str3[j]>str3[k])
            {
                temp = str3[j];
                str3[j] = str3[k];
                str3[k] = temp;
            }
        }
    }
       //printf("%s\n%s\n",str1,str3);
    }
    else
    {
        printf("NO");
        return 0;
    }
    for(j=0;j<len1;j++)
    {
            if(str1[j]!=str3[j])
            {
                //printf("str1: %d %c str3: %d %c COUNT=%d\n",j,str1[j],k,str3[k],count);
                printf("NO\n");
                return 0;
            }
    }
    printf("YES\n");
}
