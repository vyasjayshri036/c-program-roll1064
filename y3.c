#include <stdio.h>
int main()
{
    int i,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+2)
    {
        printf(" \n %d",i);
    }
    return 0;
}
