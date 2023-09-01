#include <stdio.h>
#include <string.h>

int main() {
    // Predefined username and password
    char correctUsername[] = "username";
    char correctPassword[] = "password";

    char enteredUsername[50];
    char enteredPassword[50];

    printf("Welcome to the Basic Login System!\n");

    do {
        printf("Enter your username: ");
        scanf("%s", enteredUsername);

        printf("Enter your password: ");
        scanf("%s", enteredPassword);

        if (strcmp(enteredUsername, correctUsername) == 0 && strcmp(enteredPassword, correctPassword) == 0) {
            printf("Login successful! Welcome, %s!\n", enteredUsername);
            break;
        } else {
            printf("Invalid credentials. Please try again.\n");
        }
    } while (1);

    return 0;
}

