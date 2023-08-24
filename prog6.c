#include <stdio.h>

int main() {
  
    printf("Enter a character: ");
    char character;
    scanf("%c", &character);

    int ascii = (int)character;

    
    if (ascii== 36) { 
        printf("Entered character is '$'\n");
    } else if (ascii == 64) { 
        printf("Entered character is '@'\n");
    } else {
        printf("Entered character is neither '$' nor '@'\n");
    }

    return 0;
}
