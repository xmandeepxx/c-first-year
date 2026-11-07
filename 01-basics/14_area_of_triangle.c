#include <stdio.h>

int main(void)
{
    double base, height;

    printf("Enter the base of the triangle: ");
    if (scanf("%lf", &base) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the height of the triangle: ");
    if (scanf("%lf", &height) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Area of the triangle = %.2f\n", base * height / 2.0);
    return 0;
}
