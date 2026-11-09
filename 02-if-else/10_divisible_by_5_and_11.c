#include<stdio.h>

int main() {

    int num;
    
    printf("Enter a number:- ");
    
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num /5 == 0 && num / 11 == 0) {
        printf("%d is divisible by both 5 and 11\n", num);
    } else if (num / 5 == 0) {
        printf("%d is divisible by 5 but not by 11\n", num);
    } else if (num / 11 == 0) {
        printf("%d is divisible by 11 but not by 5\n", num);
    } else {
        printf("%d is not divisible by either 5 or 11\n", num);
    }
