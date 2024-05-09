#include <stdio.h>

struct Rectangle {
    int length;
    int width;
};

int main() {
    struct Rectangle rectangle1;
    
    rectangle1.length = 5;
    rectangle1.width = 3;
    
    printf("Rectangle Length: %d\n", rectangle1.length);
    printf("Rectangle Width: %d\n", rectangle1.width);
    
    return 0;
}
