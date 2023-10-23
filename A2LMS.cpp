/*2. Employee Payroll Abstraction: Create a C++ program that models an employee 
payroll system. Define an Employee class with attributes like name, ID, and salary
. Abstract the calculation of bonuses and display employee details.
Private name. ID, salary.*/
#include <iostream>
#include <string>

using namespace std;

// Abstract Employee class
class Employee {
private:
    string name;
    int ID;
    double salary;

public:
    // Constructor to initialize employee details
    Employee(const string& employeeName, int employeeID, double employeeSalary)
        : name(employeeName), ID(employeeID), salary(employeeSalary) {}

    // Pure virtual function to calculate the bonus (abstract method)
    virtual double calculateBonus() = 0;

    // Method to display employee details
    void displayDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << ID << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Bonus: $" << calculateBonus() << endl;
    }
};

// Manager class that inherits from Employee
class Manager : public Employee {
public:
    Manager(const string& employeeName, int employeeID, double employeeSalary)
        : Employee(employeeName, employeeID, employeeSalary) {}

    // Implement the calculateBonus method for managers (10% of the salary)
    double calculateBonus() override {
        return 0.10 * salary;
    }
};

int main() {
    // Create a manager
    Employee* manager = new Manager("Alice Smith", 201, 80000.0);

    // Display manager details
    cout << "Manager Details:" << endl;
    manager->displayDetails();

    // Clean up dynamic memory
    delete manager;

    return 0;
}

