#include <stdio.h>

int main(void)
{
    double radius;
    const double pi = 3.141592653589793;

    printf("Enter the radius of the circle: ");
    if (scanf("%lf", &radius) != 1 || radius < 0) {
        printf("Enter a valid non-negative radius.\n");
        return 1;
    }

    printf("Area of the circle = %.2f\n", pi * radius * radius);
    return 0;
}
