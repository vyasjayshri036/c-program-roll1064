//add two matrices
#include<stdio.h>
int main()
{
   int rows,cols;
   printf("Enter number of rows and columns: ");
   scanf("%d %d", &rows,&cols);
   
   int a[10][10], b[10][10], sum[10][10];
   
   printf("Enter elements of first matrix: \n");
   for(int i=0;i<rows;i++)
   {
      for(int j=0;j<cols;j++)
      {
        scanf("%d",&a[i][j]);
      }
   }
   
   printf("Enter elements of second matrix: \n");
    for(int i=0;i<rows;i++)
   {
      for(int j=0;j<cols;j++)
      {
        scanf("%d",&b[i][j]);
      }
   }
   
   for(int i=0;i<rows;i++)
   {
     for(int j=0;j<cols;j++)
     {
         sum[i][j] = a[i][j] + b[i][j];
     }
   }
   
   printf("\n RESULT OF MATRIX(sum):\n");
   for(int i=0;i<rows;i++)
   {
     for(int j=0;j<cols;j++)
     {
        printf("%d\t", sum[i][j]);
     }
       printf("\n");
   }
    return 0;
}
