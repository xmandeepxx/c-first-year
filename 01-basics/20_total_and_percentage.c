#include <stdio.h>

int main(void)
{
    double mark1, mark2, mark3, mark4, mark5;
    double total, percentage;

    printf("Enter marks for five subjects (each out of 100): ");
    if (scanf("%lf %lf %lf %lf %lf",
              &mark1, &mark2, &mark3, &mark4, &mark5) != 5) {
        printf("Invalid input.\n");
        return 1;
    }

    total = mark1 + mark2 + mark3 + mark4 + mark5;
    percentage = total / 500.0 * 100.0;

    printf("Total marks = %.2f / 500\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}
