//3.C Program to Display Armstrong Number Between Two Intervals
#include <stdio.h>
#include <math.h>

int main() {
    int n1,n2;
    
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &n1, &n2);
    
    printf("Armstrong numbers between %d and %d:\n", n1,n2);
    
    for (int num = n1; num <=n2; num++) {
        int originalNum = num;
        int sum = 0, digits = 0;
        
        // Count the number of digits
        int temp = num;
        while (temp > 0) {
            temp = temp/10;
            digits++;
        }
        
        // Calculate the sum of the digits raised to the power of digits
        temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            sum = pow(digit, digits)+sum;
            temp = temp/10;
        }
        
        if (sum == originalNum) {
            printf("%d\n", originalNum);
        }
    }
    
    return 0;
}





