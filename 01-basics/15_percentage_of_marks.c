#include <stdio.h>

int main(void)
{
    double marks_obtained, total_marks;

    printf("Enter marks obtained: ");
    if (scanf("%lf", &marks_obtained) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter total possible marks: ");
    if (scanf("%lf", &total_marks) != 1 || total_marks <= 0) {
        printf("Total possible marks must be greater than zero.\n");
        return 1;
    }

    printf("Percentage = %.2f%%\n", marks_obtained / total_marks * 100.0);
    return 0;
}
