//Write a program in C to perform addition, subtraction, multiplication, division by taking input from user.
#include<stdio.h>

int main(){
    // declare variables
    double a, b, w, x, y, z;
	
    // take input
    printf("Enter first number: ");
    scanf("%lf",&a);
    printf("Enter second number: ");
    scanf("%lf",&b);
	
    // compute operations
    w = a + b;
    x = a - b;
    y = a * b;
    z = a / b;
	
    // display result
    printf("Addition: %.2f\n", w);
    printf("Subtraction: %.2f\n", x);
    printf("Multiplication: %.2f\n", y);
    printf("Division: %.2f\n", z);
	
    return 0;
}








