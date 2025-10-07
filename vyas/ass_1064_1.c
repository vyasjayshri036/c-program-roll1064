// 1.revers word in a string
#include <stdio.h>
#include<string.h>
int main()
{
  char str[20];
  printf("ENTER A STRING:-");
  fgets(str,sizeof(str),stdin);
  int i,len=strlen(str);
   
  printf("REVERSE STRING:-");
  for(i=len-1;i>=0;i--)
  {
     printf("%c",str[i]);
  }
  
   
   return 0;
}
