#include <stdio.h>

// Function to push an element onto the stack
void push(char stack[], int top, char item) {
  stack[++top] = item;
}

// Function to pop an element from the stack
char pop(char stack[], int top) {
  return stack[top--];
}

// Function to convert a postfix expression to infix expression
void postfixToInfix(char postfix[]) {
  int top = -1;
  char infix[50];
  int len = strlen(postfix);

  // Iterate through the postfix expression
  for (int i = 0; i < len; i++) {
    // If the current character is an operand
    if (isdigit(postfix[i])) {
      // Push it onto the stack
      push(infix, top, postfix[i]);
    } else {
      // If the current character is an operator
      // Pop two operands from the stack
      char op1 = pop(infix, top);
      char op2 = pop(infix, top);

      // Form the infix expression
      sprintf(infix + top + 1, "(%c%c%c)", op1, op2, postfix[i]);
      top++;
    }
  }

  // Print the infix expression
  printf("The infix expression is: %s\n", infix);
}

int main() {
  // Get the postfix expression from the user
  char postfix[50];
  printf("Enter the postfix expression: ");
  scanf("%s", postfix);

  // Convert the postfix expression to infix expression
  postfixToInfix(postfix);

  return 0;
}