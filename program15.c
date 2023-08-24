#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    if (number >= 10000 && number <= 99999) {
        int digit_sum = 0;
        int temp = number;

        while (temp > 0) {
            int digit = temp % 10;
            digit_sum += digit;
            temp /= 10;
        }

        printf("Sum of individual digits: %d\n", digit_sum);
    } else {
        printf("Please enter a valid five-digit number.\n");
    }

    return 0;
}
