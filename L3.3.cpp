#include <stdio.h>
#include <ctype.h>

int main() {
    char text[1000];
    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    int words = 0;
    int sentences = 0;
    int characters = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        characters++;

        if (isspace(text[i])) {
            words++;
        }

        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            sentences++;
        }
    }

    // Adjust word count by adding 1 for the last word
    if (characters > 0) {
        words++;
    }

    printf("Number of words: %d\n", words);
    printf("Number of sentences: %d\n", sentences);
    printf("Number of characters: %d\n", characters);

    return 0;
}

