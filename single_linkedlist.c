#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node* next;
};

struct Node* head = NULL;

void insertNode(int data) {
  struct Node* newNode = malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;

  if (head == NULL) {
    head = newNode;
  } else {
    struct Node* temp = head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newNode;
  }
}

void printList() {
  struct Node* temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main() {
  insertNode(10);
  insertNode(20);
  insertNode(30);

  printList();

  return 0;
}