#include <stdio.h>
#include <stdlib.h>

// Structure definition.
struct student {
  int id;
  char name[100];
  float gpa;
};

// Function declarations.
void print_menu();
void add_student(struct student *student);
void print_students(struct student *students, int num_students);

int main() {
  // Initialize the student array.
  struct student students[10];
  int num_students = 0;

  // Print the menu.
  print_menu();

  // Get the user's choice.
  int choice = 0;
  scanf("%d", &choice);

  // Process the user's choice.
  switch (choice) {
    case 1:
      // Add a student.
      add_student(students + num_students);
      num_students++;
      break;
    case 2:
      // Print all students.
      print_students(students, num_students);
      break;
    default:
      // Invalid choice.
      printf("Invalid choice.\n");
      break;
  }

  return 0;
}

// Prints the menu.
void print_menu() {
  printf("Please select an option:\n");
  printf("1. Add a student.\n");
  printf("2. Print all students.\n");
  printf("3. Exit.\n");
}

// Adds a student to the array.
void add_student(struct student *student) {
  // Get the student's ID.
  printf("Enter the student's ID: ");
  scanf("%d", &student->id);

  // Get the student's name.
  printf("Enter the student's name: ");
  scanf("%s", student->name);

  // Get the student's GPA.
  printf("Enter the student's GPA: ");
  scanf("%f", &student->gpa);
}

// Prints all students in the array.
void print_students(struct student *students, int num_students) {
  for (int i = 0; i < num_students; i++) {
    printf("Student %d:\n", i + 1);
    printf("ID: %d\n", students[i].id);
    printf("Name: %s\n", students[i].name);
    printf("GPA: %.2f\n", students[i].gpa);
  }
}