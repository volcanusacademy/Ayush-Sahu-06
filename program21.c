#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, sum = 0, remainder, n = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculate the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }
    if (n != 3){
        return 1;
    }

    originalNum = num;

    // Calculate the sum of cubes of digits
    while (originalNum > 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
