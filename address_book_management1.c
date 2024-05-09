#include <stdio.h>
#include <string.h>

struct contact
{
    char name[20];
    int phone_number;
    char email[50];
    char address[50];
};

void print_contact_info(struct contact c[], int n)
{
    for (int i = 0; i < n; i++)
    {

        printf("Contact %d\n", i);
        printf("Name: %s\n", c[i].name);
        printf("Phone Number: %d\n", c[i].phone_number);
        printf("Email: %s\n", c[i].email);
        printf("Address: %s\n", c[i].address);
    }
}

int add_contact(struct contact c[], int n)
{
    if (n < 100)
    {
        printf("Enter Name: ");
        scanf("%s", c[n].name);
        printf("Enter Phone Number: ");
        scanf("%d", &c[n].phone_number);
        printf("Enter Email: ");
        scanf("%s", c[n].email);
        printf("Enter Address: ");
        scanf("%s", c[n].address);
        n++;
        return n;
    }
    else
    {
        printf("Contact list is full!\n");
        return n;
    }
}

void search_contact(struct contact c[], int n, int phone_number)
{
    for (int i = 0; i < n; i++)
    {
        if (c[i].phone_number == phone_number)
        {
            printf("Data is of contact %d\n", i);
            printf("Name: %s\n", c[i].name);
            printf("Phone Number: %d\n", c[i].phone_number);
            printf("Email: %s\n", c[i].email);
            printf("Address: %s\n", c[i].address);
            return;
        }
    }

    printf("Contact not found!\n");
}

void delete_contact(struct contact c[], int n, int contact_number)
{
    if (contact_number >= 0 && contact_number < n)
    {
        strcpy(c[contact_number].name, "");
        strcpy(c[contact_number].address, "");
        c[contact_number].phone_number = 0;
        strcpy(c[contact_number].email, "");
        printf("Contact deleted successfully!\n");
    }
    else
    {
        printf("Invalid contact number!\n");
    }
}

int main()
{
    int choice, phone_number, contact_number, n = 0;
    struct contact c[100];

    while (1)
    {
        printf("\n1. Print Contacts");
        printf("\n2. Add Contact");
        printf("\n3. Search Contact");
        printf("\n4. Delete Contact");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            print_contact_info(c, n);
            break;
        case 2:
            n = add_contact(c, n);
            break;
        case 3:
            printf("Enter the phone number to search: ");
            scanf("%d", &phone_number);
            search_contact(c, n, phone_number);
            break;
        case 4:
            printf("Enter the contact number to delete: ");
            scanf("%d", &contact_number);
            delete_contact(c, n, contact_number);
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice\n");
            break;
        }
    }

    return 0;
}