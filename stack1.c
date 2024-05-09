#include <stdio.h>

#define MAX_SIZE 100

// Structure to represent the stack
typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

// Initialize the stack
void initialize(Stack *stack) {
    stack->top = -1;
}

// Check if the stack is empty
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Check if the stack is full
int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Push an element onto the stack
void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow!\n");
        return;
    }
    
    stack->data[++stack->top] = value;
}

// Pop an element from the stack
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow!\n");
        return -1; // Return an error value or handle the error in a different way
    }
    
    return stack->data[stack->top--];
}

// Get the top element of the stack without removing it
int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1; // Return an error value or handle the error in a different way
    }
    
    return stack->data[stack->top];
}

int main() {
    Stack stack;
    initialize(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element: %d\n", peek(&stack));
    
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    
    printf("Top element: %d\n", peek(&stack));
    
    return 0;
}
