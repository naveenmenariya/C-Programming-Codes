#include <stdio.h>
int is_prime(int n) {
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}
int main()
{
    int i,n,p;
    printf("enter a number");
    scanf("%d",&n);
    p=is_prime(n);
    if(p==1)
    {
        printf("%d is prime",n);
    
    }
    else if (p==0)
    {
        printf("%d is not prime",n);
    }
    return 0;
}