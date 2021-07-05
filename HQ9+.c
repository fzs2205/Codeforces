#include<stdio.h>
int main()
{
    int i,count=0;
    char p[101];
    scanf("%s",p);
    for(i=0;i<strlen(p);i++)
    {
        if(p[i]=='H'||p[i]=='Q'||p[i]=='9')
        {
            count=1;
        }
    }
    if(count==1)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
