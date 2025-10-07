#include<stdio.h>
int main()
{
    int no,i;
    printf("enter number:");
    scanf(" %d",&no);
    for(i=0;i<=10;i=i+2)
    {
    if(no%2==0)
    {
      printf("\n%d is even number ",no);
     
    }
    else
    { 
      printf("\n%d is odd number",no);
    
    }
       printf("%d\n",no);
    }
    
    return 0;
}
