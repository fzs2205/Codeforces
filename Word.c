#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int len=0,big=0,small=0,i;
    char word[101];
    scanf("%s",word);
    len=strlen(word);
    for(i=0;i<len;i++)
    {
        if(word[i]>='A' && word[i]<='Z')
        {
            big++;
        }
        else
        {
            small++;
        }
    }
    if(big>small)
    {
        for(i=0;i<len;i++)
        {
            putchar(toupper(word[i]));
        }
    }
    else
    {
        for(i=0;i<len;i++)
        {
            putchar(tolower(word[i]));
        }
    }
}
