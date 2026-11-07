#include <stdio.h>

int main(void)
{
    double length, width;

    printf("Enter the length of the rectangle: ");
    if (scanf("%lf", &length) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the width of the rectangle: ");
    if (scanf("%lf", &width) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Area of the rectangle = %.2f\n", length * width);
    return 0;
}
