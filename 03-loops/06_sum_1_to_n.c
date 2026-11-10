#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter N: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
