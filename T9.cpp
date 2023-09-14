#include <iostream>
using namespace std;

// Define a class named "Shape" to represent different shapes
class Shape {
public:
    // Data members for storing dimensions
    float length;
    float breadth;

    // Constructor to initialize dimensions
    Shape(float len, float brd) : length(len), breadth(brd) {}

    // Function to calculate and return the area of a square
    float calculateSquareArea() {
        return length * length;
    }

    // Function to calculate and return the area of a triangle
    float calculateTriangleArea() {
        return 0.5 * length * breadth;
    }

    // Function to calculate and return the area of a rectangle
    float calculateRectangleArea() {
        return length * breadth;
    }
};

int main() {
    float side, base, height, length, width;

    // Input dimensions for the square
    cout << "Enter the side length of the square: ";
    cin >> side;

    // Create an object of the Shape class for the square
    Shape square(side, side);

    // Calculate and print the area of the square
    cout << "Area of the square: " << square.calculateSquareArea() << endl;

    // Input dimensions for the triangle
    cout << "Enter the base length of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Create an object of the Shape class for the triangle
    Shape triangle(base, height);

    // Calculate and print the area of the triangle
    cout << "Area of the triangle: " << triangle.calculateTriangleArea() << endl;

    // Input dimensions for the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Create an object of the Shape class for the rectangle
    Shape rectangle(length, width);

    // Calculate and print the area of the rectangle
    cout << "Area of the rectangle: " << rectangle.calculateRectangleArea() << endl;

    return 0;
}
