/*3. Employee Polymorphism:

Define an Employee class with a method calculateSalary(). Create subclasses for different
 types of employees (e.g., Full_Time_Employee, Part_Time_Employee, Intern) and demonstrate
 how polymorphism can be used to calculate salaries differently for each type of employee*/
 #include<iostream>
 using namespace std;
 class Employee
 {
 public:
void  calculateSalary()
 {
 	cout<<"This Salary of the Employees";
}
};
class Full_Time_Employee : public Employee
{
	public:
	void calculateSalary()
	{
		cout<<"Employee is Full Time Salary 100000.0"<<endl;
	}	
		
};
class Part_Time_Employee : public Employee
{
	public:
	void calculateSalary()
	{
		cout<<"Employee is Part Time Salary 50000.0"<<endl;
	}	
		
};
class Intern : public Employee
{
	public:
	void calculateSalary()
	{
		cout<<"Employee is Full Time Salary 25000.0"<<endl;
	}	
		
};
int main()
{
 Intern I;
 Part_Time_Employee P;
 Full_Time_Employee F;
 F.calculateSalary();
 I.calculateSalary();
 P.calculateSalary();
 
}