#include <stdio.h>

int main(void)
{
    double principal, rate, time, interest;

    printf("Enter principal amount: ");
    if (scanf("%lf", &principal) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter annual interest rate (percent): ");
    if (scanf("%lf", &rate) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter time in years: ");
    if (scanf("%lf", &time) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    interest = principal * rate * time / 100.0;
    printf("Simple interest = %.2f\n", interest);
    return 0;
}
