#include<stdio.h>
int logic(int num);
int main()
{
    int year,d=0;
    scanf("%d",&year);
    while(d!=1)
    {
        year++;
        d=logic(year);
    }
    printf("%d\n",year);

}

int logic(int num)
{
    int rem,digit[4],i=0,j,k,d=1;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        digit[i]=rem;
        i++;
    }
    for(j=0;j<(i-1);j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(digit[j]==digit[k])
            {
                d=0;
                break;
            }
        }
    }
    return d;
}
