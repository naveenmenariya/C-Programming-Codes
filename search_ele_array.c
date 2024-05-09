#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, element = 6, found = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (arr[i][j] == element) {
                found = 1;
                break;
            }
        }
    }

    if (found) {
        printf("Element found in the 2D array\n");
    } else {
        printf("Element not found in the 2D array\n");
    }

    return 0;
}
