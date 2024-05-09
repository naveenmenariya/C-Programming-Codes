#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, transposed[3][3];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transposed[j][i] = arr[i][j];
        }
    }

    printf("Transposed 2D array is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
