/*3. Shape Inheritance:Create a base class Shape with properties like color and methods 
like getArea(). Create subclasses (e.g., Circle, Rectangle, Triangle) that inherit from Shape and implement the getArea() method differently
 for each shape. Demonstrate how to calculate the area of various shapes using inheritance.*/
 #include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Shape {

    public:
    void getArea ()
    {
        cout<<"Area==";
    }
};

class Circle : public Shape{
    public:
    void Acircle(float r)
    {
        cout<<3.14159*r*r<<endl;
    }
};

class Rectangle : public Shape {
public:
    void Arectangle(int l,int b)
    {
        cout<<l*b<<endl;
    }
};

class Triangle : public Shape {
    public:
    void Atriangle(float h,float b) {
        cout<<0.5*b* h<<endl;
    }
};

int main() {
    
Triangle t;
Rectangle r;
Circle c;
Shape s;
s.getArea();
t.Atriangle(3.f,5.f);
s.getArea();
r.Arectangle(33,33);
s.getArea();
c.Acircle(33);
    return 0;
}
