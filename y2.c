#include<stdio.h>
int main ()
{
    char str[6];
    printf("ENTER A STRING: ");
    scanf("%s",str);
    int i,vowels=0,len=0;
    
    for(i=0;i<=6;i++)
    {
        printf(" str [%d]= %c\n",i,str[i]);
        if(str[i]!='\0')
        {
            len++;
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            {
               vowels++;
            }
            
        }
          printf("\nENTERED A STRING:%s",str);
          printf("\nLENGTH OF STRING:%d",len);
          printf("\nNUMBER OF VOWELS:%d",vowels);
          
    }
 
  return 0;
}
