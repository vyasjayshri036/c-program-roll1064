/*w a p to conwart decimal to binary number stystem*/
#include <stdio.h>
int main()
{
   int n,remainder,binary[35],i=0,r;
   printf("ENTER A DECIMAL NUMBER:");
   scanf("%d",&n);
   
   if (n==0)
   {
      printf("octal number:0");
   }
     for(i=0;n>0;i++)
     {  
        remainder =n%8;
        binary[i]=remainder;
        n=n/8;
     }
       printf("octal NUMBER:");
       for(r=i-1;r>=0;r--)
       {
         printf("%d",binary[r]);
       }
     
   return 0;
}

