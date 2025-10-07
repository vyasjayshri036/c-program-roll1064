#include<stdio.h>
int main()
{
   char str[15];
   printf("\nENTER SATRING:");
   fgets(str,sizeof(str),stdin);
   int i,len=0;
   for(i=0;i<15;i++)
   {
     printf("str[%d]=%c\n",i,str[i]);
     if(str[i]!='\0')
     {
        len++;
     }
   }
   for(i=len;i>=0;i--)
   {
      printf("%c",str[i]);
   }
   printf("\n len of str is %d",len);
   
   return 0;
}
