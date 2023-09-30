//12.Print number series and stop when it finds multiple of 9 C ProgrammingLogical Manipulation
#include <stdio.h>

int main() {
    int i = 1; // Initialize the starting number

    while (1) {
        printf("%d ", i);

        // Check if the current number is a multiple of 9
        if (i % 9 == 0) {
            printf("\nFound a multiple of 9 (i.e., %d), stopping.\n", i);
            break; // Exit the loop when a multiple of 9 is found
        }

        i++; // Increment the number in the series
    }

    return 0;
}









