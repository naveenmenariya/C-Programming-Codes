#include <stdio.h>

int main() {
  // Create a file pointer.
  FILE *fptr;

  // Open the file in read mode.
  fptr = fopen("create.txt", "r");

  // Check if the file was opened successfully.
  if (fptr == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  // Read the first line of the file.
  char line[100];
  fgets(line, sizeof(line), fptr);

  // Print the line that was read.
  printf("The first line of the file is: %s\n", line);

  // Close the file.
  fclose(fptr);

  return 0;
}