#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct Contact {
    char name[50];
    char phone[10];
    char email[50];
    char address[100];
};

struct Contact contacts[MAX_CONTACTS];
int numContacts = 0;

void printContactInfo(struct Contact contact) {
    printf("Enter detail:\n");
    printf("Name:");
    scanf("%s", contact.name);
    printf("Phone number:");
    scanf("%s", contact.phone);
    printf("Email address:");
    scanf("%s", contact.email);
    printf("Permanent address:");
    scanf(" %[^\n]", contact.address);
}

void addContact() {
    if (numContacts >= MAX_CONTACTS) {
        printf("Address array is full. Cannot add contacts.\n");
        return;
    }
    
    struct Contact newContact;
    printContactInfo(newContact);
    contacts[numContacts] = newContact;
    numContacts++;
    printf("Contact added.\n");
}

void searchContact() {
    char searchTerm[50];
    printf("Enter the name or phone number to search: ");
    scanf("%s", searchTerm);

    int found = 0;
    for (int i = 0; i < numContacts; i++) {
        if (strcmp(contacts[i].name, searchTerm) == 0 || strcmp(contacts[i].phone, searchTerm) == 0) {
            printf("Contact found:\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Phone number: %s\n", contacts[i].phone);
            printf("Email address: %s\n", contacts[i].email);
            printf("Permanent address: %s\n", contacts[i].address);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Contact not found.\n");
    }
}

void deleteContact() {
    char searchTerm[50];
    printf("Enter the name or phone number to delete: ");
    scanf("%s", searchTerm);
    
    int found = 0;
    for (int i = 0; i < numContacts; i++) {
        if (strcmp(contacts[i].name, searchTerm) == 0 || strcmp(contacts[i].phone, searchTerm) == 0) {
            for (int j = i; j < numContacts - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            numContacts--;
            printf("Contact deleted.\n");
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Contact not found.\n");
    }
}

int main() {
    int choice;
    do {
        printf("\nAddress Book Menu\n");
        printf("1. Contact details\n");
        printf("2. Add contact\n");
        printf("3. Search contact\n");
        printf("4. Delete contact\n");
        printf("5. Exit\n");
        printf("Enter choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printContactInfo(contacts[numContacts]);
                numContacts++;
                break;
            case 2:
                addContact();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                printf("Program end.\n");
                break;
            default:
                printf("Enter a valid choice.\n");
        }
    } while (choice != 5);

    return 0;
}