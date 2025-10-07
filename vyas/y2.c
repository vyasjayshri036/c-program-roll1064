// 2. convert kilometers to miles
#include<stdio.h>
int main()
{
   int start,end;
   float miles;
   printf("ENTER STARTING KILOMETERS:-");
   scanf(" %d ",&start);
   printf("ENTER ENDING KILOMETERS:-");
   scanf(" %d ",&end);
   
   printf("\n KILOMETERS       MILES\n");
   printf("-------------------------\n");
   
   for (int km=start; km<=end; km++)
   {
      miles=km*0.621371;
      printf("%10d %10.2f\n",km,miles);
   }
   return 0;        
        }
