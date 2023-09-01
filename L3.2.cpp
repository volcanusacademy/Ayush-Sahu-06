#include <stdio.h>

#define ROWS_A 2
#define COLS_A 3
#define ROWS_B 3
#define COLS_B 2

int main() {
    int matrixA[ROWS_A][COLS_A] = {{1, 2, 3},
                                   {4, 5, 6}};
    int matrixB[ROWS_B][COLS_B] = {{7, 8},
                                   {9, 10},
                                   {11, 12}};
    int resultMatrix[ROWS_A][COLS_B];
    int transposedMatrixA[COLS_A][ROWS_A];

    printf("Matrix A:\n");
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_A; j++) {
            printf("%d\t", matrixA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < ROWS_B; i++) {
        for (int j = 0; j < COLS_B; j++) {
            printf("%d\t", matrixB[i][j]);
        }
        printf("\n");
    }

    // Matrix Multiplication
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < COLS_A; k++) {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("\nResult of Matrix Multiplication (A * B):\n");
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }

    // Transpose Matrix A
    for (int i = 0; i < COLS_A; i++) {
        for (int j = 0; j < ROWS_A; j++) {
            transposedMatrixA[i][j] = matrixA[j][i];
        }
    }

    printf("\nTransposed Matrix A:\n");
    for (int i = 0; i < COLS_A; i++) {
        for (int j = 0; j < ROWS_A; j++) {
            printf("%d\t", transposedMatrixA[i][j]);
        }
        printf("\n");
    }

    return 0;
}

