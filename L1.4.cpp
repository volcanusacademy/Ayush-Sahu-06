
//4. C Program to Print the first letter of each word. Given a string, we have 
//to find the first letter of each word.
#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[100];
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    printf("First letters of each word: ");
    
    // Print the first letter of the first word if it exists
    if (isalpha(sentence[0])) {
        putchar(sentence[0]);
    }
    
    // Iterate through the string to find and print first letters of each word
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isspace(sentence[i]) && isalpha(sentence[i + 1])) {
            putchar(sentence[i + 1]);
        }
    }
    
    printf("\n");
    
    return 0;
}
