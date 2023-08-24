#include <stdio.h>

int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    if (character >= '0' && character <= '9') {
        character = '*';
        printf("The character is a digit. Replaced by '*': '%c'\n", character);
    } else {
        printf("The character is not a digit.\n");
    }

    return 0;
}
