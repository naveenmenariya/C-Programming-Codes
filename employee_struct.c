#include <stdio.h>

struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Employee employee1;
    
    printf("Enter employee name: ");
    scanf("%s", employee1.name);
    
    printf("Enter employee age: ");
    scanf("%d", &employee1.age);
    
    printf("Enter employee salary: ");
    scanf("%f", &employee1.salary);
    
    printf("Employee Name: %s\n", employee1.name);
    printf("Employee Age: %d\n", employee1.age);
    printf("Employee Salary: %.2f\n", employee1.salary);
    
    return 0;
}
