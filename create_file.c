#include <stdio.h>

int main() {
  // Create a file pointer.
  FILE *fptr;

  // Open the file in write mode.
  fptr = fopen("create.txt", "w");

  // Write the following text to the file.
  fprintf(fptr, "my name is naveen.\n");
  fprintf(fptr, "CSE B1 av.en.u4cse22127.\n");

  // Close the file.
  fclose(fptr);

  return 0;
}