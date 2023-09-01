
//Write a  C Program to generate Fibonacci Triangle.

#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int a = 0, b = 1, c;

    for (int i = 1; i <= rows; i++) {
        a = 0;
        b = 1;
        for (int j = 1; j <= i; j++) {
            printf("%d ", b);
            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");
    }

    return 0;
}
