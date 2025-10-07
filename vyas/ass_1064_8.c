//Check whether a number is palindrome
#include<stdio.h>
int main()
{
    int num, reversed = 0, remainder, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; 
    for (; num != 0; num = num / 10) 
{
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }

   
    if (original == reversed)
{
        printf("%d is a palindrome number.\n", original);
}
    else
{
        printf("%d is not a palindrome number.\n", original);
}

    return 0;
}


