#include <stdio.h>

int main(void) {
    char character;

    printf("Enter a character: ");
    if (scanf(" %c", &character) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
        printf("%c is a vowel.\n", character);
    } else if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        printf("%c is a consonant.\n", character);
    } else {
        printf("%c is not an alphabetic character.\n", character);
    }

    return 0;
}
