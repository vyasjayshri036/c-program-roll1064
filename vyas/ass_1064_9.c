//9.compute factorial of a number

#include <stdio.h>
 int main()
 {
    int n, i;
    long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
     {
        printf("Factorial of negative number is not possible.");
     }
    else
    {
        for(i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
      printf("Factorial of %d = %ld", n, fact);
    }

    return 0;
}
