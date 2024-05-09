#include <stdio.h>

int main()
{
    int x = 10;
    int y = x++;

    printf("x = %d, y = %d\n", x, y);  // x = 11, y = 10

    return 0;
}

