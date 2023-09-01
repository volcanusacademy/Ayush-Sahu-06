//2. create a program that prints a pyramid pattern with numbers and corresponding characters:
#include <stdio.h>

int main() {
    int rows;
    
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);
    
    printf("Pyramid Pattern:\n");
    
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        
        // Print numbers in ascending order
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        // Print character
        printf("%c ", 'A' + i - 1);
        
        // Print numbers in descending order
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        
        printf("\n");
    }
    
    return 0;
}
