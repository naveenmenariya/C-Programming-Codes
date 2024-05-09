/**---#include <stdio.h>

// Recursive binary search function
int binarySearch(int arr[], int start, int end, int target) {
    // Base case: If start index exceeds end index, target not found
    if (start > end) {
        return -1;
    }

    // Calculate the middle index
    int mid = start + (end - start) / 2;

    // Base case: If target is found at the middle index, return it
    if (arr[mid] == target) {
        return mid;
    }

    // Recursive case: If target is smaller, search in the left half
    if (arr[mid] > target) {
        return binarySearch(arr, start, mid - 1, target);
    }

    // Recursive case: If target is larger, search in the right half
    return binarySearch(arr, mid + 1, end, target);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 12;
    int index = binarySearch(arr, 0, n - 1, target);

    if (index != -1) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
**/
#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;  // target not found
}

int main() {
    int arr[] = {2, 5, 7, 12, 18, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the target element: ");
    scanf("%d", &target);

    int index = binarySearch(arr, size, target);

    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}
