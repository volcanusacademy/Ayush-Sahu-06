#include <stdio.h>

int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    if (character >= 'A' && character <= 'Z') {
        // Convert uppercase to lowercase by adding 32 (ASCII difference between 'A' and 'a')
        char converted_character = character + 32;
        printf("The character '%c' is in uppercase. Converted to lowercase: '%c'\n", character, converted_character);
    } else {
        printf("The character '%c' is not in uppercase.\n", character);
    }

    return 0;
}
