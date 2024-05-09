// 5.Write a program that takes in two sorted arrays of integers 
// and their respective sizes as input. The program should find the 
// common elements between the two arrays and display them. Use efficient
//  algorithms to minimize time complexity

#include <stdio.h>

void findCommonElements(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
}

int main() {
    int arr1[] = {1, 3, 4, 6, 7};
    int arr2[] = {2, 4, 5, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Common elements: ");
    findCommonElements(arr1, size1, arr2, size2);
    
    return 0;
}
