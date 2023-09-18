//1)Create a C++ class Person with private attributes for name and age. Provide public methods to set and get these attributes
#include<iostream>
#include<string>
using namespace std;
class Person
{
    string name;
	int age;

public:
void setname(string n)
{
	name=n;
}
string getname()
{
	return name;
}
void setage(int n)
{
	age=n;
}
int getage()
{
	return age;
}
};
int main()
{
	
Person p;
p.setname("Ayush");	
cout<<p.getname()<<endl;
p.setage(44);	
cout<<p.getage();
	return 0;
}