#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i, length = sizeof(arr) / sizeof(arr[0]);
    int temp;

    for (i = 0; i < length / 2; i++) {
        temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }

    printf("Reversed array is: ");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
