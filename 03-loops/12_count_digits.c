#include <stdio.h>

int main() {
    long long n;
    int count = 0;

    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    if (n == 0) {
        count = 1;
    } 
    else {
      
        if (n < 0) {
            n = -n;
        }

        while (n != 0) {
            n = n / 10; 
            count++;  
        }
    }

    printf("Total digits: %d\n", count);

    return 0;
}
