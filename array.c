#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i, length = sizeof(arr) / sizeof(arr[0]);

    printf("Elements of the array are: ");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
