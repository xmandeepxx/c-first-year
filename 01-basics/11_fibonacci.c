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

    for (i = 1; i <= n; i++) {
        printf("%d ", first); // Current number print karo

        // Agla number nikaalo
        next = first + second;
        
        // Values ko aage shift karo
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
