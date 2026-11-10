
#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter an factorial number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        sum = sum * i;
    }

    printf("Factorial of %d is: \n", n, sum);

    return 0;
}
