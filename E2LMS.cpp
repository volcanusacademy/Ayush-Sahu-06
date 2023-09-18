//2)Design a C++ class Rectangle with private attributes length and width. 
//Provide public methods to set and get these attributes, and calculate the area of the rectangle.

#include<iostream>
#include<string>
using namespace std;
class Rectangle
{
   	int Length,width;

public:
void setLength(int l)
{
	Length=l;
}
int getLength()
{
	return Length;
}

void setwidth(int b)
{
	width=b;
}
int getwidth()
{
	return width;
}


};
int main()
{
	Rectangle r;
	r.setLength(33);
	cout<<r.getLength()<<endl;
	r.setwidth(33);
	cout<<r.getwidth()<<endl;
	cout<<"Area of the Rectangle="<<r.getLength()*r.getwidth();
	
	return 0;
}