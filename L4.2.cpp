#include <stdio.h>

struct Complex {
    double real;
    double imag;
};

int main() {
    struct Complex num1, num2, sum;

    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%lf %lf", &num1.real, &num1.imag);

    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%lf %lf", &num2.real, &num2.imag);

    // Adding complex numbers
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    // Displaying the sum
    printf("Sum: %.2lf + %.2lfi\n", sum.real, sum.imag);

    return 0;
}

