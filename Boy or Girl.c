#include<stdio.h>
#include<ctype.h>

int main()
{
    int n,count=0,i,j,temp;
    char str[101];
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<(n-1);i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(str[i]>str[j])
           {
               temp=str[i];
               str[i]=str[j];
               str[j]=temp;
           }
       }
    }
    for(i=0;i<(n-1);i++)
    {
        if(str[i]==str[i+1])
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    if((count+1)%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

}
