#include <stdio.h>

int main() {
    int n = 4;  // Change this value to adjust the size of the matrix
    int matrix[n][n];
    int num = 1;
    int startRow = 0, endRow = n - 1;
    int startCol = 0, endCol = n - 1;

    while (num <= n * n) {
        // Print top row
        for (int i = startCol; i <= endCol; i++) {
            matrix[startRow][i] = num++;
        }
        startRow++;

        // Print right column
        for (int i = startRow; i <= endRow; i++) {
            matrix[i][endCol] = num++;
        }
        endCol--;

        // Print bottom row
        if (startRow <= endRow) {
            for (int i = endCol; i >= startCol; i--) {
                matrix[endRow][i] = num++;
            }
            endRow--;
        }

        // Print left column
        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; i--) {
                matrix[i][startCol] = num++;
            }
            startCol++;
        }
    }

    // Print the generated spiral matrix
    printf("Spiral Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

