/*2. Vehicle Inheritance:Implement a base class Vehicle with attributes like make,
 model, and year. Create subclasses (e.g., Car, Bicycle, Motorcycle)
 that inherit from Vehicle and add properties or methods specific to each type of vehicle.*/

#include<iostream>
#include<string>
using namespace std;
 class Vehicle{
 	public:
 	string make;
 	string model;
 	int year;
 	void info()
 	{
 	
 		
	 }
 };
 class Car:public Vehicle{
 	public:
 	 Car(string m,string ml,int y )
 	{
 	make=m;
 	model=ml;
 	year=y;
    cout<<" Car Name "<<make<<" Model "<<ml<<" Year "<<y<<endl;
    
	}

       	
 };
  class Bicycle:public Vehicle{
 	public:
 	Bicycle(string m,string ml,int y )
 	{
 	make=m;
 	model=ml;
 	year=y;
    cout<<" Bicycle Name "<<make<<" Model "<<ml<<"Year"<<y<<endl;
    
	}

       	
 };
  class Motorcycle:public Vehicle{
 	public:
 	 Motorcycle(string m,string ml,int y )
 	{
 	make=m;
 	model=ml;
 	year=y;
    cout<<" Motorcycle Name "<<make<<" Model "<<ml<<" Year "<<y<<endl;
    
	}

       	
 };
 int main()
 {
 	Motorcycle M("Raider","Sports",2);
    Bicycle b("Herculus","plane",2);
    Car c("Verna","Sedan",2);
 	return 0;
 }