#include <stdio.h>

int main(void)
{
    char character;

    printf("Enter a character: ");
    if (scanf(" %c", &character) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("You entered: %c\n", character);
    return 0;
}
