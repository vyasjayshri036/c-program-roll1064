#include <stdio.h>
int main()
{
   int num,i=0;
   char hex[32];
   printf("ENTER A DECIMAL NUMBER:");
   scanf("%d",&num);
   
   if(num==0)
      {
      printf("  HEXADECIMAL:0\n");
      
      }
       
      while(num>0)
      {
        int rem=num%16;
        if(rem < 10)
         
           hex[i]=rem+'0';
         
         else
         
             hex[i]=rem-10+'A';
             num=num/16;
             i++;
         
          printf("HEXADECIMAL:");
          }
          for(int j=i-1;j>=0;j--)
          {
             printf("%c",hex[j]);
          }
          printf("\n");
      
   return 0;
}

