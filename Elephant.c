#include<stdio.h>
int main()
{
    int x,i=5,c=0;
    scanf("%d",&x);
    while(x!=0)
    {
        if(x>5)
        {
            x=x-i;
            c++;
            continue;
        }
        else
        {
            c++;
            break;
        }
    }
    printf("%d\n",c);
}
