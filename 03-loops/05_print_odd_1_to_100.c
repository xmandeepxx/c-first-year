#include <stdio.h>

int main() {
    int i;

    printf("Even numbers from 1 to 100:\n");

    // Tareeka 1: Har number pe check karo ki even hai ya nahi
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
