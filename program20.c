#include <stdio.h>

int main() {
    int num, originalNum, reverseNum = 0, remainder;

    printf("Enter a 6-digit number: ");
    scanf("%d", &num);

    originalNum = num;

    // Reverse the number
    while (num > 0) {
        remainder = num % 10;
        reverseNum = reverseNum * 10 + remainder;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (originalNum == reverseNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
