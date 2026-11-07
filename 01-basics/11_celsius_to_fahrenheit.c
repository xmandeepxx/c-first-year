#include <stdio.h>

int main(void)
{
    double celsius;

    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &celsius) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("%.2f Celsius = %.2f Fahrenheit\n",
           celsius, (celsius * 9.0 / 5.0) + 32.0);
    return 0;
}
