#include <stdio.h>

// Define a structure to represent a person
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare a variable of type Person
    struct Person person1;

    // Access and modify the members of the structure
    printf("Enter name: ");
    scanf("%s", person1.name);

    printf("Enter age: ");
    scanf("%d", &person1.age);

    // Display the information stored in the structure
    printf("Person's name: %s\n", person1.name);
    printf("Person's age: %d\n", person1.age);

    return 0;
}
