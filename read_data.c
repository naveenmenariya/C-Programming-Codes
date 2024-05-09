#include <stdio.h>
int main()
{
    FILE *f1;
    char c;
    printf("data input\n\n");
    f1 = fopen("INPUT", "w");
    while((c=getchar()) != (-1))
    putc(c,f1);
    fclose(f1);
    printf("\ndata output\n\n");
    f1=fopen("INPUT","r");
    while((c=getc(f1)) !=EOF)
    printf("%c",c);
    fclose(f1);

}