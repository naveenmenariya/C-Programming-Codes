// Grade computation 

#include <stdio.h>

int main() {
  int grade;
  printf("Enter a grade (0-100): ");
  scanf("%d", &grade);

  if (grade >= 90) {
    printf("A\n");
  } else if (grade >= 80) {
    printf("B\n");
  } else if (grade >= 70) {
    printf("C\n");
  } else if (grade >= 60) {
    printf("D\n");
  } else {
    printf("F\n");
  }

  return 0;
}


