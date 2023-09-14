//Create a c program to take employee details including address(area, pin code, street) using nested structure
#include <stdio.h>

// Structure for the address
struct Address {
    char area[50];
    char street[50];
    int pincode;
};

// Structure for employee details
struct Employee {
    char name[50];
    int employeeId;
    struct Address address; // Nested structure for address
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.employeeId);

    printf("Enter Employee Address Details:\n");
    printf("Area: ");
    scanf("%s", emp.address.area);

    printf("Street: ");
    scanf("%s", emp.address.street);

    printf("Pin Code: ");
    scanf("%d", &emp.address.pincode);

    // Display employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.employeeId);
    printf("Address:\n");
    printf("Area: %s\n", emp.address.area);
    printf("Street: %s\n", emp.address.street);
    printf("Pin Code: %d\n", emp.address.pincode);

    return 0;
}
