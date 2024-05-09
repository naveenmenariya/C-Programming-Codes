// C program to demonstrate use of ftell()
#include <stdio.h>

int main()
{
	/* Opening file in read mode */
	FILE* fp = fopen("create.txt", "r");

	/* Reading first string */
	char string[20];
	fscanf(fp, "%s", string);

	/* Printing position of file pointer */
	printf("%ld", ftell(fp));
	return 0;
}
