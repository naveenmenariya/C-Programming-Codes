#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 3, 4, 5,6};
    int i, length = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (i = 0; i < length; i++) {
        sum += arr[i];
    }

    printf("Sum of the array elements is: %d\n", sum);
    return 0;
}
