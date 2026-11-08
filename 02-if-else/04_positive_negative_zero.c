#include <stdio.h>

int main()
{

    int number;

    printf("Enter a number: ");

    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
