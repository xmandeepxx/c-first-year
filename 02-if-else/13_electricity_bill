#include <stdio.h>

int main(void) {
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    if (scanf("%d", &units) != 1) {
        printf("Invalid input for units consumed.\n");
        return 1;
    }

    if (units <= 100) {
        bill = units * 7;
    } else {
        bill = units * 8.50;
    }

    printf("Bill: %.2f\n", bill);

    return 0;
}
