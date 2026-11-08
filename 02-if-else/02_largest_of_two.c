#include <stdio.h>

int main(void)
{

    int first_number;
    int second_number;

    printf("Enter the first number: ");
    if (scanf("%d", &first_number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%d", &second_number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (first_number > second_number) {
        printf("%d is greater than %d.\n", first_number, second_number);
    } else if (first_number < second_number) {
        printf("%d is greater than %d.\n", second_number, first_number);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
