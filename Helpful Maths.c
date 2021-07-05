#include<stdio.h>
int main()
{
    int i,j,k,temp,len;
    char inp[101];
    scanf("%s",inp);
    len=strlen(inp);
    for(i=0;i<len;i=i+2)
    {
        for(j=i+2;j<len;j=j+2)
        {
            if (inp[i]>inp[j])
            {
                temp=inp[i];
                inp[i]=inp[j];
                inp[j]=temp;
            }
        }
    }
    printf("%s\n",inp);
    return 0;
}
