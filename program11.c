#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Please enter a valid 4-digit number.\n");
        return 1;
    }

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    while (sum > 9) {
        int temp = sum;
        sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
    }

    printf("Sum of individual digits: %d\n", sum);

    return 0;
}
