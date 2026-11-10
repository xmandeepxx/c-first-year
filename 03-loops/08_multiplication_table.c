#include<stdio.h>

int main() {
    int num, i;

    printf("Enter a number for the table: ");

    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n",num, i, num * i);
    }

    return 0;
}
