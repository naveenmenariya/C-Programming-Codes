#include <stdio.h>

int main()
{
    int integer;
    float decimal;
    char letter;
    printf("Enter an integer, a decimal number, and a letter: ");
    scanf("%d %f %c", &integer, &decimal, &letter);
    printf("You entered: %d %f %c\n", integer, decimal, letter);
    return 0;
}
