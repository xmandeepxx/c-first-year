// Print the numbers from n down to 1.
#include <stdio.h>

int main(void)
{
    int num;
    int i;

    printf("Enter a positive number: ");

    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (num < 1)
    {
        printf("Please enter a number greater than 0.\n");
        return 1;
    }

    for (i = num; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
