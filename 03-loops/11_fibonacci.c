#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    // Input N
    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    // N terms tak loop chalega
    for (i = 1; i <= n; i++) {
        printf("%d ", first); // Current term print karo

        // Agla term nikaalo
        next = first + second;
        
        // Values ko ek step aage shift karo
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
