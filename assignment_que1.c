/*---Student Records Management:
Create a structure to represent student details, including attributes such 
as roll number, name, marks in different subjects, grade, and phone number. 
Implement a menu-driven program that allows the user to perform the following operations:
i. Read student details by calling a user-defined function getStudentInfo().
ii. Search for a specific student and display their information by calling a function
searchStudent().
iii. Update the phone number of a student by calling the function updatePhoneNumber().
The program should provide a menu with options for the user to choose from, and based 
on the selected option, it should perform the corresponding operation.Please note that 
you will need to implement the functions getStudentInfo(), searchStudent(), and 
updatePhoneNumber() according to the specified requirements.---*/

#include <stdio.h>
#include <string.h>


struct Student {
    int rollNumber;
    char name[50];
    int marks[3];
    char grade;
    char phoneNumber[15];
};

struct Student students[100];
int numStudents = 0;

void getStudentInfo() {
    struct Student student;

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter name: ");
    scanf(" %s", student.name);

    printf("Enter marks in 3 subjects: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &student.marks[i]);
    }

    printf("Enter grade: ");
    scanf(" %c", &student.grade);

    printf("Enter phone number: ");
    scanf(" %s", student.phoneNumber);

    students[numStudents++] = student;

    printf("Student details added successfully. \n");
}

void searchStudent() {
    int rollNumber;
    int index = -1;

    printf("Enter roll number to search: ");
    scanf("%d", &rollNumber);

    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNumber == rollNumber) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Student found!\n");
        printf("Roll Number: %d\n", students[index].rollNumber);
        printf("Name: %s\n", students[index].name);
        printf("Marks: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", students[index].marks[i]);
        }
        printf("\nGrade: %c\n", students[index].grade);
        printf("Phone Number: %s\n", students[index].phoneNumber);
    } else {
        printf("Student not found.\n");
    }
}

void updatePhoneNumber() {
    int rollNumber;
    int index = -1;

    printf("Enter roll number to update phone number: ");
    scanf("%d", &rollNumber);

    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNumber == rollNumber) {
           index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Enter new phone number: ");
        scanf(" %s", students[index].phoneNumber);
        printf("Phone number updated successfully.\n");
    } else {
        printf("Student not found. \n");
    }
}

int main() {
    int choice;

    do {
        printf("\n--- student Menu ---\n");
        printf("1. Read student details\n");
        printf("2. Search for a student\n");
        printf("3. Update student phone number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                getStudentInfo();
                break;
            case 2:
                searchStudent();
                break;
            case 3:
                updatePhoneNumber();
                break;
            case 4:
                printf(" Bye Bye Exiting program. \n");
                break;
            default:
                printf("Invalid choice. Please try again. \n");
                break;
        }
    } while (choice != 4);

    return 0;
}