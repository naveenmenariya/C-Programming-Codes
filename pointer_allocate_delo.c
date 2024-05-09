// 5. Program to allocate and deallocate dynamic memory using pointers:
#include <stdio.h>
#include <stdlib.h>
int main() {
int *ptr;
int size;
printf("Enter the size of the array: ");
scanf("%d", &size);
ptr = (int*) malloc(size * sizeof(int));
if (ptr == NULL) {
printf("Memory allocation failed.\n");
return 1;
}
printf("Enter the elements of the array:\n");
for (int i = 0; i < size; i++) {
scanf("%d", &ptr[i]);
}
printf("Elements of the array: ");
for (int i = 0; i < size; i++) {
printf("%d ", ptr[i]);
}
printf("\n");
free(ptr);
return 0;
}