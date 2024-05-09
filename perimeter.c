#include <stdio.h>
int rectangle_perimeter(int length, int width) {
    return 2 * (length + width);
}
int main()
{
    int n,m,length, width;
    printf("Enter length of rectangle ");
    scanf("%d", &n);
    printf("Enter width of rectangle;");
    scanf("&d",&m);

    printf("The perimeter of rectangle is %d\n", rectangle_perimeter(n, m));
    return 0;





}