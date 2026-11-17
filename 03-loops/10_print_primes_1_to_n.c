#include <stdio.h>

int main() {
    int n, i, j, is_prime;

    printf("Enter N: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid input. Please enter a number greater than 1.\n");
        return 1;
    }

    printf("Prime numbers from 1 to %d are: ", n);

    for (i = 2; i <= n; i++) {
        is_prime = 1; 

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0; 
                break;       
            }
        }

        if (is_prime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
