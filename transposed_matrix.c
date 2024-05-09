// 2. Write a program that takes in a square matrix (2D array) 
// as input and transposes it. The program should display the 
// transposed matrix using another 2D array.
#include<stdio.h>
void main()
{
    int c,r,i,j;
    printf("enter the number of rows and column\n");
    scanf("%d %d" ,&r,&c);
    int array[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\n enter elements");
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n orignal matris is :\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d \t", array[i][j]);
        }
        printf("\n");

    }
     printf("\n transpose matris is :\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d \t", array[j][i]);
        }
        printf("\n");

    }
}