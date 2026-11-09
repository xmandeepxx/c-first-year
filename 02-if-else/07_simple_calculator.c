#include<stdio.h>

int main () {

    double num1;
    double num2;
    char operation;

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input for first number.\n");
        return 1;
    }

    printf("Enter an operation (+, -, *, /): ");
    if (scanf(" %c", &operation) != 1) {
        printf("Invalid input for operation.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input for second number.\n");
        return 1;
    }

    if (operation == '+') {
        printf("Result = %.2f\n", num1 + num2);
    } else if (operation == '-') {
        printf("Result = %.2f\n", num1 - num2);
    } else if (operation == '*') {
        printf("Result = %.2f\n", num1 * num2);
    } else if (operation == '/') {
        if (num2 == 0) {
            printf("Error: Cannot divide by zero.\n");
        } else {
            printf("Result = %.2f\n", num1 / num2);
        }
    } else {
        printf("Invalid operation.\n");
    }

    return 0;
}
