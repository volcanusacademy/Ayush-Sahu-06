//T16Create a program in c to calculate the volume of cuboid by taking input from user 
//in actual parameter then pass it to the function in formal parameter and generate the result
#include <stdio.h>

// Function to calculate the volume of a cuboid
double calculateCuboidVolume(double length, double width, double height) {
    return length * width * height;
}

int main() {
    double length, width, height;

    // Input the dimensions from the user
    printf("Enter the length of the cuboid: ");
    scanf("%lf", &length);

    printf("Enter the width of the cuboid: ");
    scanf("%lf", &width);

    printf("Enter the height of the cuboid: ");
    scanf("%lf", &height);

    // Call the function to calculate the volume
    double volume = calculateCuboidVolume(length, width, height);

    // Display the result
    printf("The volume of the cuboid is: %.2lf\n", volume);

    return 0;
}
