#include <stdio.h>
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main()
{
    int i,n,f;
    printf("enter a number ");
    scanf("%d",&n);
    f=factorial(n);
    printf("factorial is %d",f);
    return 0;

}