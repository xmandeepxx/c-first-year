#include<stdio.h>

int main ()
{

    int marks[5];
    int total = 0;
    float percentage;

    for(int i = 0; i < 5; i++)
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i] !=1);
        total += marks[i];
        printf("invalid input\n");
    }

    percentage = total / 5.0f;
    printf("percentage: %.2f\n", percentage);   

    if (percentage >= 90)
    {
        printf("Grade: A\n");
    }
    else if (percentage >= 80)
    {
        printf("Grade: B\n");
    }
    else if (percentage >= 70)
    {
        printf("Grade: C\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }
}
