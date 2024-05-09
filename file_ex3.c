#include <stdio.h>

int main() {
    FILE *file = fopen("create.txt", "r"); // Open the file in read mode

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    fseek(file, 5, SEEK_SET); // Move the file pointer to the 6th character from the beginning

    int ch = fgetc(file); // Read the character at the current file position

    if (ch != EOF) {
        printf("Character at position 6: %c\n", ch);
    } else {
        printf("End of file reached.\n");
    }

    fclose(file); // Close the file

    return 0;
}