#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i, length = sizeof(arr) / sizeof(arr[0]);
    int element = 2;
    int found = 0;

    for (i = 0; i < length; i++) {
        if (arr[i] == element) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element found in the array\n");
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
