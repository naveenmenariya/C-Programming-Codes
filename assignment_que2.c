/*--Employee Database Management
Create a structure to represent employee details such as name, 
age, employee ID, salary, designation, phone number, and permanent address. 
Use a substructure for salary with members like basic salary, DA, and HRA. 
Implement a menu-driven program that allows the user to perform the following 
operations using an array of structures to create an employee database:
i. Read employee details by calling a user-defined function getEmployeeInfo().
ii. Display all employees who have the same designation with the help of a function
 searchByDesignation().
iii. Update salary details and designation for a promoted employee using the function 
updateEmployee().
The program should provide a menu with options for the user to choose from, and based 
on the selected option, it should perform the corresponding operation. Please note that 
you will need to implement the functions getEmployeeInfo(), searchByDesignation(), and 
updateEmployee() according to the specified requirements.--*/
#include <stdio.h>
#include <string.h>

struct Salary {
    float basicSalary;
    float DA;
    float HRA;
};

struct Employee {
    char name[50];
    int age;
    int employeeID;
    struct Salary salary;
    char designation[50];
    char phoneNumber[15];
    char address[100];
};

struct Employee employees[100];
int numEmployees = 0;

void getEmployeeInfo() {
    struct Employee newEmployee;
    
    printf("Enter employee name: ");
    scanf("%s", newEmployee.name);
    
    printf("Enter employee age: ");
    scanf("%d", &newEmployee.age);
    
    printf("Enter employee ID: ");
    scanf("%d", &newEmployee.employeeID);
    
    printf("Enter employee basic salary: ");
    scanf("%f", &newEmployee.salary.basicSalary);
    
    printf("Enter employee DA: ");
    scanf("%f", &newEmployee.salary.DA);
    
    printf("Enter employee HRA: ");
    scanf("%f", &newEmployee.salary.HRA);
    
    printf("Enter employee designation: ");
    scanf("%s", newEmployee.designation);
    
    printf("Enter employee phone number: ");
    scanf("%s", newEmployee.phoneNumber);
    
    printf("Enter employee address: ");
    scanf("%s", newEmployee.address);
    
    employees[numEmployees] = newEmployee;
    numEmployees++;
    
    printf("Employee details added successfully!\n");
}

void searchByDesignation() {
    char searchDesignation[50];
    int found = 0;
    
    printf("Enter designation to search: ");
    scanf("%s", searchDesignation);
    
    printf("Employees with designation '%s':\n", searchDesignation);
    
    for (int i = 0; i < numEmployees; i++) {
        if (strcmp(employees[i].designation, searchDesignation) == 0) {
            printf("Name: %s\n", employees[i].name);
            printf("Age: %d\n", employees[i].age);
            printf("Employee ID: %d\n", employees[i].employeeID);
            printf("Salary Details:\n");
            printf("Basic Salary: %.2f\n", employees[i].salary.basicSalary);
            printf("DA: %.2f\n", employees[i].salary.DA);
            printf("HRA: %.2f\n", employees[i].salary.HRA);
            printf("Phone Number: %s\n", employees[i].phoneNumber);
            printf("Address: %s\n", employees[i].address);
            
            found = 1;
        }
    }
    
    if (!found) {
        printf("No employees found with the given designation.\n");
    }
}

void updateEmployee() {
    int employeeID;
    int found = 0;
    
    printf("Enter employee ID to update: ");
    scanf("%d", &employeeID);
    
    for (int i = 0; i < numEmployees; i++) {
        if (employees[i].employeeID == employeeID) {
            printf("Enter new salary details:\n");
            printf("New basic salary: ");
            scanf("%f", &employees[i].salary.basicSalary);
            
            printf("New DA: ");
            scanf("%f", &employees[i].salary.DA);
            
            printf("New HRA: ");
            scanf("%f", &employees[i].salary.HRA);
            
            printf("Enter new designation: ");
            scanf("%s", employees[i].designation);
            
            printf("Salary details and designation updated for employee ID %d.\n", employeeID);
            
            found = 1;
        }
    }
    
    if (!found) {
        printf("No employee found with the given ID.\n");
    }
}

int main() {
    int choice;
    
    do {
        printf("\nEmployee Database Menu:\n");
        printf("1. Add Employee\n");
        printf("2. Search Employees by Designation\n");
        printf("3. Update Salary and Designation\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                getEmployeeInfo();
                break;
            case 2:
                searchByDesignation();
                break;
            case 3:
                updateEmployee();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    
    return 0;
}