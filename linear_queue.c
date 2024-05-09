#include <stdio.h>
struct queue {
  int front;
  int rear;
  int data[10];
};
void init_queue(struct queue *q) {
  q->front = 0;
  q->rear = 0;
}
int is_empty(struct queue *q) {
  return (q->front == q->rear);
}s
int is_full(struct queue *q) {
  return (q->rear == 10 - 1);
}
void enqueue(struct queue *q, int item) {
  if (!is_full(q)) {
    q->data[q->rear] = item;
    q->rear++;
  } else {
    printf("Queue is full!\n");
  }
}
int dequeue(struct queue *q) {
  int item;

  if (!is_empty(q)) {
    item = q->data[q->front];
    q->front++;
  } else {
    printf("Queue is empty!\n");
    item = -1;
  }

  return item;
}
void display_queue(struct queue *q) {
  int i;

  if (!is_empty(q)) {
    for (i = q->front; i < q->rear; i++) {
      printf("%d ", q->data[i]);
    }
    printf("\n");
  } else {
    printf("Queue is empty!\n");
  }
}

int main() {
  struct queue q;
  int item;

  init_queue(&q);
  enqueue(&q, 10);
  enqueue(&q, 20);
  enqueue(&q, 30);

  display_queue(&q);
  item = dequeue(&q);
  printf("The dequeued element is: %d\n", item);
  display_queue(&q);

  return 0;
}
