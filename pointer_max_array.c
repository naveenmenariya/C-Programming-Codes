// 2. Program to find the maximum element in an array using pointers:
#include <stdio.h>
int findMax(int *arr, int size)
{
int max = *arr;
for (int i = 1; i < size; i++) {
if (*(arr + i) > max) {
max = *(arr + i);
}
}
return max;
}
int main() {
int arr[] = {5, 8, 20, 10, 3};
int size = sizeof(arr) / sizeof(arr[0]);
int max = findMax(arr, size);
printf("Maximum element: %d\n", max);
return 0;
}