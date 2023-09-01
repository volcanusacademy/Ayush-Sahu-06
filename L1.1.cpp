//1.Create a program in C to print a pyramid of prime numbers
#include <stdio.h>

int Prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int rows, num = 2;
    
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);
    
    printf("Pyramid of Prime Numbers:\n");
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            while (!Prime(num)) {
                num++;
            }
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
} 
