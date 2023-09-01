#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    printf("Enter your password: ");
    scanf("%s", password);

    // Simple key generation by summing ASCII values of password characters
    int key = 0;
    for (int i = 0; i < strlen(password); i++) {
        key += password[i];
    }

    printf("Generated Key: %d\n", key);

    return 0;
}

