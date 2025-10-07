#include<stdio.h>
int main()
{
   char str[100];
   printf("\n ENTER STRING:");
   fgets(str,sizeof(str),stdin);
   int i,vowels=0;
   for(i=0;str[i]!='\0';i++)
   {  
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            {
               vowels++;
            }
            
       printf("\n %c",str[i]);
   }
        printf("\n enter string:%s",str);
        printf("\n number of vowels is:%d",vowels);
return 0;
}
