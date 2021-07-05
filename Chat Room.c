#include<stdio.h>
int main()
{
    int i,j;
    char arr[101],chat[6]="hello";
    scanf("%s",arr);
    for(i=0,j=0;i<strlen(arr)&&j<5;i++)
    {
        if(arr[i]==chat[j])
            {
                j++;
            }
   }
    if(j==5)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}
