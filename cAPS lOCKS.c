#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,count=0;
    char arr[101],ch[101];
    scanf("%s",arr);
    for(i=0;i<strlen(arr);i++)
    {
        if(i==0)
        {
            if(isupper(arr[i]))
            {
                ch[i]=tolower(arr[i]);
                count++;
            }
            else{
                ch[i]=toupper(arr[i]);
                count++;
            }
        }
        else{
                if(isupper(arr[i]))
                {
                    ch[i]=tolower(arr[i]);
                    count++;
                }

        }
    }
    ch[i]='\0';
    if(count==strlen(arr))
    {
        printf("%s",ch);
    }
    else{
        printf("%s",arr);
    }
    printf("\n");

}
