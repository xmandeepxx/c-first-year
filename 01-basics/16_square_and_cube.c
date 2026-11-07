#include <stdio.h>

int main(void)
{
    double number;

    printf("Enter a number: ");
    if (scanf("%lf", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Square of %.2f = %.2f\n", number, number * number);
    printf("Cube of %.2f = %.2f\n", number, number * number * number);
    return 0;
}
