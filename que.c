#include <stdio.h>

#define MAX_SIZE 100

// Structure to represent the queue
typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
} Queue;

// Initialize the queue
void initialize(Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Check if the queue is empty
int isEmpty(Queue *queue) {
    return queue->front == -1;
}

// Check if the queue is full
int isFull(Queue *queue) {
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

// Add an element to the queue
void enqueue(Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue overflow!\n");
        return;
    }
    
    if (isEmpty(queue)) {
        queue->front = 0;
    }
    
    queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->data[queue->rear] = value;
}

// Remove an element from the queue
int dequeue(Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow!\n");
        return -1; // Return an error value or handle the error in a different way
    }
    
    int value = queue->data[queue->front];
    
    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }
    
    return value;
}

// Get the front element of the queue without removing it
int peek(Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1; // Return an error value or handle the error in a different way
    }
    
    return queue->data[queue->front];
}

int main() {
    Queue queue;
    // initialize(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("Front element: %d\n", peek(&queue));
    
    printf("Dequeued element: %d\n", dequeue(&queue));
    printf("Dequeued element: %d\n", dequeue(&queue));
    
    printf("Front element: %d\n", peek(&queue));
    
    return 0;
}
