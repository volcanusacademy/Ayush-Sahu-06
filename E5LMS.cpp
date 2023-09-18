//5)Design a C++ class Car with private attributes for make, model, and year. Create public methods to set and get these attributes.
#include<iostream>
using namespace std;


class Car
{
	string make;
	string model;
	int year;
	public:
void setmake(string m)
{
	make=m;
}
void setmodel(string ml)
{
	model=ml;
}
void setyear(int y)
{
	year=y;
}
string getmake()
{
	return make;
}
string getmodel()
{
	return model;
}
int getyear()
{
	return year;
}
 }; 
 int main()
 {
 	Car c;
 	c.setmake("Hyundai");
 	c.setmodel("Sedan");
 	c.setyear(2011);
cout<<c.getmodel()<<endl;
cout<<c.getmake()<<endl;
cout<<c.getyear()<<endl;
 	
 	return 0;
 }