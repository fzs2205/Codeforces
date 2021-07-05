#include<stdio.h>
int main()
{
    int i,j,flag=0,k;
    char str1[150],str2[150];
    scanf("%s %s",str1,str2);
    for(i=0;i<strlen(str1);i++)
    {
        str1[i] = tolower(str1[i]);
    }
    for(j=0;j<strlen(str2);j++)
    {
        str2[j] = tolower(str2[j]);
    }
    //printf("%s %s",str1,str2);
    if(strcmp(str1,str2)==0)
    {
        printf("0\n");
    }
    else{
    for(k=0;k<strlen(str1);k++)
    {
        if(str1[k]>str2[k])
        {
            printf("1\n");
            break;
        }
        else if (str1[k]<str2[k])
        {
            printf("-1\n");
            break;
        }
    }
    }

    return 0;
}
