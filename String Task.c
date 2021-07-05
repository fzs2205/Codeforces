#include<stdio.h>
#include<string.h>
int main()
{
    int length,i;
    char str[100],temp;
    scanf("%s",str);
    length = strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y')
        {
            printf("");
        }
        else if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y')
        {
            printf("");
        }
        else
        {
            if(isupper(str[i]))
            {
                temp = tolower(str[i]);
                printf(".%c",temp);
            }
            else
            {
                printf(".%c",str[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
