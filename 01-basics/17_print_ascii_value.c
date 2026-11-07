#include <stdio.h>

int main(void)
{
    char character;

    printf("Enter a character: ");
    if (scanf(" %c", &character) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("ASCII value of '%c' = %d\n",
           character, (unsigned char)character);
    return 0;
}
