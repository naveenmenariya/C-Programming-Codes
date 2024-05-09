#include <stdio.h>

// Recursive Fibonacci function
int fibonacci(int n) {
    // Base case: Return 0 for Fibonacci(0)
    if (n == 0) {
        return 0;
    }

    // Base case: Return 1 for Fibonacci(1) and Fibonacci(2)
    if (n == 1 || n == 2) {
        return 1;
    }

    // Recursive case: Compute Fibonacci(n) using recursion
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10;  // Compute the Fibonacci sequence up to the 10th term

    printf("Fibonacci Sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
