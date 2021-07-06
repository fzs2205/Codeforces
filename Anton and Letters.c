#include <stdio.h>
#include <string.h>

int main ()
{
   char str[1001],i;
   int len,j,count=0;

   gets(str);
   len = strlen(str);

   for(i='a';i<='z';i++)
   {
       for(j=0;j<len;j++)
       {
           if(str[j]==i)
           {
               count++;
               break;
           }
       }
   }
   printf("%d\n",count);

   return(0);
}
