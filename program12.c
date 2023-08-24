#include <stdio.h>

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Please enter a valid 4-digit number.\n");
        return 1;
    }

    int smallest = 9;
    int greatest = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit < smallest) {
            smallest = digit;
        }
        if (digit > greatest) {
            greatest = digit;
        }
        num /= 10;
    }

    printf("Smallest digit: %d\n", smallest);
    printf("Greatest digit: %d\n", greatest);

    return 0;
}
