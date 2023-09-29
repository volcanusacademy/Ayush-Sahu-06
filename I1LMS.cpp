/*1. Animal Inheritance:Create a base class Animal with properties like name and age. Then,
 create subclasses (e.g., Dog, Cat) that inherit from Animal and add specific properties
  and methods to each subclass. Demonstrate how you can create instances of these
 subclasses and access both inherited and subclass-specific attributes and methods.*/
#include<iostream>
#include<string>
using namespace std;
 class Animal{
 	public:
 	string name;
 	int age;
 	void info()
 	{
 	
 		
	 }
 };
 class Dog:public Animal{
 	public:
 	 Dog(string n,int b)
 	{
 	name=n;
 	age=b;
    cout<<" Dog Name "<<name<<" age "<<age<<endl;
    
	}

       	
 };
  class Cat:public Animal{
 	public:
 	 Cat(string n,int b)
 	{
 	name=n;
 	age=b;
	}
	void display()
	{
	
		cout<<" Cat Name "<<name<<" age "<<age<<endl;
    }
       	
 };
 int main()
 {
 	Dog d("Sheru",33);
 	Cat c("Kitty",34);
	c.display();

 	return 0;
 }
 