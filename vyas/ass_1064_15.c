#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, smallest;

    // Input four numbers
    printf("ENTER FOUR NUMBERS: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Using if-else if to find the smallest
    if(num1 <= num2 && num1 <= num3 && num1 <= num4)
    {
        smallest = num1;
    }
    else if(num2 <= num1 && num2 <= num3 && num2 <= num4)
    {
        smallest = num2;
    }
    else if(num3 <= num1 && num3 <= num2 && num3 <= num4)
    {
        smallest = num3;
    }
    else
    {
        smallest = num4;
    }

    printf("The smallest number is: %d\n", smallest);

    return 0;
}

