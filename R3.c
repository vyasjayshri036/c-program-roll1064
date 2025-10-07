#include <stdio.h>
int main()
{
   int n,remainder,binary[35],i=0,r;
   printf("ENTER A HEXADECIMAL NUMBER:");
   scanf("%d",&n);
   
   if (n==0)
   {
      printf("decimal number:0");
   }
     for(i=0;n>0;i++)
     {  
        remainder =n%16;
        binary[i]=remainder;
        n=n/16;
     }
       printf("decimal NUMBER:");
       for(r=i-1;r>=0;r--)
       {
         printf("%d",binary[r]);
       }
     
   return 0;
}

