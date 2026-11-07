#include <stdio.h>

int main(void)
{
    int dividend, divisor;

    printf("Enter the dividend: ");
    if (scanf("%d", &dividend) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the divisor: ");
    if (scanf("%d", &divisor) != 1 || divisor == 0) {
        printf("Enter a valid non-zero divisor.\n");
        return 1;
    }

    printf("Quotient = %d\n", dividend / divisor);
    printf("Remainder = %d\n", dividend % divisor);
    return 0;
}
