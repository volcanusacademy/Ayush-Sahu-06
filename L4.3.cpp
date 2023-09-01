#include <stdio.h>

// Define union for different types of shapes
union Shape {
    float radius;      // Circle
    float side;        // Square
    struct {
        float length;
        float breadth;
    } rectangle;        // Rectangle
    struct {
        float height;
        float base;
    } triangle;         // Triangle
};

int main() {
    int choice;
    union Shape shape;

    printf("Select shape:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("4. Triangle\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius of circle: ");
            scanf("%f", &shape.radius);
            printf("Circle with radius %.2f\n", shape.radius);
            break;
        case 2:
            printf("Enter side length of square: ");
            scanf("%f", &shape.side);
            printf("Square with side %.2f\n", shape.side);
            break;
        case 3:
            printf("Enter length of rectangle: ");
            scanf("%f", &shape.rectangle.length);
            printf("Enter breadth of rectangle: ");
            scanf("%f", &shape.rectangle.breadth);
            printf("Rectangle with length %.2f and breadth %.2f\n", shape.rectangle.length, shape.rectangle.breadth);
            break;
        case 4:
            printf("Enter height of triangle: ");
            scanf("%f", &shape.triangle.height);
            printf("Enter base of triangle: ");
            scanf("%f", &shape.triangle.base);
            printf("Triangle with height %.2f and base %.2f\n", shape.triangle.height, shape.triangle.base);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
