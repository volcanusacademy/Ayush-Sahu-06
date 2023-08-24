#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, interest;
    int choice;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    printf("Choose 1 for Compound Interest or 2 for Simple Interest: ");
    scanf("%d", &choice);

    if (choice == 1 && principal >= 500) {
        float compound_interest = principal * (pow((1 + rate / 100), time)) - principal;
        printf("Compound Interest: %.2f\n", compound_interest);
    } else if (choice == 2) {
        float simple_interest = (principal * rate * time) / 100;
        printf("Simple Interest: %.2f\n", simple_interest);
    } else {
        printf("Invalid choice or principal amount.\n");
    }

    return 0;
}
