#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

void generateRandomPassword(char *password, int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charsetLength = sizeof(charset) - 1;

    for (int i = 0; i < length; i++) {
        int index = rand() % charsetLength;
        password[i] = charset[index];
    }

    password[length] = '\0';
}

int main() {
    char password[PASSWORD_LENGTH + 1];

    srand(time(NULL));

    generateRandomPassword(password, PASSWORD_LENGTH);

    printf("Generated Password: %s\n", password);

    return 0;
}
