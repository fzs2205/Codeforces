#include<stdio.h>
int main()
{
    int length,i,count=0,j;
    char str[150];
    int ch=str[0];
    scanf(" %s",str);
    length = strlen(str);

    for(i=0;i<length;i++)
    {
        if(ch!=str[i])
        {
            count=1;
            ch=str[i];
        }
        else{
            count++;
        }
        if(count==7)
        {
            break;
        }

    }
    if(count>=7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
