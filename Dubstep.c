#include<stdio.h>
#include<ctype.h>
int main()
{
    int len,i,count=0;
    char music[201];
    scanf("%s",music);
    len=strlen(music);
    for(i=0;i<len;i++)
    {
        if(music[i]=='W' && music[i+1]=='U' && music[i+2]=='B')
        {
        count++;
        if(count>1)
        {
            i=i+2;
            continue;
        }
        if(i!=0)
        {
            printf(" ");
        }
            i=i+2;
        }
        else
        {
            printf("%c",music[i]);
            count=0;
        }
    }
}
