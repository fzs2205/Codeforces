#include<stdio.h>
int main()
{
    int a,b,time,div,rem;
    scanf("%d %d",&a,&b);
    div=a/b;
    rem=a%b;
    time=a+div;
    while(div+rem>=b)
    {
        div=div+rem;
        rem=div%b;
        div=div/b;
        time=time+div;
    }
    printf("%d\n",time);
}
