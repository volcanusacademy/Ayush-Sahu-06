#include <stdio.h>

int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    if (character >= 'a' && character <= 'z') {
        // Convert lowercase to uppercase by subtracting 32 (ASCII difference between 'a' and 'A')
        char converted_character = character - 32;
        printf("The character '%c' is in lowercase. Converted to uppercase: '%c'\n", character, converted_character);
    } else {
        printf("The character '%c' is not in lowercase.\n", character);
    }

    return 0;
}
