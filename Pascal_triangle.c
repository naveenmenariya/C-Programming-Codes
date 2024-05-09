// 1. Write a program that generates Pascal's triangle up to 
// a given number of rows. The program should take the number 
// of rows as input and display the triangle using a 2D array.
/*#include <stdio.h>
long fun(int y)
{
    int z;
    long result = 1;

    for( z = 1 ; z <= y ; z++ )
        result = result*z;

    return ( result );
}
int main()
{
    int x, y, z;
    printf("Input the number of rows in Pascal's triangle: ");
    scanf("%d",&y);
    for ( x = 0 ; x < y ; x++ )
    {
        for ( z = 0 ; z <= ( y - x - 2 ) ; z++ )
            printf(" ");
        for( z = 0 ; z <= x ; z++ )
            printf("%ld ",fun(x)/(fun(z)*fun(x-z)));

        printf("\n");
    }
    return 0;
}*/

#include <stdio.h>

int factorial(int n) 
{
    int i, fact = 1;
    for (i = 1; i <= n; i++) 
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) 
{
    return factorial(n) / (factorial(r) * factorial(n-r));
}

int main() 
{
    int num, i, j, a[100][100];
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    
    for (i = 0; i < num; i++) 
    {
        for(j=1;j<=num-i;j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++) 
        {
            a[i][j]= nCr(i,j);
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
    return 0;
}