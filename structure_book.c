#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    int year;
};

int main() {
    struct Book book1;
    
    printf("Enter book title: ");
    scanf("%s", book1.title);
    
    printf("Enter book author: ");
    scanf("%s", book1.author);
    
    printf("Enter publication year: ");
    scanf("%d", &book1.year);
    
    printf("Book Title: %s\n", book1.title);
    printf("Book Author: %s\n", book1.author);
    printf("Publication Year: %d\n", book1.year);
    
    return 0;
}
