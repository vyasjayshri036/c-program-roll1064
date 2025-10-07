//11.print the first N natural numbers
#include <stdio.h>

int main() {
    int N, i;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("The first %d natural numbers are:\n", N);

    for(i = 1; i <= N; i++) {
        printf("%d ", i);
    }

    return 0;
}


