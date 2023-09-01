#include <stdio.h>

int main() {
    char oper;
    double num1, num2;

    printf("Welcome to the Basic Calculator!\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &oper);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (oper) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Cannot divide by zero!\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

