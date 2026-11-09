#include<stdio.h>

int main () {

    float attendance;

    printf("Enter your attendance percentage: ");
    if (scanf("%f", &attendance) != 1) {
        printf("Invalid input for attendance percentage.\n");
        return 1;
    }

    if (attendance <0 || attendance > 100) {
        printf("Attendance percentage must be between 0 and 100.\n");
        return 1;
    }

     else if (attendance >= 75) {
        printf("You are allowed to sit in the exam.\n");
    } else {
        printf("You are not allowed to sit in the exam.\n");
    }   


}
