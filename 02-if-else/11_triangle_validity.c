#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter a number[1]: ");
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input for number 1.\n");
        return 1;
    }

    printf("Enter a number[2]: ");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input for number 2.\n");
        return 1;
    }

    printf("Enter a number[3]: ");
    if (scanf("%d", &num3) != 1) {
        printf("Invalid input for number 3.\n");
        return 1;
    }

    if (num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1) {
        printf("The numbers can form a triangle.\n");
    } else {
        printf("The numbers cannot form a triangle.\n");
    }

    return 0;
}
