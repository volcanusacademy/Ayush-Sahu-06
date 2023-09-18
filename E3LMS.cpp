//3)Write a C++ class Employee with private attributes name and salary. Provide a method to set the name and a method to get the salary.
#include<iostream>
#include<string>
using namespace std;
class Person
{
    string name;
	int salary;

public:
void setname(string n)
{
	name=n;
}
string getname()
{
	return name;
}
void setsalary(int n)
{
	 salary=n;
}
int getsalary()
{
	return salary;
}
};
int main()
{
	
Person p;
p.setname("Ayush");	
cout<<p.getname()<<endl;
p.setsalary(4400000);	
cout<<p.getsalary();
	return 0;
}