#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,count=0;
    char arr[1001],ch[1001];
    scanf("%s",arr);
    for(i=0;i<strlen(arr);i++)
    {
        if(i==0)
        {
            if(islower(arr[i]))
            {
                ch[i]=toupper(arr[i]);
            }
            else
            {
                ch[i]=arr[i];
            }
        }
        else
        {
            ch[i]=arr[i];
        }
    }
    ch[i]='\0';
    printf("%s\n",ch);
}
