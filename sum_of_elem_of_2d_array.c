#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, sum = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }

    printf("Sum of the elements in the 2D array is: %d\n", sum);
    return 0;
}
