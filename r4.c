#include <stdio.h>
int main()
{
   long long binary;
   int decimal=0,base=1,rem;
   
   printf("Enter a binary number:");
   scanf("%lld", &binary);
   
   while(binary>0)
   {
      rem = binary % 10;
      decimal = decimal + rem*base;
      binary=binary/10;
      base=base*2;
   }
   printf("decimal:%d\n",decimal);
   
   return 0;
   
}
