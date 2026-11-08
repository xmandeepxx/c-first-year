#include<stdio.h>

int main() {

    int first_number;
    int second_number;
    int third_number;

    printf("Enter the first number: ");
    if (scanf("%d", & first_number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%d", & second_number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter the third number: ");
    if (scanf("%d", & third_number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if  (first_number>second_number && first_number>third_number) {
        printf("%d is largest number between %d and %d\n", first_number, second_number, third_number);
        }    
        
        else if (second_number>first_number && second_number>third_number) {
        printf("%d is largest number between %d and %d\n", second_number, first_number, third_number);
        }
    
        else if (third_number>first_number && third_number>second_number) {
        printf("%d is largest number between %d and %d\n", third_number, first_number, second_number);
    
    }
}    
