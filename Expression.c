#include<stdio.h>
int main()
{
    int a,b,c,ans1,ans2,ans3,ans4;
    scanf("%d %d %d",&a,&b,&c);
    ans1=a*b*c;
    ans2=a*(b+c);
    ans3=(a+b)*c;
    ans4=a+b+c;
    if(ans1>=ans2 && ans1>=ans3 && ans1>=ans4)
    {
        printf("%d\n",ans1);
    }
    else if(ans2>=ans1 && ans2>=ans3  && ans2>=ans4)
    {
        printf("%d\n",ans2);
    }
    else if(ans3>=ans1 && ans3>=ans2 && ans3>=ans4)
    {
        printf("%d\n",ans3);
    }
    else
    {
        printf("%d\n",ans4);
    }
}
