#include <stdio.h>

int main(void)
{
    double fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%lf", &fahrenheit) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("%.2f Fahrenheit = %.2f Celsius\n",
           fahrenheit, (fahrenheit - 32.0) * 5.0 / 9.0);
    return 0;
}
