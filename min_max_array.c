#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i, length = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    int smallest = arr[0];

    for (i = 1; i < length; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        } else if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest element in the array is: %d\n", largest);
    printf("Smallest element in the array is: %d\n", smallest);
    return 0;
}
