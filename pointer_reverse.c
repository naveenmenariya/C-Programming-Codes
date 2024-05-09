// 3. Program to reverse a string using pointers:
#include <stdio.h>
void reverseString(char *str) {
char *start = str;
char *end = str;
while (*end != '\0')
{
end++;
}
end--;
while (start < end) {
char temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
int main() {
char str[] = "Hello, World!";
printf("Before reverse: %s\n", str);
reverseString(str);
printf("After reverse: %s\n", str);
return 0;
}