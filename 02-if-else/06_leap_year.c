#include <stdio.h>

int main(void) {
    int year;

    printf("Enter a year: ");

    if (scanf("%d", &year) != 1) {
        printf("\nInvalid input. Please enter a whole number.\n");
        return 1;
    }

    if (year <= 0) {
        printf("\nInvalid year. Please enter a year greater than 0.\n");
        return 1;
    }

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("  %d is a leap year.\n", year);
    } else {
        printf("  %d is not a leap year.\n", year);
    }
    
    return 0;
}
